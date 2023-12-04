//Write a program to print 1 -20 numbers by skipping the even numbers.
//1 3 5 7 9 11 13 15 17 19.
#include<stdio.h>
int main(){

    int i = 1 ;
    while(i<=20){
        
        printf("%d\n",i);

        i+=2;
    }

}