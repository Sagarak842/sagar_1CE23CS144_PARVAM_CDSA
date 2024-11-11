#include<stdio.h>
int main(){
    int n,rev=0,remain;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        remain=n%10;
        rev=rev*10+remain;
        n/=10;
    }
    printf("reversed number:%d\n",rev);
    return 0;
}
