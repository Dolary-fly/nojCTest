#include<stdio.h>
int main(){
    int i,m,n;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        m=(m-1)*2;
    }
    printf("%d\n",m);
}