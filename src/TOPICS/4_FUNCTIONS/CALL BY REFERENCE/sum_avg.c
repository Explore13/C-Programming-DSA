//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
void ans(int,int,int *,int *,float *);

int main() {
int a,b,sum,pdt;
float avg;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
ans(a,b,&sum,&pdt,&avg);
printf("\n\tSum= %d\n\tProduct=%d\n\tAverage=%f",sum,pdt,avg);

    return 0;
}
void ans(int a,int b,int *sum,int *pdt,float *avg){
    *sum=a+b;
    *pdt=a*b;
    *avg=(a+b)/(float) 2;


}