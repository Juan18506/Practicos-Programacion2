#include <stdio.h>

bool EsPalindrome(char *frase) {

}

int main() {
    char palabra = "Hooh";
    char *frase = &palabra;
    if (EsPalindrome(frase)) {
        printf("La frase es palindrome")
    } else {
        printf("La frase no es palindrome")
    }
}
