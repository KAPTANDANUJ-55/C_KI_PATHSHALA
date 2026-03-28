#include <stdio.h>
#include <math.h>

void quadraticEq(double *coeff, double *roots);
int main(){
   double coeff[3];
   double roots[2];
   
   printf("enter the coefficients: ");
 scanf("%lf %lf %lf", &coeff[0], &coeff[1], &coeff[2]);
   quadraticEq(coeff,roots);

   printf("Roots are : x1=%.2lf , x2=%.2lf",roots[0],roots[1]);
    return 0;
}


void quadraticEq(double *coeff,double *roots){
    double a = coeff[0];
    double b = coeff[1];
    double c = coeff[2];

    double discriminant = b*b-4*a*c;

    if(discriminant < 0){
        printf("roots are imaginary");
          roots[0]=roots[1]=0;
    }
    else{
        roots[0] = (-b+sqrt(discriminant)) /(2*a);
        roots[1] = (-b-sqrt(discriminant)) /(2*a);
    }
}