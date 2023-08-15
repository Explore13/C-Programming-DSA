//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
  //Q:1
printf("HELLO WORLD\n");

//Q:2
int a,b;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
int c=a;
a=b;
b=c;
printf("a= %d and b= %d\n",a,b);

int x,y;
printf("Enter x: ");
scanf("%d",&x);
printf("Enter y: ");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("x= %d and y= %d\n",x,y);

//Q:3
float C;
printf("Enter temp in celcius: ");
scanf("%f",&C);
printf("Temp in Ferhenhite: %f\n",(((9*C)/5)+32));

//Q:4

printf("Sum of a and b= %d\nSum of x and y= %d\n ",a+b,x+y);

//Q:5

float A,B,G,D,E,F;
printf("Enter 6 numbers: ");
scanf("%f %f %f %f %f %f",&A,&B,&G,&D,&E,&F);
printf("AVG= %f\n",(A+B+G+D+E+F)/6.0);

float r;
printf("Enter Radius: ");
scanf("%f",&r);
printf("AREA OF CIRCLE: %f\n",(3.14*r*r));

float base,height;
printf("Enter Base: ");
scanf("%f",&base);
printf("Enter Height: ");
scanf("%f",&height);
printf("AREA OF TRIANGLE= %f\n",(0.5*base*height));

int X,Y,Z;
printf("ENTER 3 NUMBERS: ");
scanf("%d %d %d",&X,&Y,&Z);
if(X>Y&&X>Z) {
    printf("%d is largest..",X);
}
else if(Y>X&&Y>Z){
     printf("%d is largest..",Y);
}
else{
     printf("%d is largest..",Z);
}

    return 0;
}