void primeFactors(int n)
{

  // Function to print prime factors of a number
  int t=n;
  for(int i=2;i<=n;i++) {
    int flag=0;
    for(int j=2;j<i;j++) { 
      if(i%j==0) {
        flag=1;
        break;
      }
            
    }
    if(flag==0) {
      while(t!=0 && t%i==0) {
        t=t/i;
        printf("%d\n",i);
      }
    }
  }
  
}