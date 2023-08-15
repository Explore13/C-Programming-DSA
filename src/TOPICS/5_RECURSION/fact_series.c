#include <stdio.h>

long int fact (int n) {
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Factorial series: ");
    for (int i = 1; i <=n; i++) {
        printf("%d ", fact(i));
    }

    return 0;
}