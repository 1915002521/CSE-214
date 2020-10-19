
/*
#Problem Set-2
10.Delete a value before Kth index (take input K from user) from
    the array shift all other value to left.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,K,max_size=100,size = 10;

    scanf("%d", &K);

    printf("Before Operation:\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

    for (i=K-1; i<size; i++)
        {
           a[i]=a[i+1];
        }

    size--;

    printf("After Operation:\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

    return 0;
}
