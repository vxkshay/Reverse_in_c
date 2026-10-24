#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    int rem;
    while(x>0){
        rem=x%10;
        printf("%d",rem);
        x=x/10;
    }
    return 0;
}