//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<math.h>
int main()
{
   int n,x,m=0;
    printf("Enter the number:");
    scanf("%d",&n);
    
    
    while(n>0) {
        x=n%10;
        m=m*10+x;
        n=n/10;
        
    }
    
    printf("%d",m); 
    return 0;
}