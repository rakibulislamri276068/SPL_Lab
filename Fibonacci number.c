#include<stdio.h>
int main()
{
  int f1=0,f2=1,f,i,n;
  printf("Enter a number");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    f=f1+f2;
    printf("%d,",f);
    f2=f1;
    f1=f;
  }
}
