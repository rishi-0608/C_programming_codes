#include <stdio.h>

int main(){
    FILE *fp;

    fp=fopen("student.txt","a");

    if(fp==NULL){
        printf("file not found");
        return 1;
    }

    fprintf(fp,"\nsigma 99");
    fclose(fp);

    printf("data appended successfully");

    return 0;
}
