// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
char str1[100],str2[200];

printf("Enter 1st String:");
fgets(str1,100,stdin);
printf("Enter 2nd String:");
fgets(str2,100,stdin);
int len1=strlen(str1);
int len2=strlen(str2);
    if (str1[len1 - 1] == '\n') {

        str1[len1 - 1] = ' ';
    }

    int i,j;
for( i=len1,j=0;j<len2-1;i++,j++){

    str1[i]=str2[j];
}
str1[i]='\0';
puts(str1);
    return 0;
}
