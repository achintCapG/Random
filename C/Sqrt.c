#include <stdio.h>
/* Include other headers as needed */
#include <math.h>
int main()
{

    /* to print square root of numbers in an array */
 	
  int n;
  scanf("%d",&n);
  float ar[n];
  for(int i=0;i<n;i++) {
    scanf("%f",&ar[i]);
    ar[i]=sqrt(ar[i]);
  }
  for(int i=0;i<n;i++) {
    printf("%.2f\n",ar[i]);
  }
}