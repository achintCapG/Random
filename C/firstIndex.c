// Find first occurrence of an integer in a sorted list with duplicates 

#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  int index[t];
  for(int i=0;i<t;i++) {
    index[i]=0;
    int n,k,flag=0;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(int j=0;j<n;j++) {
      scanf("%d",&ar[j]);
    }
    for(int j=0;j<n;j++) {
	  if(ar[j]==k) {
        index[i]=j;
        flag=1;
        break;
      }
    }
    if(flag==0)
      index[i]=-1;
  }
  for(int i=0;i<t;i++)
    printf("%d\n",index[i]);

}