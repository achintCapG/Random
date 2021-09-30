#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
  int tot,size,i;
  char** Coll=NULL;    // An array of character pointers. Always remember, 
  //    char* is a string.
  //     char** is an array of strings
  tot = 5;        // How many names you want to store ?
  Coll = (char**)malloc(tot * sizeof(char**));      
  // Allocate memory for total number of names
  size = 10;    // What is length of each name ?
  for (i=0;i<tot;i++)
    Coll[i] = (char*)malloc(size * sizeof(char*));      
  // Allocate memory for each name in the array

  // Enter the names : 
  strcpy(Coll[0],"Ram");          // Input all the names
  strcpy(Coll[1],"Shyam");          // Input all the names
  strcpy(Coll[2],"Mohan");          // Input all the names
  strcpy(Coll[3],"Sohan");          // Input all the names
  strcpy(Coll[4],"Murari");          // Input all the names
  printf("You entered the following names : \n");
  for (i=0;i<tot;i++)
    printf("%s\n",Coll[i]);        // Names are accessed
  return 0;
}