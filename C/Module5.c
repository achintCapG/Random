// Given a number N , find K numbers such that their sum of digits are divisbile by 5

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void getK(int N, int K) 
{
    int count=0;
    int num=0;
    int i=N+1;
    do {
        int t=i;
        int sum=0;
        while(t>0) {
            sum+=t%10;
            t=t/10;
        }
        if(sum%5==0) {
            count++;
            num=i;
        }
        i++;
    }while(count<K);
    printf("%d",num);

}

int main() {
    
    int N,K;
    scanf("%d",&N);
    scanf("%d",&K);
    getK(N,K);
    return 0;
}