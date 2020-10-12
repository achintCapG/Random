
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar[n];
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++) {
        int count=0;
        for(j=1;j<ar[i];j++) {
            if(pow(a,j)<ar[i] || pow(b,j)<ar[i] ||(pow(a,j)+pow(b,j))<ar[i])
                count++;
        }

        printf("%d\n",count);
    }
}
