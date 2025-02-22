#include<stdio.h>
struct person{
int age;
float salary;
};

int main(){
    struct person person[3];
    int i;
    for(i=0;i<3;i++){
        printf("person  %d information\n",i+1);
        printf("Age:");
        scanf("%d",&person[i].age);
        printf("\nsalary:");
            scanf("%f",&person[i].salary);
    }
    for(i=0;i<3;i++){
        printf("\n%d age %d",i+1,person[i].age);
        printf("\n%d salary %.2f",i+1,person[i].salary);
    }






}
