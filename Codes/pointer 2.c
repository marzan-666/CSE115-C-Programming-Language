#include<stdio.h>
int main()

{
    int var[]={10,20,30};
    int i,*pointer;
    pointer=var;

    for(i=0;i<3;i++){
            printf("value of var[%d]: %d\n",i,*pointer);
        printf("address of var[%d]: %x\n",i,pointer);

        pointer++;
}
    for(i=2;i>=0;i--){
        printf("value of var[%d]: %d\n",i,*(pointer-1));
        printf("address of var[%d]: %x\n",i,pointer);
pointer--;
    }


    return 0;
}
