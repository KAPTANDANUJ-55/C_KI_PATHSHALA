#include <stdio.h>

int main(){
    int F;
    int C;
    char FA;
   
    printf("FROM WHAT TO WHAT CONVERVISION YOU WOULD LIKE(F to C or C to F): ");
          scanf("%c", &FA);
    if(FA=='f' || FA=='F'){
        printf("enter the value of f: ");
        scanf("%d", &F);
           int c1= (F-32)*(9.0/5.0);
        printf("Temperature in Celcius: %d", c1);
    }

    else if(FA=='c'|| FA=='C'){
                printf("enter the value of c: ");
        scanf("%d", &C); 
         int f1 = (9.0/5.0*C)+ 32; 
        printf("Temperature in farenheit: %d", f1);
    }


    return 0;
}