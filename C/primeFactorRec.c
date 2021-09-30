#include <stdio.h>
void primef(int num);
int isprime(int a);
int main()
{
   int no;
   scanf("%d",&no);
   primef(no);
}
void primef(int n) {
  int i=2;
  while(n>1) {
    if(isprime(i) && n%i==0) {
      n=n/i;
      printf("%d\n",i);
//       printf("Hello");
      primef(n);
    }
    else 
      i++;
  }
}
  
int isprime(int n) {
  int flag=0;
  for(int i=2;i<=n/2;i++) {
    if(n%i==0) {
      flag=1;
      break;
    }
  }
  if(flag==0){
    return 1;
  }
  else 
    return 0;
}