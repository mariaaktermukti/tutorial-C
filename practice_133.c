#include<stdio.h>
#include<string.h>
 struct person {
    char name[40];
    int age;
    float CGPA;
};
int main(){
    struct person P1;
    fgets(P1.name, sizeof(P1.name), stdin);
    P1.name[strcspn(P1.name,"\n")]='\0';
    scanf("%d", &P1.age);
    scanf("%f", &P1.CGPA);

    printf("\nName: %s",P1.name);
    printf("\nAge: %d",P1.age);
    printf("\nCGPA: %.3f",P1.CGPA);

    return 0;

}
