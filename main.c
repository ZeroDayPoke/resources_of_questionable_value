#include <stdio.h>
#include "header.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("xxicfss", 3, 'B', 3.333, NULL, "test");
    print_all("cccic", 102, 116, 104, 1, 115);
    print_all(NULL);
    return (0);
}
