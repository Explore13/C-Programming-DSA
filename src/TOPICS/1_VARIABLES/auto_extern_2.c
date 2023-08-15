//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>
int main()
{
    auto int cv; // no diff between auto int cv; and int a;
//because both are declared and defined and allocated memory 
//both are initialized with a garbage value..
  printf("%d\n",cv); //garbage value


  int a;
    printf("%d\n",a); // as we initialize one auto int previously so
    // it will produce value of 0


        return 0;
}