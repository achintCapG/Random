
// To find if the str2 is rotated version of str 1

// return 1 for YES and 0 for NO.
#include<string.h>
int isRotation(char *str1, char* str2)
{
  int len1=strlen(str1);
  int len2=strlen(str2);
  int ans;
  if(len1!=len2)
    ans=0;
  else {
  //   int i=0,j=0,flag=0;
  //   while(i<len1 && j<len2) {
  //       if(str1[i]!=str2[j]) {
  //         if(flag>0) {
  //           ans=0;break;
  //         }
  //         if(i==len1 && flag==0){
  //           ans=0;break;
  //         }
  //         else 
  //           i++;
          
  //       }
  //       else if(str1[i]==str2[j] ){
  //         if(i>len1) {
  //           i=0;j++;
  //         }
  //         else { 
  //         	i++;j++;
  //         }
  //         	flag++;
          
  //       }
  //   }
  //  if(flag==len1) 
  //    ans=1;

    //  We concatenate str2 to str 2 and check if str1 is present in it
    char *str;
    str=(char *)malloc((2*len1-1)*sizeof(char));
    strcat(str,str2);
    strcat(str,str2);
    void *ptr;
    ptr=strstr(str,str1);
    if(ptr!=NULL) {
      ans=1;
    }
    else
      ans=0;
  }
  return ans;
  
}
