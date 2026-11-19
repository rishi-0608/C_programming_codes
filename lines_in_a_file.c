#include <stdio.h>

int main(){
    FILE *fp;
    int ch,count=0,last='\n';

    fp=fopen("student.txt","r);

    if(fp==NULL){
        printf("file not found");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n')
            count++;
        last=ch;
    }

    if(last!='\n')
        count++;

    printf("total lines: %d",count);

    fclose(fp);

    return 0;
}
