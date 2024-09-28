#include <stdio.h>
int main(){
    long long int min,max,tmp=0;
    long long int sum;
    scanf("%lld %lld",&min,&max);
    if(max<min){
        tmp=max;
        max = min;
        min = tmp;
    }
    sum = max*(max+1)/2 - min*(min-1)/2;
    printf("%lld",sum);
}