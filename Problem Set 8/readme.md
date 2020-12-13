# Problem Set 8

## [1.Implement a “Delete Back” function to delete the last (back) element of the Linked List(Check Underflow)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%208/1.c)

```
node* delete_back(node *temp)
{
    node *head = temp, *last;
    if(temp)
    {
        if (head->next != NULL)
        {
            while(temp->next)
            {
                last = temp;
                temp = temp->next;
            }
            free(temp);
            last->next = NULL;
        }
        else
        {
            free(temp) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return temp;
    return head;
}
```

## [2.Implement a “Delete Front” function to delete the first (front) element of the Linked List.(Check Underflow)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%208/2.c)

```
node* delete_front(node *temp)
{
    if(temp)
    {
        node *new_head = NULL;
        new_head = temp->next;
        free(temp);
        return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
}
```

## [3.Implement a “Delete Value” function to delete a value (key) from the Linked List.Take input the delete ‘key’ from user. (Check Underflow and Not Found)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%208/3.c)

```
node* delete_value(node *temp, int key)
{
    if (temp)
    {
        node *head = temp, *prev;
        while(temp)
        {
            if(temp->value == key)
            {
                if(head == temp)
                {
                    head = temp->next;
                    free(temp);
                    return head;
                }
                else
                {
                    prev->next = temp->next;
                    free(temp) ;
                    return head;
                }
            }
            prev = temp;
            temp = temp->next;
        }
        printf("Not Found\n");
        return head;
    }
    else
        printf("Underflow Linked List\n");
    return temp;
}
```

## [4.Implement a “Delete At” function to delete the nth element of the Linked List.Take input ‘n’ from user.(Check Underflow and index out of range)(Let, for the first element n = 1)](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%208/4.c)

```
node* delete_at(node *temp, int pos)
{
    while(temp)
    {
        if(pos > 4 || pos < 1)
        {
            printf("Index out of range");
            return NULL;
        }
        else
        {
            if(pos == 1)
            {
                node *new_head = NULL;
                new_head = temp->next;
                free(temp);
                return new_head;
            }
            else
            {
                node *head = temp;
                node *prev, *next;
                int i = 1;
                while(i < pos)
                {
                    prev = temp;
                    temp = temp->next;
                    i++;
                }
                prev->next = temp->next;
                free(temp) ;
                return head;
            }
        }
    }
    printf("Underflow Linked List\n");
    return NULL;
}
```

## [7.Implement a “Clear” function to delete the all the element of the Linked List.](https://github.com/1915002521/CSE-214/blob/main/Problem%20Set%208/7.c)

```
node* create_list();
void print_list(node *temp);
node* clear(node *temp);

int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    if(clear(head) == NULL)
    {
        printf("\nLinked List Cleared\n");
    }

    return 0;
}
```
