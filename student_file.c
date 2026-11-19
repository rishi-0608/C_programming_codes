#include <stdio.h>

int main(){
    FILE *fp;

    fp=fopen("student.txt","w");

    if(fp==NULL){
        printf("file cannot be opend");
        return 1;
    }

    fprintf(fp,"Ravi 95");

    fclose(fp);

    printf("data written successfully");

    return 0;
}

