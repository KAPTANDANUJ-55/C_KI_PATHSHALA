#include <stdio.h>

int main() {

    // FOR LOOP — Java jaisa
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    // Note: C89 mein loop ke andar int declare nahi hota tha
    // C99 se hota hai — modern compilers mein koi issue nahi

    // WHILE — Java jaisa
    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        i++;
    }

    // DO-WHILE — Java jaisa
    int j = 0;
    do {
        printf("%d ", j);
        j++;
    } while (j < 5);

    // BREAK & CONTINUE — Java jaisa bilkul
    for (int k = 0; k < 10; k++) {
        if (k == 5) break;     // loop band
        if (k % 2 == 0) continue;  // skip even
        printf("%d ", k);
    }

    return 0;
}