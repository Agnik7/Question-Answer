#include<stdio.h>
int main(){
    for(int i=10;i<=100;i++){
        if((i/10)%3==1){
            printf("%d\n",i);
        }
    }
    return 0;
}