
// Program :- 1

#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int letter = 0;
    int digit = 0;
    int special = 0;

    printf("Enter a password: ");
    scanf("%s", password);

    int length = strlen(password);

    if (length < 6) {
        printf("Password must be at least 6 characters.\n");
    } else {
        for (int i = 0; i < length; i++) {
            char ch = password[i];
            if (isalpha(ch)) {
                letter = 1;
            } else if (isdigit(ch)) {
                digit = 1;
            } else if (!isalnum(ch)) {
                special = 1;
            }
        }

        if (letter && digit && special)
        {
            printf("Valid password\n");
        }
        else 
        {
            printf("Invalid password. Password must contain at least one letter, one digit, and one special symbol.\n");
        }
    }

    return 0;
}

/*

Output :-

Enter a password: abc@123
Valid password

*/



// Program :- 2

#include <stdio.h>
#include <string.h>

int main() {
 
    char correctEmail[] = "example@email.com";
    char correctPassword[] = "password123";

    char enteredEmail[100];
    char enteredPassword[100];

    printf("Enter your email: ");
    scanf("%s", enteredEmail);

    printf("Enter your password: ");
    scanf("%s", enteredPassword);

   
    if (strcmp(enteredEmail, correctEmail) == 0 && strcmp(enteredPassword, correctPassword) == 0) 
    {
        printf("Login successful. Welcome, %s!\n", enteredEmail);
    }
    else 
    {
        printf("Login failed. Incorrect email or password.\n");
    }

    return 0;
}

/*

Output :-

Enter your email: example@email.com
Enter your password: password123
Login successful. Welcome, example@email.com!


*/