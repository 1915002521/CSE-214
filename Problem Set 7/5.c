/*5.Define back function to display the last element of the linked list.

Md Naimur Rahman Soykotv
Id: 1915002521
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void print_list(node *temp);
node *create_list();
int back(node *temp);


int main(){
node *head=NULL;

head=create_list();
print_list(head);
printf("\nLast Element=%d\n",back(head));

return 0;
}

node *create_list(){
    node *a,*b,*c,*d;
    node *head;

    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));
    d=(node*)malloc(sizeof(node));

    head=a;

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

// back function for display last element.
int back(node *temp){

if (temp!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
    return temp->value;
}
return 0;
}

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d ",temp->value);
    temp = temp->next;
 }

}
