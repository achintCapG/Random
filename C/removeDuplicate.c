//  Remove duplicate elements from the array and return the array

void removeDuplicates(int *arr, int *size)
{
  int count=1;
  int e=arr[0];
//   printf("%d",arr[0]);
  for(int i=1;i<*size;i++) {
    if(e!=arr[i]) {
      count++;
      e=arr[i];
//       printf("%d",arr[i]);
    }
  }
  e=arr[0];

  int ar[count],j=1;
    ar[0]=arr[0];
  for(int i=1;i<*size;i++) {
    if(e!=arr[i]) {
      ar[j]=arr[i];
      e=arr[i];
      j++;
    }
  }
    *size=count;
  for(int i=0;i<count;i++) {
    arr[i]=ar[i];
  }
}