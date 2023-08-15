// WELCOME TO EXPLORER's IDE :)

#include <stdio.h>

int var = 456; // GLOBAL VARIABLE
int fun()
{
    printf("%d\n", var);
    // printf("%d\n",xyz);   // xyz cannot be accessed because xyz is a local variable
}
int main()
{
    int xyz = 34; // LOCAL VARIABLE
    fun();        // output=456... same as global variable value

    var = 564; // value modified

    fun(); // output=564
    printf("%d\n", xyz); //34
    printf("%d\n", var); // 564
    { var=123; //value is redefined
        printf("%d\n", var); //123
    }
    fun(); //output=123

    return 0;
}