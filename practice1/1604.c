#include<stdio.h>
int main(){
    int i;
    for(i=1;i<105;i++){
        if((i%3==2)&&(i%5==1)&&(i%7==4))
            printf("%d\n",i);
        else{
            continue;
        }

    }
}