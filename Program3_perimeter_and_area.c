// program to calculate the area and perimeter of circle , square and rectangle

#include<stdio.h>


int main(){
    
    float c; // c is radius of circle
    float s; // s is side of the square 
    float l,w;// l is the length and w is the width of the rectangle

    //circle 

    printf("Enter the radius of the circle : ");

    scanf("%f", &c);

    printf("Area of the circle is %.2f\n", 3.14*c*c);
    printf("Perimeter of the circle is %.2f\n", 2*2.14*c);

    //square

    printf("Ente the side of the square : ");

    scanf("%f", &s);

    printf("Area of the square is %.2f\n", s*s);
    printf("Perimeter of the square is %.2f\n", 4*s);

    //rectangle

    printf("Enter the length of the rectangle : ");
    scanf("%f",&l);
    printf("Enter the width of the rectangle :");
    scanf("%f",&w);

    printf("Area of the rectangle is %.2f\n", l*w);
    printf("Perimeter of the rectangle is %.2f\n",2*l+w);

    return 0;



    

}