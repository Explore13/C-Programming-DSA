// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
char str[100];
printf("Enter Something:");
fgets(str,100,stdin);
strlwr(str);
printf("Lowercase: %s\n",str);
return 0;
}
