//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    //int representation
    int a=8/3;
    printf("%d\n",a); //8/3=2 and reminder is 2 so it prints 2 only as its an int
    printf("%f\n",a); //it will give 0.00 as 8/3 represents an int value

    int b=8.0/3.0; //float representation but stored in int
        printf("%d\n",b); //2
    printf("%f\n",a);//same as previous output as its an int datatype

    //float representation
    float x=8/3;
        printf("%d\n",x); //float datatype but placeholder is integar...so it gives 0.000
    printf("%f\n",x);//8 and 3 both are in integar form...so it gives 2.000 as an output..


float y=8.0/3.0;
    printf("%d\n",y); //garbage value

    printf("%f\n",y); // it will give 2.666667 as an output as we define y in float datatype and 8.0 and 3.0 are also in float form

    return 0;
}