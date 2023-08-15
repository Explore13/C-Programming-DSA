// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
int math,science;
printf("Enter Math marks of the student:");
scanf("%d",&math);
printf("Enter Science Marks:");

    scanf("%d",&science);
    if(math>=40&&science>=40){
        printf("You get Rs.35/-");
    }
    else if(math>=40 ){
        printf("You get Rs.15/-");
    }
else if(science>=40) {
printf("You get Rs.15/-");


}
else {
printf("You failed");
}
    return 0;
}
