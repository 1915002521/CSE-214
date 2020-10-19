# Problem Set 1

## Array Declaration.
```
int a[100]; /* Here an integer array a[100] is declared */ 
```
## Array Initialization.
```
int a[100]={1,2,3,4,5}; /* here 5 elements is initialized */
```
## Array Insert From User.
```
for(i=0; i<size; i++)
{
  scanf("%d",&a[i]); /* here a for loop created and it will run from index 0 to less than size.And scan the element and insert it in index.*/
}
```
## Array Insert From User Until End of File or Until Particular Value.
```
 while(scanf("%d",&a[i]) != EOF) /* array will take input contineously until EOF or user press ctrl+z.*/
    {
    
    }
```
## Printing Array Elements With Loop (For,While).
```
for(i=0; i<size; i++)
{
  printf("%d",&a[i]); /* here a for loop created and it will run from index 0 to less than size.And print the elements */
}
```
## Printing Array Elements in differents types(newline,space,comma,reverse)
```
for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]); /* here print the elements in newline */
    }
    
for(i=0; i<size; i++)
    {
        printf("%d ",a[i]); /* here print the elements with space */
    }
    
 for(i=0; i<size-1; i++)
    {
        printf("%d,",a[i]); /* here print the elements with comma */
    }
    printf("%d",a[size-1]);
    
    
 for(i=size-1; i>=0; i--)
    {
        printf("%d ",a[i]); /* here print the elements in reverse */
    }
```
