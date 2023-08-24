
/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(const char *str)
{
        int i, j;
        char *ptr;

        if (str == NULL)
                return (NULL);

        for (i = 0; str[i] != '\0'; i++)
        {
                count++;
        }

        ptr = malloc(sizeof(char) * ccount + 1);

        if (ptr == NULL)
                return (NULL);

        for(j = 0; str[j] != '\0'; j++)
        {
                ptr[j] = str[j]; /* copy contents of str into ptr */
        }
        ptr[j] = '\0'; /* terminate with a null byte */
        return
