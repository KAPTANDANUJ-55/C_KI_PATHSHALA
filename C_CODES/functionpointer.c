#include <stdio.h>

// Function bhi RAM mein hota hai — uska bhi address hota hai!
// Java mein method reference tha (::) — ye usse bhi powerful hai!

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main() {
    // Function pointer declare karna:
    // return_type (*pointer_name)(parameter_types)
    int (*operation)(int, int);   // ek pointer jo function ko point kare

    operation = add;
    printf("Add: %d\n", operation(10, 5));   // 15

    operation = sub;
    printf("Sub: %d\n", operation(10, 5));   // 5

    operation = mul;
    printf("Mul: %d\n", operation(10, 5));   // 50

    // Array of function pointers! 🔥
    int (*funcs[])(int, int) = {add, sub, mul};
    char *names[] = {"Add", "Sub", "Mul"};

    for (int i = 0; i < 3; i++) {
        printf("%s: %d\n", names[i], funcs[i](10, 5));
    }

    return 0;
}


