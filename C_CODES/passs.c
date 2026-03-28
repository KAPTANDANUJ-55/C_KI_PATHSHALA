#include <stdio.h>

void change(int a) {
    a = 100;
    printf("x = %d\n",a);
}

int main() {
    int x = 10;
    change(x);
    printf("x = %d\n", x);
    return 0;
}
