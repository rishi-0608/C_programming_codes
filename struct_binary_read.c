#include <stdio.h>

struct student{
    char name[50];
    int marks;
};

int main(){
    FILE *fp;
    struct student s;

    fp=fopen("student.dat","rb");

    if(fp==NULL){
        printf("file cannot be opened");
        return 1;
    }

    while(fread(&s,sizeof(s),1,fp)==1){
        printf("%s %d\n",s.name,s.marks);
    }

    fclose(fp);

    return 0;
}
