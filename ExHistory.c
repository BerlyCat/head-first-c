#include <stdio.h>

int main ()
{
    /* Assume name shorter than 20 chars. */
    char ex[20];
    puts("Enter girlfriend's name: ");
    scanf("%19s", ex);
    printf("\n");
    printf("Dear %s.\n\n\tYou're history.\n", ex);
    return 0;
}