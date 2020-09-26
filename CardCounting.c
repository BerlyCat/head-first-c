#include <stdio.h>
#include <stdlib.h>

int main () {
    char card_name[3];
    int value = 0;

    puts("Enter card name:");
    scanf("%2s", card_name);

    if (card_name[0] == 'K') {
        value = 10;
    } else if (card_name[0] == 'Q') {
        value = 10;
    } else if (card_name[0] == 'J') {
        value = 10;
    } else if (card_name[0] == 'A') {
        value = 11;
    } else {
        value = atoi(card_name);
    }

    if (value >= 3 && value <= 6) {
        puts("Count has gone up");
    } else if (value == 10) {
        puts("Count has gone down");
    }

    return 0;
}