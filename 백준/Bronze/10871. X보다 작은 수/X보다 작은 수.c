#include <stdio.h>
int main(){
    int n,x,k;
    int i;
    scanf("%d %d",&n,&x);
    int list[n];
    for(i=0;i<n;i++){
        scanf("%d", &k);
        list[i]=k;
    }
    for(i=0;i<n;i++){
        if(list[i]<x) printf("%d ",list[i]);
    }
}