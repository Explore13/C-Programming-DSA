// Welcome to EXPLORER's IDE
/*
 Find the salted form of a password entered by the
 user and salt will be added in the 5th position of
 the password.Use 123 as salt...
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
void salting(const char *ch,int len){
    int i;
    char salt[]="777";
    int length=strlen(salt);
    char newpass[len+length-1];
    for(i=0;i<len+length-1;i++){
if(i==5){
    for(int j=0;salt[j]!='\0';j++){
     newpass[i+j]=salt[j];

    }
    i+=length-1;

}
else if(i>=5+length){
    newpass[i]=ch[i-length];
}
else {
     newpass[i]=ch[i];
}

    }
    newpass[i]='\0';
    printf("New Password: %s",newpass);
}
int main() {
char str[100];
printf("Enter a strong password:");
fgets(str,100,stdin);
int len=strlen(str);
if(len<9){
    printf("Password should be more than 8 characters");
    return 0;
}
else {
    if(str[len-1]=='\n'){
        str[len-1]='\0';
        salting(str,len);
    }
}

    return 0;
}
