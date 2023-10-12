#include <stdio.h>

int main()
{
	

//************ Minimum Number ************	
	
int a= 1 , b = 10 ;

if(a<b)
{
	printf("a is Smaller");
}
else
{
	printf("b is Smaller");
}

//Output :-   a is smalller


//************ Natural Number ************	

int c;

printf("Enter The Number :");
scanf("%d",&c);

if (c < 0)
{
printf("%d is Not Natural Number",c);
}
else if(c == 0)
{
printf("%d is Not Natural Number",c);
}
else
{
printf("%d is Natural Number",c);
}


// Output :- 

// Enter The Number :50
// 50 is Natural Number

return 0;

}