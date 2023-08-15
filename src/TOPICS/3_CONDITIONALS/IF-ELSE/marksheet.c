//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main() {

int phys,math,chem;
printf("Enter Physics Marks:");
scanf("%d",&phys);
    printf("Enter Mathematics Marks:");
    scanf("%d",&math);
    printf("Enter Chemistry Marks:");
    scanf("%d",&chem);
    int sum=phys+chem+math;
    float avg=sum/3.0;
    printf("\nTotal Marks=%d and Average=%f\n",sum,avg);
    if(avg>=90&&avg<=100) {
        printf("Grade: O\n");
    }
    else if(avg>=80&&avg<90)
    {
        printf("Grade: E\n");
    }
    else if(avg>=70&&avg<80)
    {
        printf("Grade: A\n");
    }
    else if(avg>=60&&avg<70)
    {
        printf("Grade: B\n");
    }
    else if(avg>=50&&avg<60)
    {
        printf("Grade: C\n");
    }
    else if(avg>=40&&avg<50)
    {
        printf("Grade: D\n");
    }
    else if(avg>=0&&avg<40)
    {
        printf("Grade: F\n");
    }
    else{
        printf("Invalid Input\n");
    }
    printf("**********THANK YOU**********\n");
    return 0;
}