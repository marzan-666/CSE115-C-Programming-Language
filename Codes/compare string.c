#include<stdio.h>
#include<string.h>
 int string_compare(char a[], char b[])

 {
     int i,j;
     for(i=0;a[i] != '\0' && b[i]!='\0' ; i++){
        if(a[i]<b[i]){
                printf("a is smaller than b");
            return -1;
        }
        if(a[i]>b[i]){
            printf("a is bigger than b");
            return 1;
        }
        if(a[i]==b[i]){
            printf("a is equal to b");
            return 0;
        }
     }
     return 0;
 }
