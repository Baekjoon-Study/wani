#include <stdio.h>
int main(){
    int n,m,i,k;        // n(column), m(row)
    scanf("%d %d",&n,&m);
    int a[n][m], b[n][m];
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            scanf("%d",&a[i][k]);
        }
    }
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            scanf("%d",&b[i][k]);
        }
    }
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            printf("%d ",a[i][k]+b[i][k]);
        }
        printf("\n");
    }
}