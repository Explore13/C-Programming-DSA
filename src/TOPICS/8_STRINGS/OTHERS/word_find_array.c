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
    int len = strlen(word), length = strlen(str), flag, j, x = 0,arr[100]={0},k=0;
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
        if (flag == len - 2 & word[j] == '\0') {
          arr[k]=i+1;
          k++;


        }
    }
    if(arr[0]!=0){
        printf("(%s) is found in:",word);
    for(k=0;arr[k]!=0;k++){
        printf(" %d",arr[k]);
    }
    printf("th positions");
}
    else {
        printf("Not Found");
    }
    return 0;
}
