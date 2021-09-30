
//  Adding the digits of a number with the recursion method

#include <stdio.h>
int digits(int sum , int n);
int main()
{
  int t;
  scanf("%d",&t);
  int ar[t];
  for(int i=0;i<t;i++) {
    scanf("%d",&ar[i]);
  }
  for(int i=0;i<t;i++) {
    printf("%d\n",digits(0,ar[i]));
  }
}
int digits(int sum ,int n) {
  if(n==0)
    return sum;
  else {
    sum = sum + digits(n%10,n/10);
    return sum;
  }
}