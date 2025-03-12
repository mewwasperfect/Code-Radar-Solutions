#include <stdio.h>

int main (){
    int N , n;
    scanf("%d" , &N);
    for (int i = 1 ; i <= N ; i++){
        scanf("%d" , &n);
        printf("%d " , n);            
    }
    printf("%ch" , Sort(n));
    return 0 ;
}

int Sort(){
    int n ;
    for (int j = 1 ; j <= n[0] ; j++){
        if (j<n[0]){
            printf("Sorted");
        }
    }
}