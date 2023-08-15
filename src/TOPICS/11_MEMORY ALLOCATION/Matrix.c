// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int *ptr,*p;
int a=5;
p=&a;
ptr=p;
    printf("%d\n",ptr);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",*ptr);
    printf("%d\n",&a);
    printf("%d\n",a);
    return 0;
}
