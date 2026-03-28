// #include <stdio.h>
// #include <math.h>
// int main(){
//     int A;
//     int S;
//     int a;
//     int b,c;
// while (1)
// {
//     /* code */    printf("Enter all values: ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     scanf("%d",&S);

//     A= sqrt(S*(S-a)*(S-b)*(S-c));

     
//          printf("The Area is %d", A);
     
//    printf("\n");
// }



//     return 0;
// }




#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double S, A;

    while (1) {
        printf("Enter sides a b c (0 0 0 to exit): ");
        scanf("%lf %lf %lf", &a, &b, &c);

        // exit condition
        if (a == 0 && b == 0 && c == 0)
            break;

        // triangle validity check
        if (a + b <= c || a + c <= b || b + c <= a) {
            printf("❌ Invalid triangle\n\n");
            continue;
        }

        S = (a + b + c) / 2;
        A = sqrt(S * (S - a) * (S - b) * (S - c));

        printf("Area of triangle = %.2lf\n\n", A);
    }

    return 0;
}
