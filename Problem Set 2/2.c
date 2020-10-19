/*
#Problem Set-2
2.Insert a value X[take input X from user] in the array at the end of currently stored elements.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,X,max_size = 100, size = 10;

    scanf("%d",&X);

    printf("Before Operation:\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

    a[size]=X;
    size++;

    printf("After Operation :\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

