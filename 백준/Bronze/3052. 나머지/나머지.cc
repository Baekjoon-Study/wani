#include <stdio.h>
#define len 10
int main(){
    int list[len],result[42]={0},i,k;
    int count=0;
    for(i=0;i<len;i++){
        scanf("%d",&k);
        list[i]=k%42;
        if(result[list[i]]==0){
            result[list[i]]=1;
            count++;
        }
    }
    printf("%d",count);
}