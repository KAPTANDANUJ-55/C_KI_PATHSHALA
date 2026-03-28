#include <stdio.h>
#include <string.h>   // String functions ke liye

int main() {
    // C mein String = char array ⚠️ (Java ka String object nahi!)
    char name[20] = "Danuj";
    // Memory mein: ['D','a','n','u','j','\0'] — \0 = null terminator
    // Ye \0 BAHUT important hai — string ka end batata hai

    // String length
    printf("Length: %zu\n", strlen(name));  // 5 (bina \0 ke)

    // String copy — Java mein = se hota tha, C mein nahi! ⚠️
    char copy[20];
    strcpy(copy, name);   // name ko copy mein copy karo

    // String compare — Java ka .equals() yahan nahi chalega ⚠️
    if (strcmp(name, "Danuj") == 0) {   // 0 = equal
        printf("Same name!\n");
    }

    // String concatenate
    char greeting[50] = "Hello, ";
    strcat(greeting, name);    // "Hello, Danuj"
    printf("%s\n", greeting);

    // Character access — Java jaisa
    printf("First char: %c\n", name[0]);   // 'D'

    return 0;
}