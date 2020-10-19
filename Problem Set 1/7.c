/*
#Problem Set-1
7.Print the array element in reverse order.Each element should be separated by space.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include<stdio.h>
int main()
{

    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,size=10;

    for(i=size-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}
