#include<stdio.h>

int main()
{

// With Using Third Variable......

int a=5, b=10, c;

printf("before swaping : a = %d, b= %d\n",a,b);

c=a;
a=b;
b=c;

printf ("after swaping : a=%d, b=%d\n", a,b);


// without Using Third Variable......

int p=50, q=100;


printf ("before swaping : p = %d, q=%d\n", p,q);

p=p+q;
q=p-q;
p=p-q;

printf("after swaping : p=%d, q=%d", p,q);


return 0;

}