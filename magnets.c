// This program was made for a coding competetion

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
