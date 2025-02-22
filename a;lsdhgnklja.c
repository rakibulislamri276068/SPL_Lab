#include<stdio.h>

int fun(char cha[]){
int count=0;
for(int i=0;cha[i]!='\0';i++){
    count++;
}
return count;
}




int main(){
char ch[100];
int length;
while(1==scanf("%s",&ch)){
    length=fun(ch);
    printf("%d",length);
}

}
