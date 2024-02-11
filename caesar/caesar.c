#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

bool only_digits(string);
char rotate(char, int);

int main(int argc, string argv[])
{


int key;
string pt;




    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");

        return 1;

    }



    if ( only_digits(argv[1]) == false)

    {
        printf("Usage: ./caesar key\n");

        return 1;
    }



    key = atoi(argv[1]);




         pt = get_string("plaintext: ");
         char ct [strlen(pt)];




    for (int i =0; i < strlen(pt); i++)
    {
        ct[i] = rotate (pt[i],key);
    }


        printf("ciphertext: ");

        for ( int i = 0; i < strlen(pt); i++)

        {
            printf("%c",ct[i]);
        }



printf("\n");



}










bool only_digits(string s)

{
    int counter = 0;

    for (int i =0; i < strlen(s); i++)

    {
        if (isdigit(s[i]) == 0)
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









char rotate(char c, int n)

{

    if ( c <= 'Z' && c >= 'A')
    {
        c = c - 'A';

        c = (c+ n) % 26;

        c = c + 'A';


        return c;
    }


    if ( c<= 'z' && c >= 'a')
    {
        c = c - 'a';

        c = (c + n) % 26;

        c = c + 'a';


        return c;
    }

    else
    {
        return c;
    }

}
