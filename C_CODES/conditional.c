#include <stdio.h>

int main() {
    int marks = 85;

    // IF-ELSE — Java jaisa bilkul
    if (marks >= 90) {
        printf("A grade\n");
    } else if (marks >= 80) {
        printf("B grade\n");
    } else {
        printf("C grade\n");
    }

    // SWITCH — Java se THODA ALAG ⚠️
    int day = 2;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        default:
            printf("Other day\n");
    }
    // Java mein switch String pe bhi chalta hai
    // C mein SIRF integers aur characters pe chalta hai

    return 0;
}