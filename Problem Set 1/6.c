/*
#Problem Set-1
6.Print entire array each element separated by comma.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,size=10;

    for(i=0; i<size-1; i++)
    {
        printf("%d,",a[i]);
    }
    printf("%d",a[size-1]);

    printf("\n");

    return 0;
}

