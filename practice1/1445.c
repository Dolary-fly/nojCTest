#include<stdio.h>
int main(){
    int n,sum,i;
    int a[20];
    sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d\n",sum);
}