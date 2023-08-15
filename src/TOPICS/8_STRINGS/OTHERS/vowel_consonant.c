// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
void check(char *ch) {
    for (int i = 0; ch[i]!='\0'; i++) {
        if(ch[i]>='a'&&ch[i]<='z'||ch[i]>='A'&&ch[i]<='Z') {
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' ||
                ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
                printf("(%c) is found in %d position\n", ch[i], i);
            } else {
                printf("(%c) is found in %d position\n", ch[i], i);

            }
        }
    }
}

int main() {
char ch[100];
    fgets(ch,100,stdin);
check(ch);
    return 0;
}
