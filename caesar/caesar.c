#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

bool only_digits(string s);

int main(int argc, string argv[])
{

// Make sure program was run with just one command-line argument

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");

        return 1;

    }

    // Make sure every character in argv[1] is a digit
    if (bool only_digits(argv[1]) == false)

    {
        printf("Usage: ./caesar key\n");

        return 1;
    }


    // Convert argv[1] from a `string` to an `int`



    

    // Prompt user for plaintext

    // For each character in the plaintext:

        // Rotate the character if it's a letter
}


bool only_digits(string s)

{
    int counter = 0;

    for (int i =0; i < strlen(s); i++)

    {
        if (isdigit(s[i]) != 1)
        {
            counter++;
        }

    }

    if (counter != 0)
    {
        return false;
    }

    return true;

}
