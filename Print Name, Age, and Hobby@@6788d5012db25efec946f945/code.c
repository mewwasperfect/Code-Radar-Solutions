#include <stdio.h>

int main() {
    char name[100] , hobby[100];
    int age ;
    scanf("%s" , &name);
    scanf("%d" , &age);
    scanf("%s" , &hobby);
    prinf("Name: %c\nAge: %c\nHobby: %c\n",name,age,hobby);
    return 0 ;
}