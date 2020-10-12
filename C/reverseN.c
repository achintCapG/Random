#include <stdio.h>
int main()
{
// to reverse a number 

  int n;
  scanf("%d",&n);
  int num=0,t=n;
  while(n!=0) {
    int a=n%10;
    n=n/10;
    num=num*10+a;
  }
  printf("%d",num);
  
}