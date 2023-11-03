// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int queue[100], size, first = -1, last = -1;

void insert() {

    if (last == size - 1) {
        printf("\nQueue is Full");
        return;
    }
    if(last==-1)
        ++first;
        ++last;
        printf("\nEnter Value : ");
        scanf("%d", &queue[last]);

    }

void delete() {
    if(first==-1||first>last)
    {
        printf("\nQueue is Empty");
        first=last=-1;
    }
    else
    {
        printf("\n%d is Deleted",queue[first]);
        ++first;
    }
}

void display() {
    if(first==-1||first>last) {
        printf("\nQueue is Empty");
        return;
    }

    printf("\nThe Queue : \n");
    for(int i=first;i<=last;i++)
    {
        printf("%d ",queue[i]);
    }
}

int main() {
    printf("\nEnter the size of Queue : ");
    scanf("%d", &size);
    while (1) {
        int choice;
        printf("\nChoice : \n\t1.Insert : \n\t2. Delete : \n\t3. Display : \n\t");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                display();
                exit(0);
        }
    }
    return 0;
}
