// Given a number N and K, find count of numbers less than N whose sum of digits is divisible by K

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void getK(char *N, int K) 
{ 
    int x;
    sscanf(N, "%d", &x); 
    int count=1;
    for(int i=1;i<x;i++) {
        int t=i;
        int sum=0;
        while(t>0) {
            sum+=t%10;
            t=t/10;
        }
        if(sum%K==0 && sum%1000000007) {
            count++;
        }
    }
    printf("%d",count);

}

int main() {
    char N[10];
    scanf("%s",N);
    int K;
    scanf("%d",&K);
    getK(N,K);
    return 0;
}