
// Welcome to EXPLORER's IDE

#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
    int a,b;
    printf("Enter length:");
    scanf("%d",&a);
    printf("Enter Width:");
    scanf("%d",&b);
    int perimeter=2*(a+b);
FILE *fptr;
fptr= fopen("perimeter.txt","w");
if (fptr==NULL){
    printf("Nothing is There");
    return 1;
}



    fprintf(fptr,"Length= %d and Width= %d\nPerimeter= %d",a,b,perimeter);

    fclose(fptr);
    printf("File created and data uploaded successfully");

    fptr=fopen("perimeter.txt","r");
    if (fptr==NULL)
    {
        printf("Failed to Open the File");
        return 1;
    }
    
    int Perimeter;
 fscanf(fptr,"Perimeter= %d",&Perimeter);
 

    fclose(fptr);
        printf("\nPerimeter=%d\n",Perimeter);
    return 0;
}