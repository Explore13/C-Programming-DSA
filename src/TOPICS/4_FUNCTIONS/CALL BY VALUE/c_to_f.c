//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
float F(float);
int main() {
float C;
printf("ENTER TEMP IN C:");
scanf("%f",&C);
printf("\n\tTemp in F= %.2f",F(C));
    return 0;
}
float F(float C) {
    float temp=((9*C)/5)+32;
    return temp;

}