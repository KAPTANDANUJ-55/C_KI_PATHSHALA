#include <stdio.h>

int main() {
    // INTEGER TYPES
    int age = 21;              // 4 bytes, Java jaisa
    short s = 100;             // 2 bytes
    long l = 100000L;          // 4 or 8 bytes (system dependent)
    long long ll = 9999999LL;  // 8 bytes guaranteed

    // FLOAT TYPES
    float f = 3.14f;           // 4 bytes (Java jaisa)
    double d = 3.14159;        // 8 bytes (Java jaisa)

    // CHARACTER — JAVA SE ALAG ⚠️
    char ch = 'A';             // Sirf 1 byte! Java mein 2 bytes hota hai (Unicode)
                               // C mein char = small integer bhi hai!

    // BOOLEAN — C MEIN NAHI HOTA DIRECTLY ⚠️
    // 0 = false, non-zero = true (ye C ka rule hai)
    int isValid = 1;           // true
    int isDone = 0;            // false

    // C99 mein bool available hai
    #include <stdbool.h>       // (file ke top pe likhna hoga)
    bool flag = true;

    printf("%d\n", age);       // %d = integer
    printf("%f\n", f);         // %f = float
    printf("%c\n", ch);        // %c = character
    printf("%ld\n", l);        // %ld = long

    return 0;
}