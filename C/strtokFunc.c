#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char* strtok_code(char *str1, char delim)
{
	static char *in = NULL;
  	
  	if(str1 != NULL)
      in = str1;
  	if(in == NULL)
      return NULL;
  	char *out= (char*)malloc(strlen(in)+1); 
  	int i=0;
  	while(in[i]!='\0')
    {
      if(in[i]!=delim)
      {
        out[i] = in[i];
      }
      else{
        out[i] = '\0';
        in = in +i+1;
        return out;
      }
      i++;
    }
  out[i] = '\0';
  in = NULL;
  return out;
}

int main()
{
  int t,i,j=0;
  char str[50];
  char ch;
  char *p;
  scanf("%d", &t);
  while(t--)
  {
    scanf("%s %c", str, &ch);
	p=strtok_code(str,ch);
    while(p!=NULL)
    {
      printf("%s\n",p);
      p=strtok_code(NULL,ch);
    }
  }
}