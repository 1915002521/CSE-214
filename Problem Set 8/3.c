/*3.Implement a �Delete Value� function to delete a value (key) from the Linked List.
Take input the delete �key� from user. (Check Underflow and Not Found)

Md Naimur Rahman Soykot
Id: 1915002521
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;
};

node* create_list();
void print_list(node *temp);
node* delete_value(node *temp, int key);

int main()
{
    int key;
    node *head = NULL;

    scanf("%d",&key);

    head = create_list();
    print_list(head);

    head = delete_value(head, key);
    print_list(head);

    printf("\n");
}

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

node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->value = 1;
    a->next = b;

    b->value = 2;
    b->next = c;

    c->value = 3;
    c->next = d;

    d->value = 4;
    d->next = NULL;

    return a;
}

void print_list(node *temp)
{
    while(temp != NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
