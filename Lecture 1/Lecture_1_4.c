#include <stdio.h>
int main()
{

// Formula 1...

  float a=10, b=5, x;
  

  printf("%.2f\n ",a);
  printf("%.2f\n",b);

  x = (a * a) + (b * b) + (2 * a * b);

  printf("Ans. = %.2f\n", x);
  

// Formula 2...

float a2=3, b2=6, x2;
  
  printf("%.2f\n ",a2);
  printf("%.2f\n",b2);

  x2 = (a2 * a2) + (b2 * b2) - (2 * a2 * b2);

  printf("Ans. = %.2f\n", x2);

// Formula 3..


 float a3=5, b3=3, x3;
  

  printf("%.2f\n ",a3);
  printf("%.2f\n",b3);

  x3 = (a3 * a3 * a3) + (b3 * b3 * b3) +  3 * (a3 * a3 * b3) + 3*a3*b3*b3;

  printf("Ans. = %.2f\n", x3);

// Formula 4..

 float a4=2, b4=4, x4;
  

  printf("%.2f\n ",a4);
  printf("%.2f\n",b4);

  x4 = (a4 * a4 * a4) -(b4 * b4 * b4) -  3 * (a4 * a4 * b4) + 3*a4*b4*b4;

  printf("Ans. = %.2f\n", x4);

// Formula 5..


float a5=5, b5=6, c5=10, x5;
  

  printf("%.2f\n ",a5);
  printf("%.2f\n",b5);
  printf("%.2f\n",c5);

  x5 = (a5 * a5 * a5 + b5 * b5 * b5 + c5 * c5 * c5) + 3 * a5 * a5 * b5 + 3 * a5 * b5 * b5 + 3 * b5 * b5 * c5 + 3 * b5 * c5 * c5 + 3 * a5 * c5 * c5 + 3 * a5 * a5 * c5 + 6 * a5 * b5 * c5 ;

  printf("Ans. = %.2f\n", x5);


// Formula 6..


float a6=3, b6=4, c6=8, x6;
  

  printf("%.2f\n ",a6);
  printf("%.2f\n",b6);
  printf("%.2f\n",c6);

  x6 = (a6 * a6 * a6 - b6 * b6 * b6 - c6 * c6 * c6) - 3 * a6 * a6 * b6 + 3 * a6 * b6 * b6 - 3 * b6 * b6 * c6 - 3 * b6 * c6 * c6 + 3 * a6 * c6 * c6 - 3 * a6 * a6 * c6 + 6 * a6 * b6 * c6 ;

  printf("Ans. = %.2f\n", x6);


// Formula 7..


float a7=10, b7=2, c7=5, x7;
  

  printf("%.2f\n ",a7);
  printf("%.2f\n",b7);
  printf("%.2f\n",c7);

  x7 = a7 * a7 + b7 * b7 + c7 * c7 + 2 * a7 * b7 + 2 * b7 * c7 + 2 * a7 * c7;

  printf("Ans. = %.2f\n", x7);




  return 0;
}