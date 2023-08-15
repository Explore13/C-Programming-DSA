#include<stdio.h>
int main()
{
  /* int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    int x;
    printf("What to you want to perform?: ");
    scanf("%d",&x);
     switch(x) {
     case 1:
     printf("%d\n",a+b);
     break;
       case 2:
     printf("%d\n",a-b);
     break;
       case 3:
     printf("%d\n",a*b);
     break;
       case 4:
     printf("%d\n",a/b);
     break;

     default:
     printf("Thank You");
     
     }
*/
while(1) {
int a,b;
char x;
scanf("%d %c %d",&a,&x,&b);
if(x=='+') {

printf("%d\n",a+b);
}
else if(x=='-') {

printf("%d\n",a-b);
}
else if(x=='*') {

printf("%d\n",a*b);
}
else if(x=='/') {

printf("%d\n",a/b);
}
else {
    printf("THANK YOU :)");
}
}
    return 0;
}