#include <stdio.h>
int main(){
    int max,min;
    scanf("%d %d",&min,&max);
    if(max<min){
        int tmp = max;
        max=min;
        min=tmp;
    }
    printf("%d",(min-1)+(min*(max-1)));
}