# Problem Set 2
## Array Declaration.
```
int a[100]; /* Here an integer array a[100] is declared */ 
```
## Variable Declaration.
```
int X,K; /* Here two variable X,K declared */ 
```
## Inserting Value in Particular Index (Fixed Index or Index given by User) and Shift Right.
```
a[10] = 33; /* here 33 is inserted in 10th index*/
a[K] = X; /* here X is inserted in Kth index,X and K is given by user as input*/
```
## Inserting Value in Before Particular Index (Index given by User) and Shift Right.
```
a[K-1] = X; /* here X is inserted in before Kth index,X and K is given by user as input*/
```
## Inserting Value in After Particular Index (Fixed Index or Index given by User) and Shift Right.
```
a[K+1] = X; /* here X is inserted in after Kth index,X and K is given by user as input*/
```
## Updating Index or Value (Fixed or Given By User).
```
 int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 a[5]=15; /* here the value of 5th index,5 is updated by 15  */
 or
 a[K]=X; /* here the value of Kth index is updated by X(K and X is given by user as input) */
```
## Searching Operation by Value or Index.
```
 for (i=0; i<size; i++)
    {
        if(a[i]==X) /* here will check that the value in found or not */
        {
            printf("%d\n",i);
            count++;
        }

    }
```
## Delete Value By Index or Value and shift left.
```
 for (i=K; i<size; i++)
        {
           a[i]=a[i+1]; /* Here the Kth index will be deleted and elements will shift left */
        }

```
## Search and delete a value and shift left(fixed and given by user)(First Occurrence)
```
for(i=0;i<size;i++)
    {
      if(X == a[i])  /// searching value where X is the value
        {
         index=i;
         break;
        }
    }
      for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  /// shifting values to left
          }
           size--; /// value deleted so size decreases
      for(i=0;i<size;i++)
      {
         printf("%d ",a[i]);
      }
```
## Search and delete a value Before and shift left(First Occurrence).
```
for(i=0;i<size;i++)
    {
      if(X == a[i])  /// searching value where X is the value
        {
         index=i;
         index--;/// delete before so index decreases
         break;
        }
    }
      for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  /// shifting values to left
          }
           size--; /// value deleted so size decreases
      for(i=0;i<size;i++)
      {
         printf("%d ",a[i]);
    }
```
## Search and delete a value After and shift left(First Occurrence).
```
for(i=0;i<size;i++)
    {
      if(X == a[i])  /// searching value where X is the value
        {
         index=i;
         index++; /// delete after so index increases
         break;
        }
    }
      for(i=index;i<size-1;i++)
          {
            a[i] = a[i+1];  /// shifting values to left
          }
           size--; /// value deleted so size decreases
      for(i=0;i<size;i++)
      {
         printf("%d ",a[i]);
      }
```
## Search and delete a value and shift left(All Occurrence).
```
/* if X is not found then print "Element Not Found" */
for(i=0;i<size;i++)
    {
      if(X == a[i])
        {
         index=i;
        }
    }
    for(i=0;i<size;i++)
        {
          if(X == a[i]) 
            {
             index=i; /// found & deleted
             for(j=index;j<size-1;j++)
             {
               a[j] = a[j+1];
             }
              size--;
            }
        }
     for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
```
