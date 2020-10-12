
// Selection Sort - we select the lowest element in the array 
// and bring it to the start of array, every iteration

#include <stdio.h>
void select_sort(int ar[], int n) {
    
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i+1;j<n;j++) {

            if(ar[j]<ar[min]) {
                min=j;
            }
        }

            int t=ar[i];
            ar[i]=ar[min];
            ar[min]=t;        
        
    }
    for(int x=0;x<n;x++)
        printf("%d\n",ar[x]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]);
    }

    select_sort(ar,n);

}