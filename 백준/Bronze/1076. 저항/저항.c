#include <stdio.h>
#include <string.h>
int main(){
    const char *color[10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    int ten[10]={0,1,2,3,4,5,6,7,8,9};
    long int digits[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
    long long int result=0;
    char first[7], second[7], third[7];
    scanf("%s",first);
    getchar();
    scanf("%s",second);
    getchar();
    scanf("%s",third);
    for(int i=0;i<10;i++){
        if(strcmp(color[i],first)==0){
            result += 10*ten[i];
        }
        if(strcmp(color[i],second)==0){
            result += ten[i];
        }
    }
    for(int i=0;i<10;i++){
        if(strcmp(color[i],third)==0){
            result *= digits[i];
        }
    }
    printf("%lld",result);   
}