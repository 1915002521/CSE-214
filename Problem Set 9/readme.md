# Problem Set 9

## [1.Implement an "insert front" function to insert an element at the beginning (front) linked list.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%209/1.c)

```
node* insert_front(node *temp, int key)
{
    node *new_head;
    new_head = (node*) malloc(sizeof(node) );
    new_head->value = key;
    new_head->next = temp;
    return new_head;
}
```

## [2.Implement an "insert back" function to insert an element at end (back) of the linked list.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%209/2.c)

```
node* insert_back(node *temp, int key)
{
    if (temp == NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof (node) );
        new_head->value = key;
        new_head->next = NULL;
        return new_head;
    }
    node *head = temp, *new_node;
    while(temp->next)
        temp = temp->next;
    new_node = (node*) malloc(sizeof (node) );
    new_node->value = key;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
```

## [3.Implement an "insert at" function to insert an element at nth index of the linked list. Take input n And value from user.(Check index out of range)(Let, for the first element n=1)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%209/3.c)

```
Node* insert_at(Node *temp, int key, int value)
{
    Node *head = temp, *prev, *new_node;
    int i = 2;
    if(key<1 || key>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(key == 1)
    {
        new_node = (Node*) malloc(sizeof(Node) );
        new_node->value = value;
        new_node->next = temp;
        return new_node;
        }
    while(temp)
    {
        prev = temp;
        if(i == key)
        {
            new_node = (Node*) malloc(sizeof(Node)) ;
            new_node->value = value;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf( "Invalid Index\n");
    return head;
}
```

## [4.Implement an "insert after" function to insert an element after a node with a value key of the linked list.Take input key And new node value from user.(Check index out of range)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%209/4.c)

```
node* insert_after(node *temp, int key, int value)
{
    node *head = temp;
    int i = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            node *new_node = (node*) malloc(sizeof (node) );
            new_node->value = value;
            new_node->next = temp->next;
            temp->next = new_node;
            i++;
            return head;
        }
        temp = temp->next;
    }
    if(i<1 || i>4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");

    return head;
}
```

## [5.Implement an "insert before" function to insert an element after a node with a value key of the linked list.Take input key And new node value from user.(Check index out of range)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%209/5.c)

```
node* insert_before(node *temp, int key, int value)
{
    node *prev, *head = temp;
    int i = 0;
    int j = 0;
    while(temp)
    {
        if(temp->value == key)
        {
            if(temp == head)
            {
                node *new_node = (node*) malloc(sizeof(node*)) ;
                new_node->value = value;
                new_node->next = temp;
                i++;
                return new_node;
            }
            else
            {
                node *new_node = (node*) malloc(sizeof(node*));
                new_node->value = value;
                new_node->next = temp;
                prev->next = new_node;
                j++;
                return head;
            }
        }
        prev = temp;
        temp = temp->next;
    }
    if(i < 1 || i > 4 || j < 1 || j > 4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");
    return head;
}
```
