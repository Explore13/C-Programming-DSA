// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

struct student {
    char name[50];
    int id;
    int grade[5];
};
float average(const int *temp){
    float avg=0;
        for(int i=0;i<5;i++){
            avg+=(float)temp[i];
        }
        avg=avg/5.0;
        return avg;
}

int main() {
    int num;
    printf("Enter the number of students:");
    scanf("%d", &num);
    getchar();
    struct student std[num];
    for (int i = 0; i < num; i++) {
        printf("Enter details of student-%d:", i + 1);
        printf("\nName:");
        fgets(std[i].name, sizeof(std[i].name), stdin);
        std[i].name[strcspn(std[i].name, "\n")] = '\0';
        printf("\nID Number:");
        scanf("%d", &std[i].id);
        getchar();
        for (int j = 0; j < 5; j++) {
            printf("\nEnter marks of Subject-%d:", j + 1);
            scanf("%d", &(std[i].grade)[j]);
            getchar();
        }
    }
    char str[50];
    int count=0;
    printf("\n\tEnter student name:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;i<num;i++){
        if(strcmp(std[i].name,str)==0){
            printf("\n\tNAME: %s\n\tID: %d\n\tAVERAGE: %.2lf\n",strupr(std[i].name),std[i].id,average(std[i].grade));
       count++;
        }
    }
    if(count==0){
        printf("\n\tWrong Input");
    }
    return 0;
}
