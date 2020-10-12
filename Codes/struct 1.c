#include<stdio.h>

struct student
{
    char name[100];
    int id;
    char department[100];
};
void main()
{
    struct student a;
    printf("enter student name: ");
    scanf("%s",a.name);


    printf("enter id: ");
    scanf("%d",&a.id);


    printf("enter name of department: ");
    scanf("%s",a.department);


    printf("\n");
    printf("student name is: %s\n",a.name);
    printf("student id is: %d\n",a.id);
    printf("department is: %s\n",a.department);
}
