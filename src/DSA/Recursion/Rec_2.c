// Welcome to EXPLORER's IDE
//print 1 to n using recursion
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void func(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        func(n-1);

    }
}
int main() {
    int n;
    printf("\nEnter Value : \n");
    scanf("%d", &n);
    func(n);

    return 0;
}
