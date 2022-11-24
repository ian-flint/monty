#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int g1Count = 0;
    int g2Count = 0;
    srand(time(NULL));
    for (int ix = 0; ix < 10000000; ix ++) {
        int car = rand() % 3 + 1;
        if (car == 1) {
            g1Count ++;
        } else {
            g2Count ++;
        }
    }
    printf ("Guess 1 count: %d\n", g1Count);
    printf ("Guess 2 count: %d\n", g2Count);
}
