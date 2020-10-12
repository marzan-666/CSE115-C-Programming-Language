#include<stdio.h>
void main()

{
    int m[4][3];
    int i,j;
    printf("enter value of rows and column: ");
    for(i=0;i<4;i++){
        for(j=0;j<3;++j){
            scanf("%d",&m[i][j]);
        }
    }
    printf("output matrix is:\n");
    for(i=0;i<4;++i){
        for(j=0;j<3;++j){
            printf("%d\t",m[i][j]);

        }
        printf("\n");
    }
}

