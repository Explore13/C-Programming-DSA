//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<limits.h>
int main()
{
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
//float can only store upto 7 decimal points including 1st value
    float f=3.141592653589793238;  
    printf("%.16f\n",f); //output=3.141592
    

//double can only store upto 16 values correctly
       double x=3.141592653589793238;  
    printf("%.21lf\n",x); //output=3.14159265358979

    //long double can only store upto 19 digits correctly
    long double y=3.7;
   printf("%.21Lf\n",y); //error in compiler

    return 0;
}