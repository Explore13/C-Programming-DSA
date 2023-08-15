// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct employee{
    char name[100];
    int age;
    float salary;
    char dept[100];
}emp;



int main() {
emp e1[5];
char c;
for(int i=0;i<5;i++){
    printf("\n\nEnter %d Employee Details:",i+1);
    printf("\nEnter name:");
    fgets(e1[i].name,sizeof(e1[i].name),stdin);
    e1[i].name[strcspn(e1[i].name,"\n")]='\0';
    printf("Enter age:");
    scanf("%d",&e1[i].age);
    getchar();
    printf("Enter salary:");
    scanf("%f",&e1[i].salary);
    getchar();
printf("Enter Dept:");
fgets(e1[i].dept,sizeof(e1[i].dept),stdin);
    e1[i].name[strcspn(e1[i].name,"\n")]='\0';

}
for(int i=0;i<5;i++){
    printf("\n DETAILS OF %s:",strupr(e1[i].name));
    printf("\n\tAge: %d\n\tSalary: %.2f\n\t Dept: %s\n",e1[i].age,e1[i].salary,strupr(e1[i].dept));
}
    return 0;
}
