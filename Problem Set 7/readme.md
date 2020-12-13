# Problem Set 7

## [1.Define a "create" function to declare a Linked List with four node using dynamic memory allocation.Print the complete Linked List after calling create function.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/1.c)

```
node *create()
{
    node *a,*b,*c,*d;

    a = (node*) malloc(sizeof(node));
    b = (node*) malloc(sizeof(node));
    c = (node*) malloc(sizeof(node));
    d = (node*) malloc(sizeof(node));

    a->value = 1;
    a->next  = b;

    b->value = 2;
    b->next  = c;

    c->value = 3;
    c->next  = d;

    d->value = 4;
    d->next  = NULL;

    return a;
```

## [2.Define a "Empty" function to check whether the Linked List is empty or not.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/2.c)

```
int Empty(node *list){

    if(list == NULL){
       return 1;
    }
    return 0;
}
```

## [3.Define a "size" function to find the size of the Linked list.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/3.c)

```
int size(node* list){

    int count = 0;
    while(list!=NULL){
        count++;
        list = list->next;
    }
        return count;
}
```

## [4.Define a "Front" function to display the first element of the Linked List.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/4.c)

```
int front(node* list){
    return list->value;
}
```

## [5.Define back function to display the last element of the linked list.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/5.c)

```
int back(node *temp){

if (temp!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
    return temp->value;
}
return 0;
}
```

## [6.Define a function to display the nth element of the Linked List.Take input 'n' from user. (Check index out of range)[let, the first element n=1)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/6.c)

```
void print_list_n(node *temp, int pos)
 {
   int n =1;
   while(n <= pos)
    {
      printf("%d ",temp->data);
      temp = temp->next;
      n++;
    }
   printf("\n");
 }
```

## [7.Define a search function to find a 'key' (take input 'key'from user).Print 'Found' if the search 'key' is found in the linked list otherwise print 'Not Found'.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/7.c)

```
int search(node *temp,int key){
     int found;
     while(temp!=NULL){
            if(temp->value==key){
                found=1;
                break;
                }
    temp= temp->next;
}
    if(found==1){
            printf("Found");
       }
    else{
        printf("NOT Found");
    }
}
```

## [8.Define a "Search" function to find a 'key' (take input 'key' from user).Return the position of the node if the search 'key' is found in the Linked List otherwise return -1.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/8.c)

```
int search(node *temp, int key)
 {
   int pos = 1;
   while(temp)
    {
        if(temp->data == key)
         {
           return pos;
         }
      pos++;
      temp = temp->next;
    }

    return -1;
 }

int is_empty(node *temp)
 {
   if(temp == NULL)
    {
      return 1;
    }

    return 0;
 }
```

## [9.Define a function to reverse the Linked List.(Don't use recursion) Display both List before and after reversing.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/9.c)

```
Node* print_reverse(Node *list)
{
    Node *first, *current, *temp;
    first = list;
    current = list->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }

    return first;
}
```

## [10.Define a function to reverse the linked list using recursion.Display both list before and after reversing.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/10.c)

```
void reverse_linkedlist(node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    reverse_linkedlist(temp->next);
    printf("%d ", temp->value);
}
```

## [11.Copy a linked list into another linked list.Display both list before and after copy.(Don't use recursion)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/11.c)

```
node *copy_list(node *list1)
{
    node *head2=NULL;
    node *temp;
    temp=(node *)malloc (sizeof(node));
    temp->value=list1->value;
    temp->next=NULL;
    head2=temp;
    list1=list1->next;
    while(list1)
    {
        temp->next=(node*)malloc(sizeof(node));
        temp=temp->next;
        temp->value=list1->value;
        temp->next=NULL;
        list1=list1->next;
    }
    return head2;
}
```

## [12.Copy a linked list into another list with a recursion function.Display both list before and after copy.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/12.c)

```
node *copy_list_recursive(node *list1)
{
    if(list1==NULL)
    {
        return NULL;
    }
    node *temp=(node*)malloc (sizeof(node));
    temp->value=list1->value;
    temp->next=copy_list_recursive(list1->next);
    return temp;

}
```
## [13.Define a function to merge two Linked List. Display all the list before and after merging.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/13.c)

```
node* copy_list(node*list1)
{
    node *head2, *temp;
    temp = (node*)malloc(sizeof(node)) ;
    temp -> value = list1-> value;
    temp -> next = NULL;
    head2 = temp;
    list1 = list1 -> next;
    while (list1)
    {
        temp->next = (node*)malloc(sizeof(node)) ;
        temp = temp -> next;
        temp->value = list1->value;
        temp->next = NULL;
        list1 = list1->next;
    }
    return head2;
}
//function to merge teo list.
node *merge_list(node *list1, node *list2)
{
    node *head, *temp, *new_node;

    head = copy_list(list1);

    temp = head;

    while(temp -> next)
    {
        temp = temp->next;
    }
    temp->next = copy_list(list2);

    return head;
}
```

## [14.Define a function to merge two sorted Linked List into a sorted Linked List.Display all the list before and after merging.(Consider given two linked list are already sorted)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%207/14.c)

```
Node* merge_list(Node *list1, Node *list2)
{
    Node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
}
```
