/*
#Problem Set-2
1.Insert any value at tenth[10th] index of array.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/
#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10};
    int i,max_size = 100, size = 10;

    printf("Before Operation:\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    a[10] = 33;
    size++;

    printf("After Operation:\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}

