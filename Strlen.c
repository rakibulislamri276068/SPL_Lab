#include <stdio.h>
#include<string.h>

int main() {
  char ch[100],ch1[100],ch2[100];

  int length;
  printf("Enter a string");
  scanf("%s",ch);
   printf("Enter second string");
  scanf("%s",ch1);
  strcat(ch,ch1);
  strcat(ch2,ch);
  printf("%s",ch2);
}
