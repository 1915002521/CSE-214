/*3.Define a function to display(only value for each node) the complete
Linked List and do the same as problem 1.(Don't use DMA.)

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

void print(node *temp);

int main()
{
    node *head;
    node a, b, c;

    head = &a;

    a.value = 1;
    a.next  = &b;

    b.value = 2;
    b.next  = &c;

    c.value = 3;
    c.next  = NULL;

    print(head);

}
void print(node *temp)
{
        while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
        }

}
