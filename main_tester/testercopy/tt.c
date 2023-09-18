#include "shell.h"

size_t _token_counter(const char *str, char *delim)
{
    size_t count = 0;
    int inside_token = 0;  // Flag to track whether we're inside a token

    if (str == NULL || delim == NULL)
        return 0;

    while (*str != '\0')
    {
        // Check if the current character is a delimiter
        if (strchr(delim, *str) != NULL)
        {
            inside_token = 0;  // We're not inside a token anymore
        }
        else if (!inside_token)
        {
            // We've found the start of a new token
            inside_token = 1;
            count++;
        }

        str++;
    }

    return count;
}

