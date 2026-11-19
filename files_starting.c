#include <stdio.h>

int main(){
    FILE *fp;
    char name[50];
    int marks;

    fp=fopen("student.txt","r");

    if(fp==NULL){
        printf("File not found");
        return 1;
    }

    fscanf(fp,"%s %d", name,&marks);

    printf("name: %s\n",name);
    printf("marks: %d\n",marks);

    fclose(fp);

    return 0;
}
