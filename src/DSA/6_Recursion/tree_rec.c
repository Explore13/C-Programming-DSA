// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void func(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        func(n-1);
        func(n-1);
    }
}
int main() {
    func(5);
    return 0;
}
