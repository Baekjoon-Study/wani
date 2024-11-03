#include <stdio.h>
int main(){
    int arr[5], i, j, t,sum=0;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
        for(j=0;j<i;j++){
            if(arr[j]>arr[i]){
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    printf("%d\n%d",sum/5,arr[2]);
}