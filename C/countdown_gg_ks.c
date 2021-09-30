
#include <stdio.h>

int main() {
    
    int t;
    scanf("%d",&t);
    int array[t];
    for(int i=0;i<t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        
        int arr[n];
        int a[k];
    
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        
        int flag=0;
        
        for(int j=0;j<k;j++)
        {
            a[j]=k-j;
        }
        for(int j=0;j<n;j++)
        {

            if(arr[j]==a[0])
            {
                for(int m=1;m<k;m++)
                {
                    if(arr[j+m]!=a[m])
                    {
                        break;
                    }
                    if(m==k-1 && arr[j+m]==a[m])
                        flag++;
                }
            }
        }
        
        array[i]=flag;
        
    }
    for( int i =0;i<t;i++)
    {
    printf("Case #%d: %d\n",i+1,array[i]);
    }
}
