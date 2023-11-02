#include<stdio.h>
int main(){
    int i,x;
    int fno=0,sno=1,next;

    printf("Enter number upto which you want to print the fibinachi series : ");
    scanf("%d",&x);

    for (i = 0; i<=x;i++){

        printf("%d\n",fno);
        
        next = fno+sno;
        
        fno=sno;
        sno=next;
    }
}