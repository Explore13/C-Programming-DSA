//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{

        int num,rem,rev=0;

        printf("Enter a number: ");
        scanf("%d",&num);
        int temp=num;
        do{
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }while(num>=1);
        if(temp==rev) {
            printf("Palindrome Number :)\n");
        }
        else{
            printf("Not a Palindrome Number :)\n");
        }
        char ch;
        printf("Do you want to continue(Y/N):");
        scanf("\n%c",&ch);
        if(ch=='y'||ch=='Y'){
            main();
        }

            return 0;

}