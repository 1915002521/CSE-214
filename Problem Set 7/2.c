/*2.Define a "Empty" function to check whether the Linked List is empty or not.

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
void print_list(node* head);
int Empty(node *list);


int main()
{
    node* head;
    head = NULL;
    head = create_list();
    printf("Empty : %d\n",Empty(head));
    print_list(head);



    return 0;
}
//function to check the list empty or not.
int Empty(node *list){

    if(list == NULL){
       return 1;
    }
    return 0;

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


