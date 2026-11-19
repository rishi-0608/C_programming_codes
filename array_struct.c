#include <stdio.h>

struct student{
    int rollno;
    char name[50];
    float marks;
};

int main(){
    struct student s[15];

    int i,n;

    printf("enter number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
         printf("enter rollno:");
         scanf("%d",&s[i].rollno);

        printf("enter name:");
        scanf("%s",s[i].name);

        printf("enter marks:");
        scanf("%f",&s[i].marks);
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].rollno);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
