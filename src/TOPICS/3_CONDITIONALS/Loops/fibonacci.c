// WELCOME TO EXPLORER's IDE :)

#include <stdio.h>

int main()
{
    int fvalue = 0, svalue = 1, n;
    printf("Enter the range: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d %d ", fvalue, svalue);
    }
    else if (n > 1)
    {
        printf("%d %d ", fvalue, svalue);
        for (int i = 2; i <= n; i++)
        {
            int temp = fvalue + svalue;
            fvalue = svalue;
            svalue = temp;
            printf("%d ", temp);
        }
    }
    
   
    return 0;
}