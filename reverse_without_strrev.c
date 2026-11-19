#include <stdio.h>
#include <string.h>

int main(){
    char str[100], temp;
    int i,len;

    printf("enter a string:");
    scanf("%s",str);

    len=strlen(str);

    for(i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }

    printf("reversed string: %s",str);

    return 0;
}
