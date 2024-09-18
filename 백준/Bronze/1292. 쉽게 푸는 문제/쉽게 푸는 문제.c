#include <stdio.h>
int main(){
    int start, end;
    scanf("%d %d",&start,&end);
    int list[end],idx=0;
    for(int i=1;i<=end && idx < end;i++){
        for(int j=0;j<i && idx < end;j++){
            list[idx++]=i;
        }
    }
    int sum=0;
    for(int i=start-1;i<end;i++){
        sum += list[i];
    }
    printf("%d",sum);
}