
// Adding the digits of a number 

#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  int ar[t];
  for(int i=0;i<t;i++) {
    scanf("%d",&ar[i]);
  }
  for(int i=0;i<t;i++) {
    int sum=0;
    int n=ar[i];
    while(n!=0) {
      sum+=n%10;
      n=n/10;
    }
  	printf("%d\n",sum);
  }

}

