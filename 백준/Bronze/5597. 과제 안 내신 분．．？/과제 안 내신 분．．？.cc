#include <stdio.h>
int main(){
    int student[30],i;
    for(i=0;i<30;i++){
        student[i]=0;
    }
    int num;
    for(i=0;i<30;i++){
        scanf("%d",&num);
        student[num-1]=1;
    }
    for(i=0;i<30;i++){
        if(student[i]==0){
            printf("%d\n",i+1);
        }
    }
}