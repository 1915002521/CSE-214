/*1.Define a Structure for Linked List Node, Declare three variable,
Assign value and next address in those variable. Print the variable address,
value and next variable address.(Don't use any function, 'typedef' keyword and dynamic memory allocation).

Md Naimur Rahman Soykot
Id: 1915002521
*/

#include<stdio.h>
struct Node
{
    int value;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node a, b, c;

    head = &a;
    printf("Address  \t     Value  \t  Next Address\n");

    a.value = 1;
    a.next  = &b;

    b.value = 2;
    b.next  = &c;

    c.value = 3;
    c.next  = NULL;

    printf("%p \t %d \t %p\n",&a,a.value,a.next);
    printf("%p \t %d \t %p\n",&b,b.value,b.next);
    printf("%p \t %d \t %p\n",&c,c.value,c.next);

}
