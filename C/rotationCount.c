// Given an array of integers, find the minimum number of rotations performed on 
// some sorted array to create this given array.

int rotationCount(int a[], int size)
{
//   finding the minimum number index and comparing its index to given array
  
  int min=a[0],index=0;
  for(int i=1;i<size;i++) {
    if(a[i]<min) {
      min=a[i];
      index=i;
    }
  }
  if(index==0)
    return -1;
  else 
    return index;
  
}