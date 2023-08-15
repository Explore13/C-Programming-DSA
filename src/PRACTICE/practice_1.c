//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int main()
{
 while(1) {   
int i;
printf("Enter a value: ");
scanf("%d",&i);

i=i%100;
if(i%11==0) {
  printf("Last digits are same :)\n");

}

else {
  printf("Last digits are not same :)\n");
}

 }
        
            return 0;
}