#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n], i, j, t;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++){
            if(arr[j]>arr[i]){
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    for(i=0;i<n;i++) printf("%d\n",arr[i]);
}