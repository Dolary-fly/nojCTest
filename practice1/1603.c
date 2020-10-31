#include<stdio.h>

int getYueNum(int n){
    int i,sum;
    sum=0;
    for(i=1;i*i<n;i++){
        if(n%i==0)
            sum+=2;


    }
    if(i*i==n)
        sum++;
    return sum;
}
int main(){
    int i,n;
    i=10;
    scanf("%d",&n);
    while(i<100){
        if(getYueNum(i)==n)
            printf("%d\n",i);
        i++;
    }
}