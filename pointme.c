#include <stdio.h>

/**
 * *_strncpy - copy src to dest w/ n limit
 * @dest: where for to put string cpy
 * @src: where string comes from
 * @n: limit of copy
 * Return: cpyd string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
        a++;
    }
    for (; a < n; a++)
    {
        *dest = '\0';
        dest++;
    }
    return (dest -= a);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
