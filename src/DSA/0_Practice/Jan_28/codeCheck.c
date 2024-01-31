#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linkedlistTraversal(struct node* ptr){
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

//case 1//
struct node* insertatFirst(struct node*head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}
//case 2//

struct node* insertatBetween(struct node*head,int data,int index){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node*p = head;
    int i = 0;
    while(i!= index - 1){
        p = p->next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p->next;
    p->next = ptr;

    return head;
}

//case 3//

struct node* insertatEnd(struct node*head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    struct node*p = head;
    while(p->next!=NULL)
    {
        p = p->next;

    }

    p->next = ptr;
    ptr->next = NULL;

    return head;
}

//case 4//
struct node*insertafteNode(struct node*head,struct node*pre,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = pre->next;
    pre->next = ptr;

    return head;
}

int main()
{
    int num,index,node;
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head= (struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    printf("\nenter the element_1: ");
    scanf("%d",&num);

    head->data = num;
    head -> next = second;

    printf("\nenter the element_2: ");
    scanf("%d",&num);

    second -> data = num;
    second -> next = third;

    printf("\nenter the element_3: ");
    scanf("%d",&num);

    third -> data = num;
    third -> next = fourth;

    printf("\nenter the element_4: ");
    scanf("%d",&num);

    fourth -> data = num;
    fourth -> next = NULL;

    linkedlistTraversal(head);

    printf("\ninsert at the first: ");
    scanf("%d",&num);

    head = insertatFirst(head,num);

    printf("\nafter insertion at the begining: ");

    linkedlistTraversal(head);

    printf("\ninsertion at between: ");
    printf("\nenter the element: ");
    scanf("%d",&num);
    printf("\nenter the index: ");
    scanf("%d",&index);

    head = insertatBetween(head,num,index);

    printf("\nafter insertion ");
    linkedlistTraversal(head);

    printf("\ninsert at the end: ");
    printf("\nenter the element: ");
    scanf("%d",&num);

    head = insertatEnd(head,num);
    printf("\nafter insertion: ");

    linkedlistTraversal(head);

    printf("\ninsert after a node: ");
    printf("\nenter the element: ");
    scanf("%d",&num);


    printf("\nenter the node: ");
    scanf("%d",&node);

    struct node*pre = head,*q;
    while(pre != NULL && pre->data != node){
        pre = pre -> next;
    }

    head = insertafteNode(head,pre,num);

    linkedlistTraversal(head);

    return 0;
}