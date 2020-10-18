// Wrong of trying to find out min swaps needed to make an array follow a condition.

#include <stdio.h>
#include<stdlib.h>
int minSwaps(int N, int* A) {
    int count=0;
    for(int i=0;i<N-1;i++) {
        for(int j=0;j<N-1;j++) {
            if(A[j]<A[j+1]) {
                count++;
                int t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d",&N);
    int* A =(int*)malloc(N*sizeof(int));
    for(int j=0;j<N;j++) {
        scanf("%d",&A[j]);
    }
    int result;
    result=minSwaps(N,A);
    printf("%d",result);
    return 0;
}









