//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
  //Q:1
  int var=0x43ff; /*hexadecimal value (containing 0x or 0X)...
  Format specifier: %x or %X.....
  IF WE USE %X AS A FORMAT SPECIFIER THEN OUTPUT= 43FF..
  IF WE USE %x THEN OUTPUT=43ff.....
  */
  printf("%X\n",var);

  printf("%d\n",var); /* value of "F" in decimal=15
  43ff= (4*16^3)+(3*16^2)+(15*16^1)+(15*16^0)=17407 in decimal
  */
    return 0;
}