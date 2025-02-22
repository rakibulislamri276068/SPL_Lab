#include<stdio.h>
struct student{
char name[100];
char id[100];
float cgpa;

};

int main()
{
    struct student p1,p2,p3;
    printf("person 1 information\n");
    printf("Name\n");
    scanf("%s",p1.name);
    printf("ID\n");
    scanf("%s",p1.id);
    printf("cgpa\n");
    scanf("%f",&p1.cgpa);

    printf("person 2 information\n");
    printf("Name\n");
    scanf("%s",p2.name);
    printf("ID\n");
    scanf("%s",p2.id);
    printf("cgpa\n");
    scanf("%f",&p2.cgpa);

    printf("person 1 information\n");
    printf("%s\n",p1.name);
    printf("%s\n",p1.id);
    printf("%f\n",p1.cgpa);

        printf("person 2 information\n");
    printf("%s\n",p2.name);
    printf("%s\n",p2.id);
    printf("%f\n",p2.cgpa);


}
