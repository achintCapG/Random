#include<string.h>
int isAnagram(char *str1, char* str2)
{

  int len1=strlen(str1);
  int len2=strlen(str2);
  if(len1!=len2) {
    return 0;
  }
  else {
    int flag[len1];
    for(int i=0;i<len1;i++) {
      for(int j=0;j<len2;j++) {
        if(toupper(str1[i])==toupper(str2[j])) {
          flag[i]=1;
          str2[j]=' ';
          break;
        }
      }
    }
    for(int i=0;i<len1;i++){
      if(flag[i]!=1) {
        return 0;
      }
    }
    return 1;
  }
}
