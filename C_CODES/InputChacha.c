#include <stdio.h>

int main() {
    int age;
    float marks;
    char name[50];   // String = char array in C (Java ka String nahi hai yahan!)

    printf("Apna naam likho: ");
    scanf("%s", name);       // & nahi lagta string mein (baad mein samjhenge)

    printf("Apni age likho: ");
    scanf("%d", &age);       // & = address operator — JAVA MEIN NAHI HOTA ⚠️
                             // scanf ko variable ka ADDRESS chahiye hota hai

    printf("Marks: ");
    scanf("%f", &marks);

    printf("Naam: %s, Age: %d, Marks: %.2f\n", name, age, marks);
    // %.2f = 2 decimal places tak print karo

    return 0;
}