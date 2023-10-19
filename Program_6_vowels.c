#include<stdio.h>
int main(){
    char x;
    printf("Enter a character : ");
    scanf("%d",&x);

    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        
        printf("its vowel !!");
    }
    else{
        printf("Its a consonent !!");
        
    }
    return 0;
}