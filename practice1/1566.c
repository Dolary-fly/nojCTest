#include<stdio.h>

int main(){
    int a[20];
    int n,i,minnum;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    minnum=a[0];
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<minnum)
            minnum=a[i];
    }
    printf("%d\n",minnum);
}