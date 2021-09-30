
// k smallest number in array

int findKSmallest(int* ar, int n, int k)
{
  for(int i=0;i<n-1;i++) {
    for(int j=0;j<n-1;j++) {
      if(ar[j]>ar[j+1]) {
        int temp=ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=temp;
      }
    }
  }
  return ar[k-1];
}