// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
void slice(char *ch,int start,int end){
    int i,j;
    char newstr[end-start+1];
for(i=0,j=start;i<=end-start,j<=end;i++,j++){
    newstr[i]=ch[j];
}
newstr[i]='\0';
printf("Sliced form: %s",newstr);
}
int main() {
char str[100];
printf("Enter something for slicing:");
fgets(str,100,stdin);
int len=strlen(str);
if(str[len-1]=='\n'){
    str[len-1]='\0';
}
slice(str,3,6);

    return 0;
}
