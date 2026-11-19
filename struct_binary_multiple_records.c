#include <stdio.h>

struct student{
    char name[50];
    int marks;
};

int main(){
    FILE *fp;
    struct student s;
    int n,i;

    fp=fopen("student.dat","wb");

    if(fp==NULL){
        printf("file cannot be opened");
        return 1;
    }

    printf("enter number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter name and marks:");
        scanf("%49s %d",s.name,&s.marks);

        fwrite(&s,sizeof(s),1,fp);
    }

    fclose(fp);

    fp=fopen("student.dat","rb");

    while(fread(&s,sizeof(s),1,fp)==1){
        printf("Name:%s\nMarks:%d\n\n",s.name,s.marks);
    }

    fclose(fp);

    return 0;
}
