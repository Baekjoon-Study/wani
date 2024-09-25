#include <stdio.h>
int main(){
    int cup[3]={1,0,0}, m;
    scanf("%d",&m);
    int a,b,tmp,i;
    for( i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        tmp = cup[a-1];
        cup[a-1]=cup[b-1];
        cup[b-1]=tmp;
    }
    for(i=0;i<3;i++){
        if(cup[i]==1){
            printf("%d",i+1);
        }
    }
}