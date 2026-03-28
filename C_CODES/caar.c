#include <stdio.h>
#include <string.h>
int main(){
    return 0;
}


int monthtoInt(char monthStr[]){
    int month;
    int year;
    sscanf(monthStr,"%d%d", &month,&year);
     return month +year*12;
}