#include<stdio.h>

int main()

{
   int a = 5;
   int b = 10;
   int c ;

   c = a + b;
   printf("Addition Of a & b is %d\n", c );

	c = a - b;
   printf("Subtraction Of a & b is %d\n", c );

	c = a * b;
   printf("Multiplication Of a & b is %d\n", c );

	c = a / b;
   printf("Division Of a & b is %d\n", c );

	c = a % b;
   printf("Modulo Of a & b is %d\n", c );
	
    c=++a;
    printf("pre increment of a is %d\n", c);

    c=a++;
    printf("post increment of a is %d\n", c);

    c=--b;
    printf("pre decrement of b is %d\n", c);

    c=b--;
    printf("post decrement of b is %d\n", c);

    return 0;
}