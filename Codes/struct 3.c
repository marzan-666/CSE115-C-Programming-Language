#include<stdio.h>

typedef struct students
{
    int id;
    char name[100];
}students;

void printdata (students *a);

void main()
{
    students student1;
    student1.id=1621396042;
    gets(student1.name);
    printdata(&student1);
}
void printdata(students *a)
{
    printf("%d\n",a->id);
    printf("%s",a->name);
}

