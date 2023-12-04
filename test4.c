//Write a program to print the given no in reverse order .
//123-- 321,, 4567 -- 7654.
#include<stdio.h>
int main(){
    int i =1,numl,num;
    printf("Enter how many no. you want to enter : ");
    scanf("%d",&numl);

    while (i<=numl){
        printf("\nEnter %d Numbers :",i);
        
        scanf("%d",&num);

        num+=i;

        i++;
    }
    printf("%d",num);
}