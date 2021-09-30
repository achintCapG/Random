#include <stdio.h>
/* Include other headers as needed */
int main()
{

    /* To print fibonacci numbers upto n */
    
  int n;
  scanf("%d",&n);
  int i=0,j=1;
  if(n==1)
    printf("%d",i);
  else {
    printf("%d\n%d",i,j);
    for(int x=2;x<n;x++)
    {
      int t=i+j;
      printf("\n%d",t);
      i=j;
      j=t;
    }
  }
  
}