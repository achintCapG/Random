// Printing the K largest number in array

int kthLargest(int arr[], int size, int k)
{
  for(int i=0;i<size-1;i++) {
    for(int j=0;j<size-1;j++) {
      if(arr[j]>arr[j+1]) {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

//   for(int i=0;i<size;i++) {
//   	printf("%d",arr[i]);
//   }
  
  return arr[size-1-k];

}