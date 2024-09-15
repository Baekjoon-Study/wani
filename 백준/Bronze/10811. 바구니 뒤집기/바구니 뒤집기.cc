#include <stdio.h>
int main(){
    int l,n;
    scanf("%d %d",&l,&n);
    int num[l];
    for(int i=0;i<l;i++){
        num[i]=i+1;
    }
    int start,end,temp;
    for(int k=0;k<n;k++){
        scanf("%d %d",&start,&end);
        for(int j=start-1;j<end;j++){
            temp=num[j];
            num[j]=num[end-1];
            num[end-1]=temp;
            end--;
    }
    }
    for(int k=0;k<l;k++){
        printf("%d ",num[k]);
    }
}