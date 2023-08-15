// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    //reallocate approach
int *p,i;
    p=(int *)malloc(5*sizeof(int));
    for ( i = 0; i < 5; ++i) {
        printf("%u ",(p+i));
    }
    printf("\n");
    realloc(p,10);
    for (int i = 0; i < 10; ++i) {
        printf("%u ",(p+i));
    }
    printf("\n");
    //pointer approach
    int *pp;
    pp=(int *) malloc(5*sizeof (int));
    for (i = 0; i < 5; ++i) {
        scanf("%d",&pp[i]);
    }
    for ( i = 0; i < 5; ++i) {
        printf("%d",pp[i]);
    }

    int *qq;
    qq=(int *)malloc(10*sizeof(int));
    for (i = 0; i < 5; ++i) {
        qq[i]=pp[i];
    }
    for (int j = i; j < 10; ++j) {
        scanf("%d",&qq[j]);
    }
    free(pp);
    pp=qq;
    qq=NULL;
    for (int j = 0; j < 10; ++j) {
        printf("%d ",pp[j]);
    }
    return 0;
}
