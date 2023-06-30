#include <stdio.h>
/**
 * Find the end of the destination string
 * Append the source string to the destination string
 * Add a terminating null byte to the end of the concatenated string
 * Return a pointer to the resulting string return dest;
 */
char *_strcat(char *dest, char *src) {
    int i, j;
    i = 0;
    while (dest[i] != '\0') {
        i++;
    }
j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
tring
    dest[i] = '\0';
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = " world!";

    printf("Before concatenation:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // Concatenate str2 to str1
    _strcat(str1, str2);

    printf("\nAfter concatenation:\n");
    printf("str1 = %s\n", str1);

    return 0;
}
