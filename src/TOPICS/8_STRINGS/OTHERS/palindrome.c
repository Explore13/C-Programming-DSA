// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
int length(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count-1;
}
int main() {
char ch[100];
int size=length(ch);
fgets(ch,100,stdin);
char check[size];
for(int i=0;i<size;i++){
    check[size-i-1]=ch[i];
}
puts(check);
 
    return 0;
}
