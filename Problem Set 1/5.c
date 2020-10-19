/*
#Problem Set-1
5.Print entire array each element separated by space.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,size=10;

    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}

