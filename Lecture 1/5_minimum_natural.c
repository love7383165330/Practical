#include <stdio.h>

int main()
{
	
// Minimum Number 	
	
int a= 15 , b = 10 ;

if(a<b)
{
	printf("a is Smaller-then b");
}
else
{
	printf("b is Greater-then a");
}


// Natural Number 


int c;

printf("Enter The Number :");
scanf("%d",&c);

if (c < 0)
{
printf("%d is Not Natural Number",c);
}
else if(a == 0)
{
printf("%d is Not Natural Number",c);
}
else
{
printf("%d is Natural Number",c);
}

return 0;

}