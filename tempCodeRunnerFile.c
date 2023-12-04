#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    
    printf("%c\n",ch);
    
    char s[100];
    scanf("\n");
    scanf("%[^\n]%*c",s);
    scanf("\n");
    
    printf("%s\n",s);
    
    printf("Welcome To C!!");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
