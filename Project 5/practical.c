
// Program :- 2

#include <stdio.h>
#include <string.h>

int main()
 {

    char str[10000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int pd = 1, i; 
    
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            pd= 0; 
            break;
        }
    }

    if (pd)
    {
        printf("This String is palindrome.\n");
    } 

    else 
    {
        printf("This String is Not palindrome.\n");
    }

    return 0;

}

/*

Output :-

Enter a string: HiiH
This String is palindrome.

*/

// Program :- 3

#include <stdio.h>
#include <string.h>

int main()
 {
    char str[1000];

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ') 
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0'; 

    printf("New string: %s\n", str);

    return 0;
}


/*

Output :-

Enter a string: Hello Good Morning
New string: HelloGoodMorning

*/


// Program :- 4 

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
  


    printf("New String: %s\n", str);

    return 0;
}

/*

Output :-



*/