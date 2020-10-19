
/*
#Problem Set-2
4.Insert a value X (take input X from user) in the array at Kth (take input K from user)
index and shift all other value to right.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/


#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,X,K,max_size=100,size = 10;

    scanf("%d", &X);
    scanf("%d", &K);

    printf("Before Operation:\n");
    for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
    printf("\n");

    for (i=size; i>=K; i--){
         a[i]=a[i-1];
    }


    a[K]=X;
    size++;

    printf("After Operation :\n");
    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
