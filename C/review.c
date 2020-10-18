#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Given a string S, of length N that is indexed from to 0 to 1-N, print its even-indexed and odd-indexed characters as space-separated strings on a single line

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        char str[10000];
        scanf("%s",str);

        for(int j=0;j<strlen(str);j+=2) {
            printf("%c",str[j]);
        }
        printf(" ");
        for(int j=1;j<strlen(str);j+=2) {
            printf("%c",str[j]);
        }

        printf("\n");

    }
}

// In Python
// for i in range(int(input())): s=input(); print(*["".join(s[::2]),"".join(s[1::2])])