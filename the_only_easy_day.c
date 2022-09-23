#include <stdio.h>
#include <time.h>

int main()
{
    time_t t;
    time(&t);

    printf("The only easy day was: %s", ctime(&t));
    return 0;
}
