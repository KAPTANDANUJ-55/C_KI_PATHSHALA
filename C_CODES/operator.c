#include <stdio.h>

int main() {
    // ARITHMETIC — Java jaisa hi
    int a = 10, b = 3;
    printf("%d\n", a / b);   // 3 — integer division (Java jaisa)
    printf("%d\n", a % b);   // 1 — modulus

    // RELATIONAL — Java jaisa
    // ==, !=, >, <, >=, <=

    // LOGICAL — Java jaisa
    // && (AND), || (OR), ! (NOT)

    // BITWISE — Java jaisa
    // &, |, ^, ~, <<, >>

    // INCREMENT/DECREMENT — Java jaisa
    a++;  // a--
    ++a;  // --a

    // EK IMPORTANT DIFFERENCE ⚠️
    // Java mein: int x = 5; boolean b = (x = 10); // ERROR
    // C mein:    int x = 5; if (x = 10) { }       // VALID! (assignment in condition)
    // Ye common bug hai C mein — dhyan rakhna!

    // TERNARY — Java jaisa
    int max = (a > b) ? a : b;

    return 0;
}