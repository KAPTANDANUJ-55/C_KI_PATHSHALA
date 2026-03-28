#include <stdio.h>
#include <string.h>

// STRUCT — Java ke class jaisa, but sirf data (no methods) ⚠️
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Object banana
    struct Student s1;          // Java mein: Student s1 = new Student();
    strcpy(s1.name, "Danuj");
    s1.age = 21;
    s1.marks = 95.5;

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.1f\n", s1.marks);

    // Initialization shortcut
    struct Student s2 = {"Bhai", 20, 88.0};

    // Array of structs
    struct Student class[3] = {
        {"Danuj", 21, 95.5},
        {"Raj", 20, 88.0},
        {"Priya", 22, 91.0}
    };

    for (int i = 0; i < 3; i++) {
        printf("%s: %.1f\n", class[i].name, class[i].marks);
    }

    return 0;
}