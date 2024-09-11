#include <stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    int list[n];
    for(i=0;i<n;i++){
        scanf("%d",&k);
        list[i]=k;
    }
    int min=list[0], max=list[0];
    for (i=1; i<n; i++){
        if(min > list[i]) min = list[i];
        if(max < list[i]) max = list[i];
    }
    printf("%d %d",min,max);
    return 0;
}
