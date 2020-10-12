#include<stdio.h>

int main()

{
    int variable=100;
    int *pointer;

    pointer=&variable;

    printf("value of pointer variable: %d\n",*pointer);
    printf("address stored in pointer variable: %x\n",pointer);



    return 0;
}
