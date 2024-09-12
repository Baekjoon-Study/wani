#include <stdio.h>
int main(){
    int n,m;
    int i,j,k;
    scanf("%d %d",&n,&m);
    int list[n],x,y;
    for(x=0;x<n;x++){
        list[x]=0;
    }
    for(x=0;x<m;x++){
        scanf("%d %d %d",&i,&j,&k);
        for(y=i-1;y<j;y++){
            list[y]=k;
        }
    }
    for(x=0;x<n;x++){
        printf("%d ",list[x]);
    }
}