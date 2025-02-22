#include<stdio.h>
int function(arr[]){
int i,min=arr[0];
for(i=0;i<5;i++){
    if(arr[i]<min){
        min=arr[i]
    }
    return arr[i];
}
}

int main()
{
  int i,n,arr[100];
  printf("Enter number");
  for(i=0;i<5;i++){
    scanf("%d",&arr[i]);

  }
  printf("%d",function(arr));


}
