#include <stdio.h>
void floyd(int row,int col,int n); 
int num=1;
int main(){
    
    floyd(0,1,7);
    return 0;
}

void floyd(int row,int col,int n){
   
    if(row>n){
        return;
    }
    if(col<=row){
            printf("%d",num++);
    floyd(row,col+1,n);
    }
    else{
        printf("\n");
        floyd(row+1,1,n);
    }

}