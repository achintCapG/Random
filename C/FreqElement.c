
// Frequency of an element in an array

#include <stdio.h>

int main()
{
int n;
  scanf("%d",&n);
  int ar[n],freq[n],flag[n];
  for(int i=0;i<n;i++) {
    scanf("%d",&ar[i]);
    flag[i]=0;
  }
  for(int i=0;i<n;i++) {
    freq[i]=1;
    for(int j=i+1;j<n;j++) {
      if(ar[i]==ar[j] && flag[i]==0) {
        freq[i]++;
        flag[j]=1;
      }
    }
  }
  for(int i=0;i<n;i++) {
    if(flag[i]==0) {
      printf("%d occurs %d times\n",ar[i],freq[i]);
    }
  }
}
  