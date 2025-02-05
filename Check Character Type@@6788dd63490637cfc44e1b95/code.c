#include <stdio.h>

int main() {
    char ch ;
    scanf("%c" , &ch) ;
    if ((ch == 'a') || (ch == ''e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
        printf ("%c" , ch);
    } else if (('b'<=ch<='z') && (ch != 'a') || (ch != 'e') || (ch != 'i') || (ch != 'o') || (ch != 'u')){
        printf("Consonant");
    } else {
        printf("Not an Alphabet");
    }
    return 0;
}