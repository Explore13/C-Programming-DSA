//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int addmult(int,int);
int main() {
int i=3,j=4,k,l;
k=addmult(i,j);
l=addmult(i,j);
printf("%d %d",k,l);

    return 0;
}
int addmult(int ii,int jj) {
    int kk,ll;
    kk=ii+jj;
    ll=ii*jj;
    return(kk,ll);
}