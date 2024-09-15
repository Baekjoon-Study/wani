#include <stdio.h>
int main(){
    int n,i,max=0;
    scanf("%d",&n);
    int score[n];
    float average;
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
        if(max<score[i]){
            max=score[i];
        }
    }
    for(i=0;i<n;i++){
        average += (float)score[i]/max*100;
    }
    printf("%f",average/n);
}