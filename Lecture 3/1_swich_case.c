#include<stdio.h>

int main()

{

// create telecom call service conversation scenario using nested switch case.

  int call_for;
	
	
    printf("\n Call For : ");
    printf("\n 1. Purchasing new Product  ");
    printf("\n 2. Returning purchased Product ");
    printf("\n 3. Cancelling the Order ");
    printf("\n 4. Other Help  ");
    printf("\n select the Number : ");
    scanf("%d",&call_for);
	
    switch(call_for)
    {
        case 1: printf(" dial + 1234567891  number for purchasing new product \n");
                break;
        case 2: printf("dial + 5214897631  number for Returening purchased product \n");
                break;
        case 3: printf("dial + 7954123684  number for Cancle the product \n");
                break; 
	    case 4: printf("dial + 3456951278  number for Other Help \n");
                break;
      
        default : printf("invalid number \n ");
		
    }




   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   
   
   

// Print Month Name using Switch Case

    int month;
	
    printf("\n enter the month number : ");
    scanf("%d",&month);
	
    switch(month)
    {
        case 1: printf("January");
                break;
        case 2: printf("February");
                break;
        case 3: printf("March");
                break;
        case 4: printf("April");
                break;
        case 5: printf("May");
                break;
        case 6: printf("June");
                break;
        case 7: printf("July");
                break;
        case 8: printf("August");
                break;
        case 9: printf("September");
                break;
        case 10: printf("October");
                break;
        case 11: printf("November");
                break;
        case 12: printf("December");
                break;
        default : printf("invalid number");
    }


}


