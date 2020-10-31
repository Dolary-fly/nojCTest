#include<stdio.h>
int main(){
    int n,i,j;
    int a[10];
    i=0;
    scanf("%d",&n);
    while(n){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}