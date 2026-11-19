#include <stdio.h>

struct student{
    char name[50];
    int marks;
};

int main(){
    FILE *fp;
    struct student s;

    fp=fopen("student.dat","wb");

    if(fp==NULL){
        printf("file cannot be opened");
        return 1;
    }

    printf("enter name and marks");
    scanf("%49s %d",s.name,&s.marks);

    fwrite(&s,sizeof(s),1,fp);

    printf("data written successfully");

    return 0;
}
