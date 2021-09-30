
// Printing the fibonacci series , Reverse and Recursively upto n numbers.

#include <stdio.h>
int recur(int x,int y,int n,int ar[]);
int main()
{
  int n;
  scanf("%d",&n);
  if(n==1)
    printf("0");
  else {
    int ar[n];
  	int i=0,j=1;
  	int a=recur(i,j,n,ar);
  
    for(int i=0;i<n;i++){
      printf("%d\n",ar[i]);
    }
  }
}
int recur(int i,int j,int n,int ar[]) {
  if(n==0 ) {
    return 0;
  }
  else {
    int pr=i+j;
    ar[n-1]=i;
    i=j;
    j=pr;
    recur(i,j,n-1,ar);
  }

}