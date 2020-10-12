
// Finonacci series in recursive

#include <stdio.h>
int recur(int x,int y,int n);
int main()
{
  int n;
  scanf("%d",&n);
  if(n==1)
    printf("0");
  else {
  	int i=0,j=1;
  	int a=recur(i,j,n);
  }
}
int recur(int i,int j,int n) {
  if(n==0 ) {
    return 0;
  }
  else {
    int pr=i+j;
    printf("%d\n",i);
    i=j;
    j=pr;
    recur(i,j,n-1);
  }

}