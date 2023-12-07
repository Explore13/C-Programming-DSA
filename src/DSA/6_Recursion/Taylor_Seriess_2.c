// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

double taylorSeries(int , int);



int main() {
    int x,n;
    printf("\n Enter Value and Range : ");
    scanf("%d %d",&x,&n);

    double taylorValue = taylorSeries(x , n);

    printf("\nAnswer of TaylorSeries : %lf",taylorValue);

    return 0;
}
double taylorSeries(int x, int n)
{
    double sum = 1;
    for (int i = n; i > 0 ; --i) {
    sum = (sum * ((double)x/i)) + 1;
    }
    return sum;
}