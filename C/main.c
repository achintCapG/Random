// Something ....

#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++) {
        arr[i]=i+1;
    }
    for(int i=0;i<m;i++) {
        int a,b,c; 
        int j=0; 
        scanf("%d %d %d",&a,&b,&c);
        int arA[a], arB[b], arC[c];
        for(j;j<a;j++) {
            arA[j]=arr[j];
            arr[j]=0;
        }
        for(j=a;j<a+b;j++) {
            arB[j]=arr[j];
            arr[j]=0;
        }
        while(a!=0) {
            arr[j-1]=arA[a-1];
            j--;
            a--;
        }
        for(int k=0;k<c;k++) {
            arC[k]=arr[j+k];
        }
        while(b!=0) {
            arr
        }

        
    } 
}
