#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    
    // Read the input sum
    scanf("%s", s);

    int count[4] = {0}; // Array to count occurrences of 1, 2, and 3

    // Count occurrences of each digit
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '1' && s[i] <= '3') {
            count[s[i] - '0']++;
        }
    }

    // Construct the rearranged sum
    int index = 0;
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            s[index++] = i + '0';
            if (index < strlen(s)) {
                s[index++] = '+';
            }
        }
    }

    // Null-terminate the string
    s[index] = '\0';

    // Print the rearranged sum
    printf("%s\n", s);

    return 0;
}
