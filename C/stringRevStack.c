//  Reverse a string using a stack

#include<string.h>
/*
int Stack[SIZE], top = -1;
// int isFull();
// int isEmpty();
int push(int item);
int pop();

Above global variables and functions are available to you for use, So just complete the below function as per specifications. */

char stackS[30];
char popS();
char pushS(char ch);
char* reverseString(char *s)
{
  int len=strlen(s);
//   char st[len];
  for(int i=0;i<len;i++) {
    pushS(s[i]);
  }
  for(int j=0;j<len;j++) {
    s[j]=popS();
  }
//   s[len-1]='\0';
  return s;

}
char pushS(char ch) {
  if(isFull()) {
    printf("Stack Full");
    return '\0';
  }
  else {
    top++;
    stackS[top]=ch;
  }
}
char popS() {
  if(isEmpty()) {
    printf("Stack Empty");
    return '\0';
  }
  else {
    char ch=stackS[top];
    top--;
    return ch;
  }
}

//  Extras 
int isFull() {
  if(top==SIZE-1) {
    return 1;
  }
  else 
    return 0;
}
int isEmpty() {
  if(top==-1) {
    return 1;
  }
  else 
    return 0;
}