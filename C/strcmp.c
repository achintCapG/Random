//  Comparing two strings using strcmp function.

#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[100],str2[100];
  scanf("%s",str1);
  scanf("%s",str2);
  int n = strcmp(str1,str2);
  if(n==0) {
    printf("Equal");
  }
  else if(n>0) {
    printf("Large");
  }
  else {
    printf("Small");
  }
}