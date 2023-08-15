// WELCOME TO EXPLORER's IDE :)

#include <stdio.h>

#define VAR 34 /*constant,VAR value is now 34,we cannot \
change its value...                                     \
we should uae the name in capital to avoid error in our code... 

***Job of preprocessor is to replace the VAR with 34 not compiler***

*/

#define var 45

#define add(a,b) a+b

#define use(p,q) (p+q)
int main()
{
    /*int var=54; //HERE 45=54,its an error...so we refuse to define the const
    in small letter...
    */
    printf("%d\n", VAR);

    
/*NOTE:
There are soe predefined constants in C...

__DATE__ and __TIME__

*/

printf("%s\n",__DATE__);  //OUTPUT: DATE
  printf("%s\n",__TIME__); //OUTPUT: TIME


printf( "%d\n",5*add(4,3));/*output=23 not 35 because first expansion
occured...here 5*4+3=23....not 5*(4+3)=35
*/

printf( "%d\n",5*use(4,3)); /* here output=35 because
5*(4+3) is occured here...so the answer=35

*/
  // Const

  int x=6;
  x=7; //we can change the value of x as it is not a const...
    printf("%d\n",x); //output:7

    const int y=8;
  //  y=7;  we cannot do this because we've defined y as a const...
      printf("%d\n",y);
    return 0;
}