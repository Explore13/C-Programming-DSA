// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter a string:");
    fgets(str, 100, stdin);
    char word[20];
    printf("Enter word:");
    fgets(word, 20, stdin);
    int len = strlen(word), length = strlen(str), flag, j, x = 0;
    int i;
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }
    if (word[len - 1] == '\n') {
        word[len - 1] = '\0';
    }
    for (i = 0; str[i] != '\0'; ++i) {
        flag = 0;
        if (str[i] == word[0]) {
            for (j = 1; j < len - 1; j++) {
                if (str[i + j] == word[j]) {
                    ++flag;
                }
            }
        }
        if (flag == len - 2 && word[j] == '\0') {
            printf("(%s) is found in %d\n", word, i + 1);
            x++;


        }
    }
    if (x == 0) {
        printf("Not found");
    }

    return 0;
}
