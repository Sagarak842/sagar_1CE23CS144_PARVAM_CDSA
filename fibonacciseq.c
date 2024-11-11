#include<stdio.h>
int main()
{
    int n,f=0,s=1,next;
    printf("enter a number:");
    scanf("%d",&n);
    printf("fibonacci series:");
    for(int i=1;i<=n;i++){
        printf("%d\t",f);//0 1 1 2 3
        next=f+s;//5
        f=s;//3
        s=next;//5
    }
    return 0;
}