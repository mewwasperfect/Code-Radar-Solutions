#include <stdio.h>

int main() {
    char name[100] , hobby[100];
    int age ;
    scanf("%99s %d" , name , &age);
    scanf("%99s" , hobby);
    prinf("Name: %s\n",name);
    print("Age: %d\n" , age);
    printf("Hobby: %s\n", hobby);
    return 0 ;
}