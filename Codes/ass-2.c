#include<stdio.h>
void main()
{
    int n,i,*x;
    printf ("enter how many no. to read?");
    scanf("%d",&n);
    x=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter no %d",i++);
        scanf("%d",x+i);
    }
    reorder(n,x);
    printf("sorted list: ");
    for(i=0;i<n;i++){
        printf("%d",*(x+i));
    }
}
int i,item,temp;
void reorder(int m, int num)
{
    for(item=0;item<m-1;++i){
        if(*(num+i) < *(num+item)){
            temp=*(num+i);
            *(num+i)= *(num+item);
            *(num+item)=temp;
        }
    }
}
