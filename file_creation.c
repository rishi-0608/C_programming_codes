#include <stdio.h>

int main(){
    FILE *fp;

    fp=fopen("data.txt","w");

    if(fp==NULL){
        printf("file cannot be opend");
        return 1;
    }

    fprintf(fp,"hello world");
    fclose(fp);

    printf("data written successfully");

    return 0;
}
