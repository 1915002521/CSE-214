/*7.Define a search function to find a 'key' (take input 'key'from user).Print 'Found' if the
   search 'key' is found in the linked list otherwise print 'Not Found'.

Md Naimur Rahman Soykot
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
int search(node *temp,int key);



int main(){
node *head=NULL;
int key;

head=create_list();
print_list(head);
printf("\nEnter Key to search :");
scanf("%d", &key);
search(head,key);


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

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d ",temp->value);
    temp = temp->next;
 }

}

//function to search the key.
int search(node *temp,int key){
     int found;
     while(temp!=NULL){
            if(temp->value==key){
                found=1;
                break;
                }
    temp= temp->next;
}
    if(found==1){
            printf("Found");
       }
    else{
        printf("NOT Found");
    }
}
