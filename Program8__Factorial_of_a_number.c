#include<stdio.h>
int main(){
    int x,i,fact =1;

    printf("Enter a number : ");
    scanf("%d",&x);

    for(i = 1;i<=x;i++){
        fact*=i;

        
    }
    printf("%d",fact);
}