// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
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

    int eofreader = 0;

    while (eofreader != EOF)
    {
    fscanf(fp1,"%d",&eofreader);

    fscanf(fp1,"%s",word);

    node *n = malloc(sizeof(node));

    if( n == NULL)
    {
        return false;
    }

    strcpy(word,n->word);

    n -> next = table[hash(word)];
    table[hash(word)] = n;
    free(n);
    }
    fclose(fp1);
    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
