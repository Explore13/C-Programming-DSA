// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
void copy( char *ch);

int main() {
char ch[100];
printf("Enter your name:");
fgets(ch,100,stdin);
if(ch[strlen(ch)-1]!='\0'){
    ch[strlen(ch)-1]='\0';
}
copy(ch);
    return 0;
}
void copy( char *ch){
    char copy[100];
    int i;
    for (i=0;ch[i]!='\0';i++){
        copy[i]=ch[i];
    }
    copy[i]='\0';
    /*
     The issue might be with the copy function where you are not adding
     a null character ('\0') at the end of the copy
     array after copying the characters from ch.
     This results in the garbage value at the end of the string.
     You can add a null character at the end of the copy array to
     fix this issue.
     */

    printf("String after copying:\n%s",copy);


}