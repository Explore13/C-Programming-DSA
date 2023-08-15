// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
struct rectangle {
    float width;
    float height;
};
void per(struct rectangle r){
    double area,p;
    printf("Area: %.2f\n",r.height*r.width);
        printf("Perimeter: %.2f\n",2*(r.height+r.width));

}

int main() {
struct rectangle r1,r2;
printf("Enter width of rec-1:");
scanf("%f",&r1.width);
    printf("Enter height of rec-1:");
    scanf("%f",&r1.height);
    per(r1);
    printf("Enter width of rec-2:");
    scanf("%f",&r2.width);
    printf("Enter height of rec-2:");
    scanf("%f",&r2.height);
    per(r2);

    return 0;
}
