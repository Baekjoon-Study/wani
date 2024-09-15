#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int list[n],i;
    for(i=0;i<n;i++){
        list[i]=i+1;
    }
    int j,k;
    for(i=0;i<m;i++){
        scanf("%d %d",&j,&k);
        int tmp = list[j-1];
        list[j-1]=list[k-1];
        list[k-1]=tmp;
    }
    for(i=0;i<n;i++){
        printf("%d ",list[i]);
    }
}