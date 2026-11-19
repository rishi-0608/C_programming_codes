#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    int count=0;

    fp=fopen("student.txt","r");

    if(fp==NULL){
        printf("file not found");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF){
        count++;
    }

    printf("total characters: %d",count);

    fclose(fp);

    return 0;
}
