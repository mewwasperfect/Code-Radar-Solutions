#include <stdio.h>

int main() {
    char name[100] , hobby[100];
    int age ;
    scanf("%99s" , name);
    scanf("%d" , &age);
    scanf("%99s" , hobby);
    prinf("Name: %s\nAge: %d\nHobby: %s\n",name,age,hobby);
    return 0 ;
}