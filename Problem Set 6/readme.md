#Problem Set 6

##1.Define a Structure for Linked List Node, Declare three variable,Assign value and next address in those variable. Print the variable address,value and next variable address.(Don't use any function, 'typedef' keyword and dynamic memory allocation)

```
struct Node
{
    int value;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node a, b, c;

    head = &a;
    printf("Address  \t     Value  \t  Next Address\n");

    a.value = 1;
    a.next  = &b;

    b.value = 2;
    b.next  = &c;

    c.value = 3;
    c.next  = NULL;

    printf("%p \t %d \t %p\n",&a,a.value,a.next);
    printf("%p \t %d \t %p\n",&b,b.value,b.next);
    printf("%p \t %d \t %p\n",&c,c.value,c.next);

}
```
##2.Define a function to print single node(Address, value and next variable) of the Linked List and do the same as problem 1.(Use 'typedef' keyword.Don't use DMA

```
void print(node temp)
{
       printf("%p \t %d \t %p\n",&temp,temp.value,temp.next);
}
```

##3.Define a function to display(only value for each node) the complete Linked List and do the same as problem 1.(Don't use DMA.)

```
void print(node *temp)
{
       while(temp!=NULL){
       printf("%d ",temp->value);
       temp = temp->next;
       }

}
```

##4.Use Dynamic memory allocation to create three elements of theLinked List and display(only value) the complete Linked List using a function.(Check Empty List)

```
   a = (node*) malloc(sizeof(node));
   b = (node*) malloc(sizeof(node));
   c = (node*) malloc(sizeof(node));

   empty_list(head);

   head = a;

   a->value = 1;
   a->next  = b;

   b->value = 2;
   b->next  = c;

   c->value = 3;
   c->next  = NULL;

   print_list(head);
   empty_list(head);
```

##5.Define a function to display the complete Linked List with a recursive function using problem 4

```
void print_list_recursive(node *temp)
{
   if(temp==NULL)
   {
       printf("Empty List\n");
       return;
   }

   else
   {
       printf("%d ",temp->value);
       if(temp->next==NULL)
       {
           return;
       }
       print_list_recursive(temp->next);
   }
}
```

##6.Define a function to display the complete Linked List in reverse order with a recursive function using problem 4

```
void reversed_list(node *temp)
{

       if(temp==NULL)
       {
           return;
       }
       reversed_list(temp->next);
       printf("%d ",temp->value);
}
void print_list(node *temp)
{
       while(temp!=NULL){
       printf("%d ",temp->value);
       temp = temp->next;
       }

}
```
