#include <stdio.h>
int main (){
    int N , i , j , k;
    scanf("%d" , &N);
    for (i = 1 ; i <= N ; ++i){

        for (j = 1 ; j < N ; ++j){
            printf("*");
        }
        for (k = 1 ; k < (N-3) ; k++){
            printf("*");
        }
    printf("*\n");
    }
    return 0;
}