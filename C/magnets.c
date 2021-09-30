/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]);
    }
    int count=1;
    int first=ar[0];
    for(i=1;i<n;i++) {
        if(first==ar[i]){
            continue;
        }
        else {
            first=ar[i];
            count++;
        }
    }
    printf("%d",count);
}
