//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
   /* int age;
    printf("ENTER YOUR AGE: ");
    scanf("%d",&age);
   if(age>=18) {
        printf("ADULT!\n");
    }
    else {
                printf(" NOT ADULT!\n");
    }
    (age>=18)?printf("ADULT!\n"):printf("NOT ADULT!\n");

*/
int year;
printf("ENTER THE YEAR: ");
scanf("%d",&year);
(year%4==0 &&( year%400==0||year%100!=0))?printf("%d is a Leap Year\n",year):printf("%d is not a Leap Year\n",year);


    return 0;
}