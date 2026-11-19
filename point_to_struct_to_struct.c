#include <stdio.h>

struct address{
    char city[30];
    int pincode;
};

struct student{
    int rollno;
    char name[50];
    struct address *addr;
};

int main(){
    struct student s;
    struct address a;

    s.addr=&a;

    printf("enter rollno:");
    scanf("%d",&s.rollno);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("enter city:");
    scanf("%s",s.addr->city);

    printf("enter pincode:");
    scanf("%d",&s.addr->pincode);

    printf("\nStudent Details\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("City: %s\n", s.addr->city);
    printf("Pincode: %d\n", s.addr->pincode);

    return 0;
}
