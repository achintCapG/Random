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
void primeFactors(int n)
{
  int t=n;
  while(t!=0) {
  for(int i=2;i<=n;i++) {
    if(isprime(i) && t%i==0) {
      t=t/i;
      i=2;
      printf("%d\n",i);
    }
  }
  }
}

