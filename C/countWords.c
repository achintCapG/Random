//  Counting the words in a string 

int countWords(char str[]) 
{
  int len= strlen(str);
  int count=0,i=0;
  int spaces[50],j=0;
  for(i;i<=len;i++) {
    if(str[i]==' ' || str[i]=='\0') {
      spaces[j]=i;
      j++;

    }
  }
//   printf("%d",j);
  for(int k=0;k<j-1;k++){
    if((spaces[k+1]-spaces[k])>1)
      count++;
  }
    if(str[0]!=' ' && str[0]!='\0')
      count++;
  	else if(j==0)
      count=0;
  
	return count;
}