// Find count of a number in a sorted list with duplicates

#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  int count[t];
  for(int i=0;i<t;i++) {
    count[i]=0;
    int n,k;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(int j=0;j<n;j++) {
      scanf("%d",&ar[j]);
      if(ar[j]==k)
        count[i]++;
    }  

  }
  for(int i=0;i<t;i++)
    printf("%d\n",count[i]);

}