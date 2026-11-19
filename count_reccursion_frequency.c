#include <stdio.h>

int main(){
    char str[100],ch;
    int i,count=0;

    printf("{enter string:");
    scanf("%[^\n]",str);

    printf("enter a character");
    scanf(" %c",&ch);

    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }

    printf("the character %c reapeated for %d times",ch,count);
}
