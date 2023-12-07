// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct node{
    int data;
    int col;
    struct node *next;
} *last=NULL;
int main() {
    struct node *newNode=(struct node *)malloc(sizeof(struct node *));
    printf("%u",&newNode);
    return 0;
}
