#include<stdio.h>
int main(){
    int i;
    int n=3;
    for(i=0;i<5;i++){
        n=(n-1)*2;
    }
    printf("%d",n);
}