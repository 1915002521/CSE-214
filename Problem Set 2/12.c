/*
#Problem Set-2
12.Delete a value X (take input X from user) from the array shift all other value to left. If X
    is not present in the given array print Element "Element Not Found". Only delete the first occurrence of
    the value.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100]={1,2,3,4,5,5,6,7,8,7};
    int i,X,index=-1,max_size=100,size=10;

    scanf("%d",&X);

    for(i=0;i<size;i++)
    {
      if(a[i]==X)
        {
         index=i;
         break;
        }
    }

    if(index!=-1)
    {
        printf("Before Operation:\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }

        printf("\n");

        for(i=index;i<size-1;i++)
            {
              a[i]=a[i+1];
            }
            size--;
        printf("After Operation:\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
    }

    else
    {
      printf("Element Not Found");
    }
    return 0;
}

