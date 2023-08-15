// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include "stdlib.h"
struct emp{
    int eno;
    char ename[20];
    float esal;
};
int main() {
struct emp *p;
p=(struct emp *) malloc(sizeof(struct emp));
if(p==NULL){
    printf("Out of the memory");

}
else{
    printf("Enter details: ");
    scanf("%d %s %f",&p->eno,p->ename,&p->esal);
}
    printf("%d %s %f",p->eno,p->ename,p->esal);
    return 0;
}
