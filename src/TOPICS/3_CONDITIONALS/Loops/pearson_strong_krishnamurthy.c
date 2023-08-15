// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int n,rem,sum=0;
printf("Enter a number:");
scanf("%d",&n);
int temp=n;
while(n!=0){
    rem=n%10;
    int fact=1;
    for(int i=1;i<=rem;i++){
        fact*=i;
    }
    sum+=fact;
    n/=10;
}
if(sum==temp){
    printf("%d is a strong number",temp);
}
else {
    printf("%d is not a strong number",temp);

}
    return 0;
}
