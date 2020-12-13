/*4.Define a "Front" function to display the first element of the Linked List.v

Md Naimur Rahman Soykot
Id: 1915002521
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;

struct Node {
int value ;
node* next;
};
node* create_list();
int front(node* list);
void print_list(node* head);


int main()
{
    node* head;
    head = NULL;
    head = create_list();
    print_list(head);
    printf("\nFirst Element is : %d",front(head));

        return 0;
}
int front(node* list){
    return list->value;

}


node* create_list()
{

    node *a,*b,*c,*d;
    a=(node*) malloc(sizeof(node));
    b=(node*) malloc(sizeof(node));
    c=(node*) malloc(sizeof(node));
    d=(node*) malloc(sizeof(node));

    a->value=1;
    a->next=b;

    b->value=2;
    b->next=c;

    c->value=3;
    c->next=d;

    d->value=4;
    d->next=NULL;

    return a;
}

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d ",temp->value);
    temp = temp->next;
 }

}
