#include<stdio.h>

int main()
{

// Area Of Circle......

float r=5, p=3.14, aoc;

    aoc= p*r*r;
    printf("Area of Circle is %.3f\n", aoc);


// Area Of Square.......

int side=7, aos;

    aos=side*side;
    printf("Area of Square is %d\n", aos);

  


// Area of Rectangle.......

int w=5, h=10, a2;

a2= w*h;
printf("Area of Rectangle is %d\n", a2);




// Area of Triangel.......

float b=20, h1=10, aot;

aot=b*h/2;
printf("Area of Triangel is %f\n", aot);



// Simple Interest......

float P = 1, R = 1, T = 1;
  
    
    float SI = (P * T * R) / 100;
    printf("Simple Interest = %f\n", SI);



// Perimeter of the Circle.....

float pi=3.14, r1=5, poc;

poc= 2*p*r;
printf("Perimeter of the Circle is  %.2f", poc);


  return 0;

}
