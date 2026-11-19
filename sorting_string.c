#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i,j,temp;

    printf("enter a string:");
    scanf("%s",str);

    for(i=0;i<strlen(str);i++){
        for(j=i+1;j<strlen(str);j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }

    printf("sorted string: %s",str);

    return 0;
}
