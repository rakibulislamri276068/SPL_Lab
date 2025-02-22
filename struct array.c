#include<stdio.h>
struct point  {
int age;
float salary;
char ch[100];

};

int main()
{
    struct point R;
    for(int i=0;i<2;i++){
    printf("Enter person %d info\n",i+1);
    printf("\nName");
    scanf("%s",R.ch);
    printf("\nAge");
    scanf("%d",&R.age);
    printf("\nSalary");
    scanf("%f",&R.salary);}
    for(int i=0;i<2;i++){

    printf("Name is %s\n",R.ch);
    printf("Age is : %d\n",R.age);
    printf("Salary is:%f\n",R.salary);
    }
}
