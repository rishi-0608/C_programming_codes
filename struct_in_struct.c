#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct student{
    int rollno;
    char name[50];
    struct date dob;
};

int main(){
    struct student s;

    printf("enter rollno:");
    scanf("%d",&s.rollno);

    printf("enter name:");
    scanf("%s",s.name);

    printf("enter date of birth (DD MM YYYY):");
    scanf("%d %d %d",&s.dob.day,&s.dob.month,&s.dob.year);

     printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);

    printf("Date of Birth: %02d/%02d/%04d\n",s.dob.day,s.dob.month,s.dob.year);

    return 0;
}
