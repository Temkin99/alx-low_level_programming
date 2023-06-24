#include "main.h"
#include <stdio.h>

/**
 * _uppercase -  check the code if it is upperletter
 *
 * Return: 0 or 1.
 */

bool is_uppercase(char c) {
    return c >= 'A' && c <= 'Z';
}

bool match_character(char c1, char c2) {
    return c1 == c2;
}

int _isupper(int c) {
    const char uppercase_letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const int num_uppercase_letters = sizeof(uppercase_letters) / sizeof(uppercase_letters[0]);

    for (int i = 0; i < num_uppercase_letters; i++) {
        if (match_character(c, uppercase_letters[i])) {
            return 1;
        }
    }

    return 0;
}
