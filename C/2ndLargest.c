
// Printing the secomd largest number in array

#include <stdio.h>
int main()
{

  int ar[5];
  for(int i=0;i<5;i++) {
    scanf("%d",&ar[i]);
  }
  for(int i=0;i<5;i++) {
    for(int j=0;j<4;j++) {
      if(ar[j]>ar[j+1]) {
        int t=ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=t;
      }
    }
  }
//   if(ar[4]==ar[3])
//     printf("%d",ar[2]);
//   else 
//   	printf("%d",ar[3]);
  int l=ar[4],x=4;
  while(l==ar[x] && x>=0) {
    x--;
  }
  printf("%d",ar[x]);
  
}