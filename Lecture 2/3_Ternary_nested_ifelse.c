# include<stdio.h>

int main()
{

// Find Max. From given 2 No. Using Ternary Operator.


    int A = 5, B = 10, max;
     
    max = (A > B) ? A : B;
     
    printf("Largest number between %d and %d is %d. \n", A, B, max);
 
   // Output :- Largest number between 5 and 10 is 10. 



// Find Min. From given 3 No. Using Using nested if else.


 int A1 = 512, B1 = 33, C1 = 15;
 
 
    if (A1 <= B1) 
	{
        if (A1 <= C1)
		{
            printf("%d is the Smallest number. \n", A1);
		}
        else
		{
            printf("%d is the Smallest number.\n", C1);
		}
    }
    else
	{
        if (B1 <= C1)
		{
            printf("%d is the Smallest number.\n", B1);
		}
        else
		{
            printf("%d is the Smallest number.\n", C1);
		}
    }
	
	//Output :- 15 is the Smallest number
 
 
 // Find Max. From given 4 No. Using Using nested if else.
 
 
      int A2 = 56, B2 = 41, C2 = 80, D2 = 75;
   
    if (A2 >= B2)
    {
        if(A2 >= C2)
        {
			
            if( A2 >= D2)
			{
              printf("%d is the largest number. \n", A2);
			}
            else
			{
              printf("%d is the largest number. \n", D2);
			}
        }
        else
        {
           if(C2 >= D2)
		   {
            printf("%d is the largest number. \n", C2);
		   }
           else
			{
           printf("%d is the largest number. \n", D2);
			}
        }
	}
        else
            if(B2 >= C2)
            {
                if( B2 >= D2)
				{
                printf("%d is the largest number. \n", B2);
				}
				else
				{
	           printf("%d is the largest number. \n", D2);

				}
			}
			else
			{
              if(C2 >= D2)
		        {
                    printf("%d is the largest number. \n", C2);
		        }
              else
			   {
                     printf("%d is the largest number. \n", D2);
			   }
            }
			
			
			// Output :- 80 is the largest number. 
			
  // Find Min. From given 5 No. Using Using nested if else.
 

  
     int A3 = 55, B3 = 90, C3 = 70, D3 = 5, E3 = 10;
   
    if (A3 <= B3)
    {
        if(A3 <= C3)
        {
            if( A3 <= D3)
			{
              if( A3 <= E3)
			  {
			  printf("%d is the Smallest number. \n", A3);
			  }
			  else
			  {
              printf("%d is the Smallest number. \n", E3);
			  }
			}
            else
			{
			    if(D3<= E3)
			    {
                     printf("%d is the Smallest number. \n", D3);
			    }
			    else
			    {
			         printf("%d is the Smallest number. \n", E3);
			    }
			}
        }
        else
        {
           if(C3 <= D3)
		   {
			  if( C3 <= E3)
			  {
			  printf("%d is the Smallest number. \n", C3);
			  }
			  else
			  {
              printf("%d is the Smallest number. \n", E3);
			  }
		   }
           else
			{
              if(D3 <= E3)
		        {
                    printf("%d is the Smallest number. \n", D3);
		        }
              else
			   {
                     printf("%d is the Smallest number. \n", E3);
			   }
			}
        }
	}
        else
            if(B3 <= C3)
            {
                if( B3 <= D3)
				{
			        if( B3 <= E3)
			        {
			           printf("%d is the Smallest number. \n", B3);
			         }
			        else
			        {
                       printf("%d is the Smallest number. \n", E3);
			        }
				}
			        else 
			        {
			          if(D3 <= E3)
		               {
                    printf("%d is the Smallest number. \n", D3);
		                   }
                         else
                            {
                     printf("%d is the Smallest number. \n", E3);
			             }
			        }
				
			}
			else
			{
               if( C3 <= D3)
				{
			        if( C3 <= E3)
			        {
			           printf("%d is the Smallest number. \n", C3);
			         }
			        else
			        {
                       printf("%d is the Smallest number. \n", E3);
			        }
				}   

                else	
				{
					 if(D3 <= E3)
		             {
                        printf("%d is the Smallest number. \n", D3);
		             }
                    else
			          {
                         printf("%d is the Smallest number. \n", E3);
			          }
				}					
		    }
			
			
			// Output :- 5 is the Smallest number. 
  




  // Find Max. From given 3 No. Using Ternary Operator.

    int A4 = 25, B4 = 80, C4 = 22, max1;
     
    max1 = (A4 > B4) ? (A4 > C4 ? A4 : C4) : (B4 > C4 ? B4 : C4);
     
    printf("Largest number among %d, %d and %d is %d.\n", A4, B4, C4, max1);
 
    // output:- Largest number among 25, 80 and 22 is 80.




 
  // Find Max. From given 4 No. Using Ternary Operator.


    int A5 = 65, B5 = 70, C5 = 35, D5 = 140, max2;
 
    max2 = (A5 > B5 && A5 > C5 && A5 > D5) ? A5 : ((B5 > C5 && B5 > D5) ? B5 : (C5 > D5 ? C5 : D5));
     
    printf("Largest number among %d, %d, %d and %d is %d.\n", A5, B5, C5, D5, max2);

// output :- Largest number among 65, 70, 35 and 140 is 140.






  // Find Max. From given 5 No. Using Ternary Operator.


    int A6 = 5, B6 = 20, C6 = 55, D6 = 5650, E6 =65 , max3;
 
    max3 = (A6 > B6 && A6 > C6 && A6 > D6 && A6 > E6) ? A6 : ((B6 > C6 && B6 > D6 && B6 > E6) ? B6 : (C6 > D6 && C6 > E6) ? C6 : (D6 > E6 ? D6 : E6));
     
    printf("Largest number among %d, %d, %d ,%d and %d is %d.\n", A6, B6, C6, D6, E6, max3);

// output :-Largest number among 5, 20, 55 ,5650 and 65 is 5650.

    return 0;



}
