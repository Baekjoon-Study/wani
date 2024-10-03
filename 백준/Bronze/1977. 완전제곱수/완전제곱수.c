#include <stdio.h>
#include <math.h>
int main(){
    int n,m, min=10001;
    long int sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=n;i<m+1;i++){
        if(sqrt(i) == (int)sqrt(i)){
            sum += i;
            if(i<min){
                min = i;
            }
        }
    }
    if(sum==0 && min == 10001){
        printf("%d",-1);
    }
    else{
        printf("%ld\n%d",sum,min);
    }
}