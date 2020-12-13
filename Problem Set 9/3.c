/* 3.Implement an “Insert At” function to insert an element at the nth index
of the Linked List. Take input ‘n’ and value from user.(Check index out of range)
(Let,for the first element n = 1)

Md Naimur Rahman Soykot
Id: 1915002521
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list();
void print_list(Node *temp);
Node* insert_at(Node *temp, int pos, int value);

int main()
{
    int key, value;
    Node *head = NULL;

    head = create_list();
    print_list(head);
    scanf("%d %d", &key, &value);
    head = insert_at(head, key, value);
    print_list(head);

    return 0;
}
Node* create_list()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

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

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}


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
