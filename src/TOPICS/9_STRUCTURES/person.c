// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
struct person {
    char name[100];
    int age;
    float h;
    float w;
};
int main() {
struct person p[3];
char c;
for(int i=0;i<3;i++){
    printf("Enter your name:");
fgets(p[i].name,sizeof(p[i].name),stdin);
    p[i].name[strcspn(p[i].name, "\n")] = '\0';
printf("\nEnter your age:");
    scanf("%d",&p[i].age);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nEnter your height:");
    scanf("%f",&p[i].h);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nEnter your weight:\n");
    scanf("%f",&p[i].w);
    while ((c = getchar()) != '\n' && c != EOF);
}

    for(int i=0;i<3;i++){
        printf("\n\nDETAILS OF %s:",p[i].name);
        printf("\n\tAge: %d\n\tHeight: %.2f\n\tWeight: %.2f",p[i].age,p[i].h,p[i].w);
    }
    return 0;
}
