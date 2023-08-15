// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter a Sentence:");
    fgets(str, 100, stdin);

    int len = strlen(str), flag = 0;
    if (str[len - 1] != '\0') {
        str[len - 1] = '\0';
    }

/*
 At 1st I take a string (e.g. SOS) but in last there will be \n
 so,I define the last character as \0 and then run the for loop from 0 position to
 len/2 position.
 SOS\n: len==4
 now sos\0,len==4{you can say that \0 is not counted by strlen but first strlen count
 \n as a character then we reinitialize the \n to \0 so we the len==4
 i=0 to i<=2
 then check i and len-2-1
 actually it checks: S(0) and S(4-2-0) and satisfy
 then O(1) and O(4-2-1) and satisfy
 flag remains 0 and it prints palindrome

 */
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 2 - i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("%s is a palindrome string", str);
    } else {
        printf("%s is not palindrome string", str);
    }
    return 0;
}
