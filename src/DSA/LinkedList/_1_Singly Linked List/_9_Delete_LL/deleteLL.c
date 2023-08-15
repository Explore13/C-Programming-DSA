// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL, *last = NULL;

void insertAtFirst() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter Data : ");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = last = newNode;
        return;
    }

    newNode->next = first;
    first = newNode;
}

void insertAtLast() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter Data : ");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = last = newNode;
        return;
    }
    last->next = newNode;
    last = newNode;
}

int length() {
    struct node *p = first;
    int len = 0;
    while (p != NULL) {
        len++;
        p = p->next;
    }
    return len;
}

void insertAtPos() {
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("\nEnter Data : \n");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        first = last = newNode;
        return;
    } else {
        int pos;
        printf("\nEnter Position : \n");
        scanf("%d", &pos);
        int len = length();
        if (pos == 0) {
            newNode->next = first;
            first = newNode;
        } else if (pos >= len) {
            last->next = newNode;
            last = newNode;
        } else {
            struct node *p = first;
            int i = 0;
            while (i < pos - 1) {
                p = p->next;
                i++;
            }
            newNode->next = p->next;
            p->next = newNode;
        }
    }
}

void display() {
    struct node *p = first;
    if (p == NULL) {
        printf("\nNo LinkedList\n");
        return;
    }
    while (p != NULL) {
        printf("| %d | -> ", p->data);
        p = p->next;
    }
}

void deleteFromFirst() {
    int len = length();
    if (len == 0) {
        return;
    }

    struct node *p = first;
    first = first->next;
    free(p);

}

void deleteFromLast() {
    int len = length();
    if (len == 0) {
        return;
    }
    if(len==1)
    {
        free(first);
        first=last=NULL;
        return;
    }
    struct node *p = first;
    while (p->next != last) {
        p = p->next;
    }
    p->next = NULL;
    free(last);
    last = p;

}

void deleteFromPos() {
    int len = length();
    if (len == 0) {
        return;
    } else if (len == 1) {
        free(first);
        first = NULL;
    } else {
        int pos;
        printf("\n\nEnter Position : \n");
        scanf("%d", &pos);
        struct node *p = first;
        if (pos == 1) {
            first = p->next;
            free(p);
        } else if (pos >= len) {

            while (p->next != last) {
                p = p->next;
            }
            p->next = NULL;
            free(last);
            last = p;
        } else {
            struct node *q = NULL;
            int i = 1;
            while (i < pos) {
                q = p;
                p = p->next;
                i++;
            }
            q->next = p->next;
            p->next = NULL;
            free(p);
        }
    }
}

void freeLL()
{
    struct node *p=first,*q=NULL;
    while(p!=NULL)
    {
        q=p;
        p=p->next;
        free(q);
    }
}

int main() {

    int n = 1;
    while (n) {
        int check;
        printf("\nSelect the option : \n\n\t1. Insert @ first \n\t2. Insert @ last\n\t3. Insert @ pos\n\t4. Display"
               "\n\t5. Delete from first\n\t6. Delete from Last\n\t7. Delete from pos\n\n");
        scanf("%d", &check);
        switch (check) {
            case 1:
                insertAtFirst();
                display();
                break;
            case 2:
                insertAtLast();
                display();
                break;
            case 3:
                insertAtPos();
                display();
                break;
            case 0:
                display();
                freeLL();
                exit(0);
            case 5:
                deleteFromFirst();
                display();
                break;
            case 6:
                deleteFromLast();
                display();
                break;
            case 7:
                deleteFromPos();
                display();
                break;
            default:
                display();
                freeLL();
                break;

        }
    }
    return 0;
}
