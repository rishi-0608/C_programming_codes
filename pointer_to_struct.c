#include <stdio.h>

struct student{
    int rollno;
    char name[50];
    float marks;
};

int main(){
    struct student s;
    struct student *ptr;

    ptr=&s;

    printf("enter rollno:");
    scanf("%s",&ptr->rollno);

    printf("enter name:");
    scanf("%s",ptr->name);

    printf("enter marks:");
    scanf("%f",&ptr->marks);

    printf("\n details of students\n");
    printf("Roll number: %d\n",ptr->rollno);
    printf("Name: %s\n",ptr->name);
    printf("Marks: %.2f\n",ptr->marks);

    return 0;
}
