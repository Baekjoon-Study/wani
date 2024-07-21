#include <stdio.h> 
#include <string.h> 
int main() { 
    char ap[100]; 
    scanf("%s",ap);
    int count = strlen(ap), i; 
    for(i=0; i<strlen(ap); i++) { 
        if(ap[i] == '=') { 
            if(ap[i-1] == 'c') count--; 
            if(ap[i-1] == 's') count--; 
            if(ap[i-1] == 'z') { 
                count--; 
                if(ap[i-2] == 'd') count--; 
            } 
        } 
        if(ap[i] == '-') { 
            if(ap[i-1] == 'c') count--; 
            if(ap[i-1] == 'd') count--; 
        } 
        if(ap[i] == 'j') { 
            if(ap[i-1] == 'l') count--; 
            if(ap[i-1] == 'n') count--;
        }
    } 
    printf("%d\n", count); 
} 