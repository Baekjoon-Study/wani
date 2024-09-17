#include <stdio.h>
#define L 9
int main(){
    int num_list[L][L],i,k;
    int max=0, idx_column=0, idx_row=0;
    for(i=0;i<L;i++){
        for(k=0;k<L;k++){
            scanf("%d",&num_list[i][k]);
            if(num_list[i][k]>max){
                max = num_list[i][k];
                idx_column = i;
                idx_row = k;
           
            }
        }
    }
    printf("%d\n",max);
    printf("%d %d",idx_column+1,idx_row+1);
}