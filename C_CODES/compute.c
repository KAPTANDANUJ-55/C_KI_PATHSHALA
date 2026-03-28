#include <stdio.h>

int main(){
    int x[] = {1,2,3,4};
    int *p =  x;

    int sum =0;
    int i=0;

    while(i<4){
        printf("The Value is of x[%d] is %d at address %p: \n",i,*p,p );
        sum = sum+*p;
        printf("the sum is: %d" ,sum);
        i++;
        p++;
    }
    return 0;
}