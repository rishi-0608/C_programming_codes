#include <stdio.h>

struct student{
    char name[50];
    int marks;
};

int main(){
    FILE *fp;
    struct student s;

    fp=fopen("student.txt","r");

    if(fp==NULL){
        printf("file cannot be opened");
        return 1;
    }

    printf("file opend successfully\n\n");

    while(fscanf(fp,"%s %d",s.name,&s.marks)==2){
        printf("%s %d\n",s.name,s.marks);
    }

    printf("\n\nfile closed successfully\n");

    fclose(fp);

    return 0;
}
