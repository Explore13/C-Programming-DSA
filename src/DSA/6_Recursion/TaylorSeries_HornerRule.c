// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
double taylorSeries(int, int);
int main() {

    int x,n;
    printf("\nEnter Value and Range : ");
    scanf("%d %d",&x,&n);
    printf("\nAnswer of TaylorSeries : %lf", taylorSeries(x,n));
    return 0;
}
double taylorSeries(int x , int n)
{
    static double sum = 1;

    if(n==0)
        return sum;

    sum = (sum * ((double)x/n)) + 1;
    taylorSeries(x , n-1);

}