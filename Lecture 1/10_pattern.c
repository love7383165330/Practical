// Program :- 1


#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; ++i)  // For Row
{
     for(j=1; j<=5; ++j)  //For Column
        
           printf("*");
           printf("\n");

        
}
return 0;

}

/*

output :-

*****
*****
*****
*****
*****



*/



// Program :- 2

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
{
     for(j=1; j<=i; j++)  //For Column
        
           printf("*");
           printf("\n");

        
}
return 0;

}

/*

Output:-

*
**
***
****
*****



*/


// Program :- 3

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

output :-

1
12
123
1234
12345




*/

// Program :- 4


#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
{
     for(j=1; j<=6-i; j++)  //For Column
        
           printf("*");
           printf("\n");

        
}
return 0;

}




/*

Output :-

*****
****
***
**
*

*/


// Program :- 5

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
      {
     for(j=1; j<=9; j++)  //For Column
     {
         
          if(j>=6-i && j<=4+i)
          {
               printf("*");
             
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

output :- 

    *    
   ***   
  *****  
 ******* 
*********


*/



// Program :- 6

#include<stdio.h>

int main()
{

int i, j, k=1;

for(i=1; i<=5; i++)  // For Row
      {
     for(j=1; j<=9; j++)  //For Column
     {
          if(j>=6-i && j<=4+i && k)
          {
               printf("*");
               k=0;
          }
          else
          {
              printf(" ");
              k=1;
          }
     }
          
           printf("\n");

        
}
return 0;

}



/*

Output :-

    *    
   * *   
  * * *  
 * * * * 
* * * * *


*/


// Program :- 7

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
      {
     for(j=1; j<=9; j++)  //For Column
     {
          if(j<=6-i || j>=4+i )
          {
               printf("*");
            
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

*********
**** ****
***   ***
**     **
*       *


*/


// Program :- 8

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=4; i++)  // For Row
      {
     for(j=1; j<=7; j++)  //For Column
     {
         int k=1;
          if(j>=5-i && j<=3+i && k)
          {
               printf("%d",k);
               
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
  111  
 11111 
1111111

*/


// Program :- 9

#include<stdio.h>

int main()
{

int i, j, k;

for(i=1; i<=4; i++)  // For Row
      {
            k=1;
            for(j=1; j<=7; j++)  //For Column
            {
       
                   if(j>=5-i && j<=3+i && k)
                    {
                         printf("%d",k);
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
   123
  12345
 1234567   
   


*/

// Program :- 10

#include<stdio.h>

int main()
{

int i, j, k;

for(i=1; i<=4; i++)  // For Row
      {
            k=1;
            for(j=1; j<=7; j++)  //For Column
            {
       
                   if(j>=5-i && j<=3+i && k)
                    {
                         printf("%d",k);
                         j<4 ? k++ : k--;
                         
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
  121
 12321
1234321



*/

// Program :- 11

#include<stdio.h>

int main()
{

int i, j;
char k;
for(i=1; i<=4; i++)  // For Row
      {
            k='A';
         for(j=1; j<=7; j++)  //For Column
         {
              if(j<=5-i || j>=3+i)
              {
                  printf("%c",k);
            
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

AAAAAAA
AAA AAA
AA   AA
A     A




*/

// Program :- 12



#include<stdio.h>

int main()
{

int i, j;
char k;
for(i=1; i<=4; i++)  // For Row
      {
            k='A';
         for(j=1; j<=7; j++)  //For Column
         {
              if(j<=5-i || j>=3+i)
              {
                  printf("%c",k);
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

output :-
 
ABCDEFG
ABC DEF
AB   CD
A     B




*/


// Program :- 13

#include<stdio.h>

int main()
{

int i, j;
char k;
for(i=1; i<=4; i++)  // For Row
      {
          k='A';
         for(j=1; j<=7; j++)  //For Column
         {
              if(j<=5-i || j>=3+i )
              {
                  printf("%c",k);
                  j<4 ? k++ : k--;
            
              }
              else
               {
                   printf(" ");
                   if(j==4)
                   k--;
               }
         }
          
           printf("\n");

        
}
return 0;

}

/*

Output :-


ABCDCBA
ABC CBA
AB   BA
A     A




*/

// Program :- 14


#include<stdio.h>

int main()
{

int i, j;
int k;
for(i=1; i<=7; i++)  // For Row
      {
          i<=4 ? k++ : k--;
          
         for(j=1; j<=4; j++)  //For Column
         {
              if(j<= k)
              {
                  printf("*");
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

*   
**  
*** 
****
*** 
**  
*   




*/


// Program :- 15

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=4; i++)  // For Row
      {
        
            for(j=1; j<=7; j++)  //For Column
            {
       
                   if(j>=i && j<=8-i )
                    {
                         printf("*");
                        
                         
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

*******
 ***** 
  ***  
   *   


*/

// Program :- 16

#include<stdio.h>

int main()
{

int i, j, n;

printf("Enter The Numner of Row" );
scanf("%d",&n);



for(i=1; i<=n; i++)  // For Row
      {
        
            for(j=1; j<=2*n-1; j++)  //For Column
            {
       
                   if(j>=i && j<=8-i )
                    {
                         printf("*");
                        
                         
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

Enter The Numner of Row 5

*******  
 *****   
  ***    
   *     




*/

// Program :- 17

#include<stdio.h>

int main()
{

int i, j,  k=0;

for(i=1; i<=9; i++)  // For Row
{

     i<=5 ? k++ : k--;
     for(j=1; j<=9; j++)  //For Column
     {
          if(j<=6-k || j>=4+k )
          {
               printf("*");
           
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

Output:- 

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********



*/

// Program :- 18

#include<stdio.h>

int main()
{

int i, j,  k=0;

for(i=1; i<=7; i++)  // For Row
{
    i<=4 ? k++: k-- ;
     for(j=1; j<=7; j++)  //For Column
     {
          if(j>=5-k && j<=3+k )
          {
               printf("*");
               
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

   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   *   


*/


// Program :- 19

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

5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 
*/

// Program :- 20

#include <stdio.h>

int main() {
   

    
    for (int i = 1; i <= 5; i++) {
        // Inner loop for each number in the row
        for (int j = 5; j >= i; j--) {
            printf("%d ", i);  // Print the value of 'j' in the current row
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

/*

1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 
*/

// Program :- 21


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

output :-

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

// Program :- 22

#include <stdio.h>

int main() {
    

int i, j;

    for ( i = 1; i <= 5; i++) 
	{
        for ( j = 5; j >= 6-i; j--)
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


// 	Program :- 23

#include <stdio.h>

int main() {
    
int i, j;

    for ( i = 1; i <= 5; i++) 
	{
        for ( j = 6-i; j <=5; j++)
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
4 5 
3 4 5 
2 3 4 5 
1 2 3 4 5 

*/

// Program :- 24

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
                   printf("1");
                
            }
            else
            {
                 printf("0");
            }
        
        }
           printf("\n");

        
}
return 0;

}

/*

Output :-

0
01
010
0101
01010


*/

// Program :- 25

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

// Program :- 26

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
{
     for(j=1; j<=6-i; j++)  //For Column
     
        {
            if(j%2==0)
            {
                printf("1");
            }
           else
           {
                printf("0");
               
           }
          
        }
           printf("\n");

        
}
return 0;

}

/*

01010
0101
010
01
0

*/

// Program :- 27

#include<stdio.h>

int main()
{

int i, j;

for(i=1; i<=5; i++)  // For Row
{
     for(j=1; j<=6-i; j++)  //For Column
     
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

10101
1010
101
10
1

*/

// Program :- 28

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
                   printf("|");
                
            }
            else
            {
                 printf("-");
            }
        
        }
           printf("\n");

        
}
return 0;

}

/*


Output :-

-
-|
-|-
-|-|
-|-|-


*/

// Program :- 29


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

// Program :- 30

#include <stdio.h>

int main() 
{
    char k='A';
    
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j<=5; j++)
        {
              if(j<=i)
              {
                printf("%c ", k);
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

A     
B C    
D E F   
G H I J  
K L M N O 

*/
