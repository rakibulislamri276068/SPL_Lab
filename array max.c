#include<stdio.h>

int function(int n,int arr[]){
    int i,max;
    max=arr[0];

for(i=0;i<n;i++){
    if(arr[i]>max)
        max=arr[i];
}
return max;
}


int main(){

int a, ara[10];
scanf("%d",&a);
for(int i=0;i<a;i++){
    scanf("%d",&ara[i]);
}
int m=function(a,ara);
printf("Max is :%d",m);
}
