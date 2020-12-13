/*4.Use Dynamic memory allocation to create three elements of the
Linked List and display(only value) the complete Linked List using
a function.(Check Empty List)

Md Naimur Rahman Soykot
Id: 1915002521
*/

#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    struct Node *next;
};
void print_list(node *temp);
void empty_list(node *temp);
int main()
{
    node *head=NULL;
    node *a, *b, *c;

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

}
void print_list(node *temp)
{
        while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
        }

}
void empty_list(node *temp)
{
    if(temp==NULL){
        printf("List is Empty.\n");
    }
        else{
            printf("\nList is not Empty.");        }
}
