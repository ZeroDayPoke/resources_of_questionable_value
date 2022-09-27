#include <stdio.h>
#include <unistd.h>

/**
 * main - function to illustrate nested loops
 * Return: 0 - always true
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
		for (j = 0; j < 10; j++)
		{
			sleep(1);
			printf("NOW i=%d & j=%d... ", i, j);
			fflush(stdout);
		}
		printf("NOW THAT i=%d & y=%d, it's time for a new line...\n", i, j);
    }
	return(0);
}
