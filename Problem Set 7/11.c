/*11.Copy a linked list into another linked list.
    Display both list before and after copy.(Don't use recursion)

Md Naimur Rahman Soykot
Id: 1915002521
*/

#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node *create_list();

void print_list(node *temp);
node *copy_list(node *list1);

int main()
{
    node *head=NULL;
    node *list2=NULL;
    print_list(head);
    print_list(list2);
    head=create_list();
    list2=copy_list(head);
    printf("List 1 : ");
    print_list(head);
    printf("\n\nList 2 : ");
    print_list(list2);
    printf("\n");
    return 0;
}
node *copy_list(node *list1)
{
    node *head2=NULL;
    node *temp;
    temp=(node *)malloc (sizeof(node));
    temp->value=list1->value;
    temp->next=NULL;
    head2=temp;
    list1=list1->next;
    while(list1)
    {
        temp->next=(node*)malloc(sizeof(node));
        temp=temp->next;
        temp->value=list1->value;
        temp->next=NULL;
        list1=list1->next;
    }
    return head2;
}



node *create_list()
{
    node *a, *b, *c, *d;
    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));
    d=(node*)malloc(sizeof(node));
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
void print_list(node *temp)
{

    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp=temp->next;
    }
    return 0;
}
