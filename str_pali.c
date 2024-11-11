#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "rar";
    int start = 0;
    int end = strlen(str)-1;
    char temp;
     char org[20];
     strcpy(org,str);
    while(start < end){
    temp = str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;

}
printf("reversed string:%s\n",str);
if(strcmp(org,str)==0){
    printf("it is palindrome\n ");
}
else{printf("it is not a palindrome \n");
}

return 0;
}