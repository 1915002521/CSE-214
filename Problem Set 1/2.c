/*
#Problem Set-1
2.Scan values from user into an array until end of life.

Md. Naimur Rahman Soykot
Id- 1915002521
Data Structure Lab.
*/

#include<stdio.h>
int main()
{
    int a[100];
    int i=0;

    while(scanf("%d",&a[i]) != EOF)
    {

        if (i>100)
        {
            printf("Array Overflow");
            break;
        }

    }

    return 0;
}
