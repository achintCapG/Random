#include <stdio.h>
/* Include other headers as needed */
int main()
{

    /* Program to generate prime numbers  */
 
  int n;
  scanf("%d",&n);
  for(int i=2;i<=n/2;i++) {
    int flag=0;
    for(int j=2;j<i;j++) { 
      if(i%j==0) {
        flag=1;
        break;
      }
            
    }
    if(flag==0)
      printf("%d\n",i);
  }
}