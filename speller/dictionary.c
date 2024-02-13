// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>


#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 6000;

// number of nodes counter.
int counter = 0;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO

    char cpy[LENGTH + 1];
    strcpy(cpy,word);

    node *cursor = table[hash(cpy)];



            while ( cursor != NULL)
        {
            if (strcasecmp(cursor -> word,cpy)==0)
            {

                return true;

            }

            else
            {
                cursor = cursor -> next;
            }

        }


            return false;


}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int sum = 0;

    // TODO: Improve this hash function
    for (int i =0; i < strlen(word); i++)
    {
        sum = sum + word[i] ;
    }
    return sum;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    char word[LENGTH+1];
    FILE *fp1 = fopen(dictionary,"r");
    if (fp1 == NULL)
    {
        printf("fp1 invalid");
        return false;
    }


    while ((fscanf(fp1,"%s",word)) != EOF)
    {
    
    counter++;
    fscanf(fp1,"%s",word);

    node *n = malloc(sizeof(node));

    if( n == NULL)
    {
        printf("malloc coulndt allocate memory\n");
        return false;
    }

    strcpy(n->word,word);

    node *temp = table[hash(word)];

        if (temp == NULL)
        {
            table[hash(word)] = n;

        }

        else
        {
            n->next = table[hash(word)];

            table[hash(word)] = n;

        }


    }
    fclose(fp1);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return counter;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i =0; i < N; i++)
    {
    node *cursor = table[i];

    node *temp = cursor;

    while (cursor != NULL)

    {
        cursor = cursor -> next;

        free(temp);

        temp = cursor;

    }





    }
    return true;
}
