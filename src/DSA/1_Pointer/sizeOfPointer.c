// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include "malloc.h"
#include "stdlib.h"
struct pointer {
    int large;
    float hello;

};

int main() {
    struct pointer p[3];
    printf("%u %u %u",&p[0].large,&p[0].hello,&p[1].large,&p[2].large);
//int *p;
//char *p2;
//struct pointer *p3;
//printf("%d\n",sizeof(p));
//printf("%d\n",sizeof(p2));
//printf("%d",sizeof(p3));
    return 0;
}
