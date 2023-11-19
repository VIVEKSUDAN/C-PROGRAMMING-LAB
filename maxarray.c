#include<stdio.h>
void main(){
    int n ;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n],max=0,ind=0,i;
    printf("Enter the array elements : ");
    for (i = 0;i<n;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
                ind=i;
            }
        }
        printf("the max number is : %d\n",max);
        printf("the index of max element:%d",ind);
}
