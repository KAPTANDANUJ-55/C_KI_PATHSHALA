#include <stdio.h>

int main() {
    // NULL POINTER — kisi ko point nahi karta
    int *ptr = NULL;   // Java ka "null" jaisa

    // NULL check HAMESHA karo ⚠️
    if (ptr != NULL) {
        printf("%d\n", *ptr);
    } else {
        printf("Pointer NULL hai bhai!\n");
    }
    // Bina check ke *ptr kiya → SEGMENTATION FAULT → program crash!

    // VOID POINTER — generic pointer, koi bhi type ka address store kare
    int  i = 10;
    float f = 3.14;

    void *vptr;       // No specific type!

    vptr = &i;
    printf("Int:   %d\n",   *(int*)vptr);    // cast karke use karo

    vptr = &f;
    printf("Float: %f\n",   *(float*)vptr);  // cast karke use karo

    // malloc() void* return karta hai — isliye ye important hai!
    // (Dynamic memory mein aayega)

    return 0;
}