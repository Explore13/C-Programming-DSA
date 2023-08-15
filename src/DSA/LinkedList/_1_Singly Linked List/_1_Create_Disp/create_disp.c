// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL, *last = NULL;
void insertAtLast() {
    struct node *newNode;
    newNode = (struct node *) malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter a value : \n");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = newNode;
        last = newNode;
        return;
    }
    last->next = newNode;
    last = newNode;

}

void insertAtPos(){
    struct node *temp=first,*newNode=(struct node*)malloc(sizeof(struct node*));
    newNode->next=NULL;
    printf("Enter value : \n");
    scanf("%d",&(newNode->data));
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    if(length==0)
    {
        first=last=newNode;
        return ;
    }
    int pos;
    printf("Enter the position : \n");
    scanf("%d",&pos);

    temp=first;
    if(pos==0){
        newNode->next=first;
        first=newNode;

    }
    else if(pos<=length-1){
        int i=0;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    else if(pos>length-1){
    last->next=newNode;
    last=newNode;
    }

}
void insertAtBeginning(){
    struct node *newNode=(struct node*) malloc(sizeof(struct node*));
    newNode->next = NULL;
    printf("Enter a value : \n");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = newNode;
        last = first;
        return;
    }
    newNode->next=first;
    first=newNode;
}

void display(){
    struct node *temp=first;
    printf("\n");
    printf("\n");
    while(temp!=NULL) {
        printf("| %d | -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}

int main() {

    while(1){
        int n;
        printf("1. Insert at Last\n2. Insert at Beginning\n3. Insert at Middle\n0. Exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
                insertAtLast();
                display();
                break;
            case 2:
                insertAtBeginning();
                display();
                break;
            case 3:
                insertAtPos();
                display();
                break;
            case 0:
                display();
                exit(0);

            default:
                break;
        }
    }
    return 0;
}
