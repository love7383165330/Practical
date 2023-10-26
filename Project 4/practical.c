

// Program :- 1

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
{
     for(j=1; j<=i; j++)  //For Column
        
           printf("%d",j);
           printf("\n");

        
}
return 0;

}

/*

Output :-

1
12
123
1234
12345

*/

// Program :- 2

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
{
     for(j=1; j<=6-i; j++)  //For Column
        
           printf("%d", j);
           printf("\n");

        
}
return 0;

}

/*

Output :-

12345
1234 
123  
12   
1   


*/

// Program :- 3

#include <stdio.h>

int main() {
   
   int i, j;
   
    for (i = 1; i <= 5; i++)
	{
        for (j = 5; j >= 6-i; j--)
		{
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*

Output :-

5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 

*/



// Program :- 4

#include <stdio.h>

int main() {
   
   int i, j;
   
    for (i = 1; i <= 5; i++)
	{
        for (j = i; j >= 1; j--)
		{
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
/*

Output :-

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1


*/


// Program :- 5

#include <stdio.h>

int main() {
    

int i, j;

    for ( i = 1; i <= 5; i++) 
	{
        for ( j = 5; j >= i; j--)
		{
           
                printf("%d ", j);
           
        }
        printf("\n");
    }

    return 0;
}


/*

Output :-

5 4 3 2 1 
5 4 3 2
5 4 3
5 4
5


*/

// Program :- 8


#include<stdio.h>

int main()
{

int i, j;

for(i=45; i<50; i++)  // For Row
{
     for(j=45; j<=i; j++)  //For Column
        
           printf("%d",j);
          
           
           printf("\n");

        
}
return 0;

}

/*

Output :-

45
4546
454647
45464748
4546474849


*/

// Program :- 9


#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j<=i; j++)
        {
                printf("%d ", i);
           
        }
        printf("\n");
    }

    return 0;
}

/*

Output :-

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

// Program :- 21

#include <stdio.h>

int main() 
{
    int k=1;
    
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j<=5; j++)
        {
              if(j<=i)
              {
                printf("%d ", k);
                k++;
              }
              else
              {
                  printf(" ");
              }
           
        }
        printf("\n");
    }

    return 0;
}

/*

Output :-

1     
2 3
4 5 6
7 8 9 10
11 12 13 14 15


*/

// Program :- 23

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
{
     for(j=1; j<=i; j++)  //For Column
        {
            if(j%2==0)
            {
                   printf("0");
                
            }
            else
            {
                 printf("1");
            }
        
        }
           printf("\n");

        
}
return 0;

}

/*

Output :-

1
10
101
1010
10101




*/

// Program :- 24

#include<stdio.h>

int main()
{

int i, j, k;

for(i=1; i<=5; i++)  // For Row
      {
            k=5;
            for(j=1; j<=9; j++)  //For Column
            {
       
                   if(j>=6-i && j<=4+i && k)
                    {
                         printf("%d",k);
                         j<5 ? k-- : k++;
                         
                    }
                    else
                     {
                            printf(" ");
           
                  }
     }
          
           printf("\n");

        
}
return 0;

}

/*

Output :- 

    5    
   545   
  54345  
 5432345 
543212345


*/