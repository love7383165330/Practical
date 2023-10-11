#include<stdio.h>

int  main()
{
// practical 1 :

    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
	
	
	
	
// practical 2 :
	
	int A = 20 , result;
     
    result = (A % 2 == 0) ? printf("even") : printf("odd") ;
     
    printf("\n", result);
 
 
 
 
 
 // practical 3 :
 
 
    int a = 114, b = 216, c = 119, d = 210;

   
    if (a >= b)
    {
        if(a >= c)
        {
			
            if( a >= d)
			{
              printf("%d is the largest number. \n", a);
			}
            else
			{
              printf("%d is the largest number. \n", d);
			}
        }
        else
        {
           if(c >= d)
		   {
            printf("%d is the largest number. \n", c);
		   }
           else
			{
           printf("%d is the largest number. \n", d);
			}
        }
	}
        else
            if(b >= c)
            {
                if( b >= d)
				{
                printf("%d is the largest number. \n", b);
				}
				else
				{
	           printf("%d is the largest number. \n", d);

				}
			}
			else
			{
              if(c >= d)
		        {
                    printf("%d is the largest number. \n", c);
		        }
              else
			   {
                     printf("%d is the largest number. \n", d);
			   }
            }



// practical 4 :

char day;

    printf("Enter a day (M/T/W/Th/F/S/Su): ");
    scanf("%c", &day); 

    switch (day) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'Th':
        case 'th':
            printf("Thursday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Saturday\n");
            break;
        case 'Su':
        case 'su':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a valid day.\n");
            break;
    }

// Practical 5 :

    float units, total_bill;
    
    // Prompt the user to enter the electricity units consumed
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units <= 150) {
        total_bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        total_bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        total_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add a 20% surcharge
    total_bill = total_bill + 0.20 * total_bill;

    printf("Total electricity bill: Rs. %.2f\n", total_bill);


return 0;

}





