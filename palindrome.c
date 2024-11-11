#include<stdio.h>
int main(){
    int n,rev=0,remain;
    printf("enter a number:");
    scanf("%d",&n);
    int org=n;
    while(n!=0){
        remain=n%10;
        rev=rev*10+remain;
        n/=10;
    }
    if(org==rev){
        printf("it is a palindrome:%d\n",n);
    }
    else{
        printf("it is not a palindrome:%d\n",n);
    }
    
}