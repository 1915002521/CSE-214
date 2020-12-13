/*4.Implement an “Insert After” function to insert an element after a node with value ‘key’
    of the Linked List. Take input ‘key’ and new node value from user. (Check index out of range)

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
node* insert_after(node *temp, int key, int value);

int main()
{
    int key;
    node *head = NULL;

    head = create_list();
    print_list(head);

    scanf("%d",&key);

    head = insert_after(head, key, 10);
    print_list(head);

    return 0;
}

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
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
