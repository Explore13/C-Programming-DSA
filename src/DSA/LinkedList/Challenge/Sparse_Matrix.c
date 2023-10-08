// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct node{
    int col;
    int data;
    struct node *next;
} *last=NULL;

void createLL(int val,int col,int *A)
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    newNode->col=col;
    if(last==NULL)
    {
        *A=(int)newNode;
        last=newNode;
    }
    else{
        last->next=newNode;
        last=newNode;
    }
}

void displaySparseMatrix(int m, int n, int *A) {
    for (int i = 0; i < m; ++i) {
        int currentNodePtr = A[i];
        for (int j = 0; j < n; ++j) {
            struct node *currentNode = (struct node *)currentNodePtr;
            if (currentNode != NULL && currentNode->col == j) {
                printf("%d ", currentNode->data);
                currentNodePtr = currentNode->next;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main() {
    int m, n;
    printf("\nEnter Row and Col : ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("\nEnter Elements : \n\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Array : \n\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int A[m];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(arr[i][j]!=0)
                createLL(arr[i][j],j,&A[i]);
        }
        last=NULL;
    }

    printf("\nThe Sparse Matrix : \n\n");
    displaySparseMatrix(m, n, A);

    return 0;
}
