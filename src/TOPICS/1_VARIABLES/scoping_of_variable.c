//WELCOME TO EXPLORER's IDE :)

#include<stdio.h>

int xyz=64737; //GLOBAL VARIABLE

int main()
{

// topic-1

/*
Here we define an integar named var...but in {} wee redefine it....its not a wrong method...
we can do it..because in {} block printf searched for  var then it gets the value of var=7 nearest it...

In the other hand after the {} block the printf searched for varand get the value of var=6 as {} its was
 a separated block...
*/
    int var=6;
    
     {
       int var=7; //LOCAL VARIABLE
            printf("%d\n",var); //7

    }
        printf("%d\n",var); //6

//topic-2

/* 
Redefinition in same block is not possible

int x=4;
int x=6;
    printf("%d\n",x);
    printf("%d\n",x);

    it will produce an error...
*/

printf("\n\n");

//topic-3

/*
In this case only one variable named a is defined ar first...it value is modified(redefined value) only
in the second block...when 2nd block tried to print the value of a then its value becomes a=6
and the other hand as the value of a is changed so outermost printf also printd the value a=6..because 
there is only one time defined variable...
*/
int a=3;
{
    a=6;
        printf("%d\n",a);

}
    printf("%d\n",a);

    printf("%d\n",xyz);

    return 0;
}