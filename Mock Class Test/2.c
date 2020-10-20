/*
#Mock Class Test

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab. CSE-214
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,X,K,max_size=100,size = 10,temp;
    scanf("%d", &X);
    scanf("%d", &K);
     if(K<0 || K>=max_size)
    {
      printf("Index Out of Bound\n");
    }
    else if(K>size)
    {
      printf("Index Out of Range\n");
    }
    else
    {
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

    printf("Revers Order:\n");
   for(i=size-1; i>=0; i--)
    {
         printf("%d ", a[i]);
    }

     printf("\n");
    }

    return 0;
}

