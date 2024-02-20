#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
};
struct node *first = NULL, *last = NULL;


int length()
{
    int length = 0;
    if(first!=NULL)
    {
       struct node *p= first;
       while(p!=NULL)
       {
           length++;
           p=p->next;
       }
    }
    return length;
}

void createNode() {
    struct node *ptr;
    ptr = (struct node *) malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    if (first == NULL) {
        first = ptr;
    } else {
        last->next = ptr;
    }
    last = ptr;
}

void display() {
    if (first == NULL) {
        printf("\n no linked list is present");
    } else {
        printf("\n LinkedList : ");
        struct node *p = first;
        while (p != NULL) {
            printf("%d -> ", p->data, p);
            p = p->next;
        }
    }
}

void insertAtBegining() {
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &newnode->data);
    if (first == NULL) {
        last = newnode;

    }
    newnode->next = first;
    first = newnode;
}


void insertAtLast() {
    struct node *newNode;
    newNode = (struct node *) malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (first == NULL) {
        first = last = newNode;
    } else {

        last->next = newNode;
        last = newNode;
    }
}


void insertAtPos()
{
    int pos;
    printf("\nEnter Position to Insert : ");
    scanf("%d",&pos);

    int len = length();

    if(pos<=0)
    {
        insertAtBegining();
    }
    else if(pos<len)
    {
        struct node *newnode;
        newnode = (struct node *) malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        int i = 0;
        struct node *p = first;

        while(i<pos-1)
        {
            p=p->next;
            i++;
        }

        newnode->next = p->next;
        p->next = newnode;
    }

    else
    {
        insertAtLast();
    }
}

int main() {
    while (1) {
        int ch;
        printf("\n1. CreateLL : \n2. Display : \n3. Insert at begining  \n4. Insert at Last : \n5. Insert At Position : \n\n Enter your choice : ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                createNode();
                display();
                break;
            case 2:
                display();
                break;
            case 3:
                insertAtBegining();
                display();
                break;
            case 4:
                insertAtLast();
                display();
                break;
            case 5:
                insertAtPos();
                display();
                break;
            default:
                display();
                exit(0);

        }
    }
}