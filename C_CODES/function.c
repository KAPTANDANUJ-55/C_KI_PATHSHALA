#include <stdio.h>

// FUNCTION DECLARATION (Prototype) — Java mein nahi hota ⚠️
// C mein use se PEHLE declare karna padta hai (ya upar likhna padta hai)
int add(int a, int b);
void greet(char name[]);

int main() {
    int result = add(5, 3);
    printf("Sum: %d\n", result);
    greet("Danuj");
    return 0;
}

// FUNCTION DEFINITION
int add(int a, int b) {
    return a + b;
}

void greet(char name[]) {     // void = Java jaisa, kuch return nahi
    printf("Hello, %s!\n", name);
}
