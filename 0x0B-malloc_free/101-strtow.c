#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - count number of words in a string
 * @str: The input string.
 * Return: words count
 */
int count_words(char *str)
{
    int c, words_count = 0, str_length = strlen(str);

    for (c = 0; c < str_length; c++)
    {
        if (isspace(str[c]))
        {
            words_count++;
        }
    }

    return words_count;
}

/**
 * allocate_memory - allocates memory for the array.
 * @words_count: number of words.
 * @str_length: total length of a string.
 * Return: pointer to the allocated memory.
 */
char **allocate_memory(int words_count, int str_length)
{
    char **array;
    int w, i;

    array = (char **)malloc(sizeof(char *) * (words_count + 1));

    if (array == NULL)
    {
        return NULL;
    }

    for (w = 0; w < words_count; w++)
    {
        array[w] = (char *)malloc(sizeof(char) * (str_length + 1));

        if (array[w] == NULL)
        {
            for (i = 0; i < w; i++)
            {
                free(array[i]);
            }

            free(array);

            return NULL;
        }
    }

    array[words_count] = NULL;

    return array;
}

/**
 * extract_words - extracts words from a string and put them in an array.
 * @str: string.
 * @array: an array to put the words.
 * @words_count: words count
 */
void extract_words(char *str, char **array, int words_count)
{
    int w_c_index = 0, c = 0, w;

    for (w = 0; w < words_count; w++)
    {
        while (isspace(str[c]))
        {
            c++;
        }

        for (; str[c] != '\0' && !isspace(str[c]); c++)
        {
            array[w][w_c_index] = str[c];
            w_c_index++;
        }

        array[w][w_c_index] = '\0';
        w_c_index = 0;
    }
}

/**
 * strtow - divide a string into words.
 * @str: string
 * Return: pointer to the array of words.
 */
char **strtow(char *str)
{
    char **array;
    int words_count = 0, str_length;

    if (str == NULL || str[0] == '\0')
    {
        array = NULL;
    }
    else
    {
        str_length = strlen(str);
        words_count = count_words(str);

        array = allocate_memory(words_count, str_length);

        if (array != NULL)
        {
            extract_words(str, array, words_count);
        }
    }

    return array;
}
