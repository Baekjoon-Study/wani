#include <stdio.h>
int main(){
    int t, tmp;
    int a, b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        long int result = a*b;
        while (b!=0){
            tmp = a%b;
            a=b;
            b=tmp;
        }
        result /= a;
        printf("%ld\n",result);
    }
}