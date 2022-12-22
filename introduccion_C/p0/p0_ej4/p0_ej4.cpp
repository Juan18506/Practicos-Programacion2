#include <stdio.h>
#include <string.h>

bool EsPalindrome(char *frase) {
    return true;
}

int main() {
    char *frase;
    scanf("%[^\n]s", frase);
    int largo = strlen(frase);
    printf("%d", largo);
    if (EsPalindrome(frase)) {
        printf("La frase es palindrome");
    } else {
        printf("La frase no es palindrome");
    }
    return 0;
}
