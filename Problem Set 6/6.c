/*6.Define a function to display the complete Linked List in reverse order with
    a recursive function using problem 4.

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

void reversed_list(node *temp);
void print_list(node *temp);

int main()
{
    node *head = NULL;
    node *a, *b, *c;

    a = (node*) malloc(sizeof(node));
    b = (node*) malloc(sizeof(node));
    c = (node*) malloc(sizeof(node));

    head = a;

    a->value = 1;
    a->next  = b;

    b->value = 2;
    b->next  = c;

    c->value = 3;
    c->next  = NULL;

    print_list(head);
    printf("\n");
    reversed_list(head);

    return 0;
}
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
