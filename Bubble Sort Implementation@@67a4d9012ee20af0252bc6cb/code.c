void printArray(int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        printArray("%d" , arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[] , int n){
    int temp ;
    for (int i = 0 ; i < n-1 ; i++){
        for (int i = 0 ; i < (n-1-i) ; j++){
            if (arr[i] > arr[j+1]){
                arr[i] = temp ;
                arr[i] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
}