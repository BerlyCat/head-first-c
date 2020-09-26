#include <stdio.h>

int main ()
{
    int desks;
    puts("Enter a number of desks");
    scanf("%i", &desks);
    if (desks < 1)
    {
        puts("That is not a valid number of desks");
        return 1;
    }
    printf("There are %i cards\n", (desks * 52));
    return 0;
}