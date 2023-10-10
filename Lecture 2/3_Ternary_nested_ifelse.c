# include<stdio.h>

int main()
{

// Find Max. From given 2 No. Using Ternary Operator.


    int A = 5, B = 10, max;
     
    max = (A > B) ? A : B;
     
    printf("Largest number between %d and %d is %d. \n", A, B, max);
 
   


// Find Max. From given 3 No. Using Using nested if else.



    int A1 = 12, B1 = 33, C1 = 15;
 
 
    if (A1 >= B1) {
        if (A1 >= C1)
		{
            printf("%d is the largest number. \n", A1);
		}
        else
		{
            printf("%d is the largest number.\n", C1);
		}
    }
    else {
        if (B1 >= C1)
		{
            printf("%d is the largest number.\n", B1);
		}
        else
		{
            printf("%d is the largest number.\n", C1);
		}
    }
 
 
 
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
			
  // Find Max. From given 5 No. Using Using nested if else.
 
 
     int A3 = 56, B3 = 41, C3 = 80, D3 = 75, E3 = 157;
   
    if (A3 >= B3)
    {
        if(A3 >= C3)
        {
            if( A3 >= D3)
			{
              if( A3 >= E3)
			  {
			  printf("%d is the largest number. \n", A3);
			  }
			  else
			  {
              printf("%d is the largest number. \n", E3);
			  }
			}
            else
			{
              printf("%d is the largest number. \n", D3);
			}
        }
        else
        {
           if(C3 >= D3)
		   {
			  if( C3 >= E3)
			  {
			  printf("%d is the largest number. \n", C3);
			  }
			  else
			  {
              printf("%d is the largest number. \n", E3);
			  }
		   }
           else
			{
              if(D2 >= E2)
		        {
                    printf("%d is the largest number. \n", D2);
		        }
              else
			   {
                     printf("%d is the largest number. \n", E2);
			   }
			}
        }
	}
        else
            if(B3 >= C3)
            {
                if( B3 >= D3)
				{
			        if( B3 >= E3)
			        {
			           printf("%d is the largest number. \n", B3);
			         }
			        else
			        {
                       printf("%d is the largest number. \n", E3);
			        }
				}
			}
			else
			{
               if( C3 >= D3)
				{
			        if( C3 >= E3)
			        {
			           printf("%d is the largest number. \n", C3);
			         }
			        else
			        {
                       printf("%d is the largest number. \n", E3);
			        }
				}   

                else	
				{
					 if(D2 >= E2)
		             {
                    printf("%d is the largest number. \n", D2);
		            }
                    else
			          {
                     printf("%d is the largest number. \n", E2);
			           }
				}					
		    }
			
  

  // Find Max. From given 3 No. Using Ternary Operator.

    int A4 = 25, B4 = 80, C4 = 22, max1;
     
    max1 = (A4 > B4) ? (A4 > C4 ? A4 : C4) : (B4 > C4 ? B4 : C4);
     
    printf("Largest number among %d, %d and %d is %d.\n", A4, B4, C4, max1);
 

 
  // Find Max. From given 4 No. Using Ternary Operator.


    int A5 = 65, B5 = 70, C5 = 35, D5 = 140, max2;
 
    max2 = (A5 > B5 && A5 > C5 && A5 > D5) ? A5 : ((B5 > C5 && B5 > D5) ? B5 : (C5 > D5 ? C5 : D5));
     
    printf("Largest number among %d, %d, %d and %d is %d.\n", A5, B5, C5, D5, max2);


  // Find Max. From given 5 No. Using Ternary Operator.


    int A6 = 5, B6 = 20, C6 = 55, D6 = 5650, E6 =65 , max3;
 
    max3 = (A6 > B6 && A6 > C6 && A6 > D6 && A6 > E6) ? A6 : ((B6 > C6 && B6 > D6 && B6 > E6) ? B6 : (C6 > D6 && C6 > E6) ? C6 : (D6 > E6 ? D6 : E6));
     
    printf("Largest number among %d, %d, %d ,%d and %d is %d.\n", A6, B6, C6, D6, E6, max3);



    return 0;



}
