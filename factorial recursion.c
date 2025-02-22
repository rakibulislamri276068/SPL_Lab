#include<stdio.h>
int function(int a){
    if(a==1) return 1;
    else return a*function(a-1);
}


int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int ans=function(n);
     printf("%d",ans);
}
