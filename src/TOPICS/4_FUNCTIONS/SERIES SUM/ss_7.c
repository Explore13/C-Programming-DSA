// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    int n;
    printf("Enter the range:");
    scanf("%d",&n);
    double sum=1;
    int sign=-1;
    for(int i=1;i<=n;i*=3){
        sum+=sign*(1.0/i);
        sign*=-1;
    }
    printf("Sum of the series:%.2lf",sum);
    return 0;
}
