/*2.Define a function to print single node(Address, value and next variable) of the Linked List and do the same as problem 1.
(Use 'typedef' keyword.Don't use DMA.)

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
int main()
{
    node *head;
    node a, b, c;

    head = &a;
    printf("Address     \t Value     \t Next Address\n");

    a.value = 1;
    a.next  = &b;
    print(a);

    b.value = 2;
    b.next  = &c;
    print(b);

    c.value = 3;
    c.next  = NULL;
    print(c);

}
void print(node temp)
{
        printf("%p \t %d \t %p\n",&temp,temp.value,temp.next);
}
