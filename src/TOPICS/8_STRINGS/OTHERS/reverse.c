// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
int length(char ch[]);
void reverse(char ch[] ,int size);
int main() {
char ch[100];


fgets(ch,100,stdin);
int size=length(ch);
reverse(ch,size);
    return 0;
}

int length(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char ch[],int size){
    for(int i=size-1;i>=0;i--){
        printf("%c",ch[i]);
    }
}
