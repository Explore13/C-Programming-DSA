// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
char name[100];
printf("Enter Your Full Name:");
fgets(name,100,stdin);
int len=strlen(name),index;
if(name[len-1]!='\0'){
    name[len-1]='\0';
}
for(int i=0;name[i]!='\0';i++){
if(name[i]==' '){
    index=i;
}
}
printf("Your Name in Short:\n");
for(int j=0;name[j]!='\0';j++){
    if(j==0){
        printf("%c",name[j]);
    }
    else if(j==index){
        for(int k=index;name[k]!='\0';k++){
            printf("%c",name[k]);
        }
    }
    else if(name[j]==' '){
        printf("%c",name[j+1]);

    }
}

    return 0;
}
