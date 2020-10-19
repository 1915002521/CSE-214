/*
#Problem Set-2
8.Search a value X (take input X from user) in the array and
    print the index if X found in the array otherwise print -1.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,X,count=0,max_size=100,size=10;

    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
        {
            printf("%d\n",i);
            count++;
        }

    }
    if(count!=1)
    {
       printf("-1\n");
    }


    return 0;
}

