//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    while(1) {
    
    int num,rem,rev=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num>=1) {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev) {
        printf("Palindrome Number :)\n");
    }
    else{
        printf("Not a Palindrome Number :)\n");
    }
    }
    
    return 0;
}