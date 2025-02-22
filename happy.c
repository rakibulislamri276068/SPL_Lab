#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n;
    int *p=&a;
    for(i=0;i<5;i++){
        scanf("%d",&*(p+i));

    }
    printf("What number you search");
    scanf("%d",&n);
int count=0;
    for(i=0;i<5;i++){
      if(*(p+i)==n)
        count++;



      }
printf("%d is found %d Times",n,count);
    }

