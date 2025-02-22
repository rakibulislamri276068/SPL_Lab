
#include<stdio.h>
int main(){
  char str[100];
  gets(str);
 int i, vowel=0,word=0;

 for(i=0;str[i]!='\0';i++){
   if(toupper(str[i])==toupper('a') ||
   str[i]==toupper('e') ||
   str[i]==toupper('i') ||
   str[i]==toupper('o') ||
   str[i]==toupper('u'))
   vowel++;

   if(str[i]==' '){
     word++;
   }
 }
 printf("number of vowel: %d\nnumber of words: %d",vowel,word+1);

}
