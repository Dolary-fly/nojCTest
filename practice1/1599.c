#include<stdio.h>

int w[1001],v[1001];
int dp[1001][1001];
int main(){
    int n,c,i,j,k;
    scanf("%d %d",&n,&c);
    for(i=1;i<=n;i++){
        scanf("%d",&w[i]);//n种物品的重量
    }
    for(i=1;i<=n;i++){
        scanf("%d",&v[i]);//n种物品的价值
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=c;j++){
            for(k=0;k*w[i]<=j;k++){
                if(dp[i][j]<dp[i-1][j-k*w[i]]+k*v[i])
                    dp[i][j]=dp[i-1][j-k*w[i]]+k*v[i];
            }
        }
    }
    printf("%d\n",dp[n][c]);

}