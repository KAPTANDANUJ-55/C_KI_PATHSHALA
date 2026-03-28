#include <stdio.h>

int main(){
    long k;
    char b;
    float w;
    char *s = "Danuj";
    w=2.5;
    b= 'a';
    k= 327434934;
 printf("Addresses: %p %p %p %p %p %p", &k, &b, &w, &s[0],&s[1],&s[2]);

    return 0;
}