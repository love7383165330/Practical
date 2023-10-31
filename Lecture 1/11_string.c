

// Program :- 1

#include <stdio.h>
#include <ctype.h>    // The ctype.h header file declares various functions to classify and transform characters

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (isalpha(character)) {
        char lowercase = tolower(character);
        printf("The lowercase of '%c' is '%c'.\n", character, lowercase);
    } else {
        printf("Please enter a valid alphabetic character.\n");
    }

    return 0;
}

/*

Output :-

Enter a character: A
The lowercase of 'A' is 'a'.


*/

// Program :- 2

#include <stdio.h>
#include <ctype.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (isalpha(character)) {
        char uppercase = toupper(character);
        printf("The lowercase of '%c' is '%c'.\n", character, uppercase);
    } else {
        printf("Please enter a valid alphabetic character.\n");
    }

    return 0;
}

/*

Output :-

Enter a character: a
The lowercase of 'a' is 'A'.


*/



// Program :- 3  

#include <stdio.h>
#include <ctype.h>


int main() {
	
	// Using tolower() Function..
	
	
    char s[100]; 
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isalpha(s[i]) && toupper(s[i])) 
        {
            s[i] = tolower(s[i]);
        }
    }

    printf("The string in lowercase: %s", s);

    return 0;
}


/*

Output:-

Enter a string: ABCD
The string in lowercase: abcd


*/


// Program :- 4


#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100]; 
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isalpha(s[i]) && tolower(s[i])) 
        {
            s[i] = toupper(s[i]);
        }
    }

    printf("The string in lowercase: %s", s);

    return 0;
}

/*

Output :-

Enter a string: abcd
The string in lowercase: ABCD


*/

// Program :- 5

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i;

  printf("Enter a string: ");
  gets(str);

 
  str[0] = toupper(str[0]);

  for (i = 1; i < strlen(str); i++)
  {
    if (str[i] == ' ') {
      str[i + 1] = toupper(str[i + 1]);
    }
  }

  printf("The string in title case is: %s\n", str);

  return 0;
}


/*

Output :-

Enter a string: abcd
The string in title case is: Abcd

*/

// Program :- 6

#include <stdio.h>

int main()
{
    char str[1000];

    
    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s\n", str);

     int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = toupper(str[i]);

        }
        else if(str[i]>='A' && str[i]<='Z')
        {
           str[i] = tolower(str[i]);
        }
		else
		{
			printf("Enter Valid String");
		}


        i++;
    }
    printf("String after toggling case: %s", str);

    return 0;
}


/*

Output :-

Enter any string: bdbdDSVSD
String before toggling case: bdbdDSVSD
String after toggling case: BDBDdsvsd

*/