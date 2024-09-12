#include <stdio.h>
#define len 9
int main(){
    int num[len],i;
    for(i=0;i<len;i++){
        scanf("%d",&num[i]);
    }
    int key=num[0],idx=0;
    for(i=1;i<len;i++){
        if(key<num[i]){
            key=num[i];
            idx=i;
        }
    }
    printf("%d\n%d",key,idx+1);
}