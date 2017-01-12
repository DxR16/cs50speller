/**
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>

#include "dictionary.h"

// define recursive node structure
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word)
{
    // TODO
    return false;
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    // TODO
    FILE* ptr1 = fopen(*dictionary, "r");
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    while (fscanf(*dictionary, "%s", word) != EOF)
    {
        // TODO
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            unload();
            return false;
        }
        // create linked list
        node *hashtable[50] = malloc(sizeof(node));
        node *node2 = malloc(sizeof(node));
        strcpy(node1->word, "Hello");
        strcpy(node2->word, "World");
        node1->next = node2;    
    }
    
    return 0;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    free;
}
