#include <stdio.h>
#include <string.h>

int main(){
    char str[100],ch;
    int i,found=0;

    printf("enter a string:");
    scanf("%[^\n]",str);

    printf("enter the character:");
    scanf(" %c",&ch);

    for(i=0;i<strlen(str);i++){
        if(str[i]==ch){
            found=1;
            break;
        }
    }

    if(found==1){
        printf("character found");
    }
    else{
        printf("character not found");
    }
}
