//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
#include<limits.h>
int main()
{
    //Range of signed integar
int var1=INT_MIN;
int var2=INT_MAX;
printf("%d to ",var1);

   printf("%d\n",var2);  

   //Range of unsigned integar
   unsigned int a=0;
   unsigned int b=UINT_MAX;
   printf("%u to %u\n",a,b);
   //Signed short int
   short int x=SHRT_MIN;
   short int y=SHRT_MAX; 
   printf("%d to %d\n",x,y);
   //Unsigned short int
   unsigned short int p=0;
   unsigned short int q=USHRT_MAX;
   printf("%u to %u\n",p,q);

  
          return 0;
}