
// Program :- 1

#include <stdio.h>

long factorial(int n);

int main()
 {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid numbers , please try again.\n");
    } 
    else 
    {
        unsigned long long result = factorial(num);
        printf("The factorial of %d is %llu\n", num, result);
    }

    return 0;
}

 long factorial(int n) {
    if (n == 0 || n == 1) 
    {
        return 1; 
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

/*

Output :-

Enter a positive integer: 5
The factorial of 5 is 120

*/

// Program :- 2

#include <stdio.h>

int sumOfArray(int a[], int s, int i);

int main()
{
    int a[] = {31, 24, 8, 10, 4};
    int s = sizeof(a) / sizeof(a[0]);

    int sum = sumOfArray(a, s, 0);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}

int sumOfArray(int a[], int s, int i) 
{
    if (i >= s)
    {
        return 0;  
    } 
    else 
    {
        return a[i] + sumOfArray(a, s, i + 1);
    }
}


/*

Output :-

Sum of array elements: 77

*/

// Program :- 3

#include <stdio.h>

char length(char a[], char size, char index);

int main()
{
  char a[] = "Hello";

    char size = sizeof(a) / sizeof(a[0]);

    char l = length(a, size, 0);

    printf("length of string : %d\n", l);

    return 0;
}

char length(char a[], char size, char index) 
{
    if (index >= size)
    {
        return 0;  
    } 
    else 
    {
        return printf("Hello");
    } 
}


/*

Output :-

Hellolength of string : 5


*/