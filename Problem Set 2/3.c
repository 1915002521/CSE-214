/*
#Problem Set-2
3.Insert a value X[take input x from user] in the array at third(3rd)index and shift all other value to right.And print the whole array

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100] = {1,2,3,4,5,6,7,8,9,10};
    int i,X,index =3,max_size = 100,size = 10;

    scanf("%d",&X);

    printf("Before Operation:\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\n");

    for (i=size; i>=index; i--){
         a[i]=a[i-1];
    }

    a[index]=X;
    size++;

    printf("After Operation:\n");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
