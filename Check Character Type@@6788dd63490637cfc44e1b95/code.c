#include <stdio.h>

int main() {
    char ch ;
    scanf("%c" , &ch) ;
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
        printf ("vowel")
    } else if (('b'<=ch<='z') && (ch != 'a') || (ch != 'e') || (ch != 'i') || (ch != 'o') || (ch != 'u')){
        printf("Consonant");
    }else if (0<=ch<=9){
        printf("Digit");
    } else {
        printf("Special Character");
    }
    return 0;
}