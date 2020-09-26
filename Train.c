#include <stdio.h>

int main () {
    int train;
    int winnings = 0;

    scanf("%i", &train);

    switch (train) {
        case 37:
            winnings = winnings + 50;
            break;
        case 65:
            puts("Jackpot!");
            winnings = winnings + 80;
            break;
        case 12:
            winnings = winnings + 20;
            break;
        default:
            winnings = 0;
    }

    return 0;
}