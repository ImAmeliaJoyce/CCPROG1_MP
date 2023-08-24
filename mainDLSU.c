//<Preprocessor directives>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#include "funcGamePlay.c"


int main(void) {
    /* Variables */
    int nNumPlayers = 0;
    int i = 0;

    char cResponse;
    bool bPlayAgain = false;

    do {
        displayHeader();

        bPlayAgain = wantPlayAgain();

    }while(bPlayAgain);

    printf("\n\nHope you enjoyed Doggos, Ladders, Slides and U-turns!\nThank you for playing! :)");

    return 0;
}