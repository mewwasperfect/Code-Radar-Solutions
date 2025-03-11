#include <stdio.h>

int NoOfRectangles(int r){
    scanf("%d" , &r);
    for(int R = 1 ; R <= r ; R++){
        R++ ;
    }
}
int Area(int a){

}

int Perimeter(int p){

}

int main(){
    int n ; 
    scanf("%d" , &n);
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n" , NoOfRectangles(n));
    return 0 ;
}