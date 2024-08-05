#include <string.h>
#include <stdio.h>

void reverseWords(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = 0;

    // Reverse the entire string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Reverse each word in the string
    while (start < length) {
        // Skip leading spaces
        while (start < length && str[start] == ' ') {
            start++;
        }

        end = start;
        // Find the end of the word
        while (end < length && str[end] != ' ') {
            end++;
        }

        // Reverse the word
        for (int i = start; i < end / 2; i++) {
            char temp = str[i];
            str[i] = str[end - 1 - i];
            str[end - 1 - i] = temp;
        }

        start = end + 1;
        end = start;
        // Skip trailing spaces
        while (start < length && str[start] == ' ') {
            start++;
        }
    }
    str[length] = '\0'; // Null-terminate the string
    printf("%s\n", str);
    return;
}

int main() {
    char str[] = "Hello World!";
    reverseWords(str);
    return 0;
}
