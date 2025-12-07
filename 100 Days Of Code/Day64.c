#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHARS 256

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;

    int last_index[MAX_CHARS];
    for(int i = 0; i < MAX_CHARS; i++) {
        last_index[i] = -1;
    }

    int max_len = 0;
    int start = 0;

    for (int j = 0; j < n; j++) {
        if (last_index[(unsigned char)s[j]] >= start) {
            start = last_index[(unsigned char)s[j]] + 1;
        }

        max_len = max(max_len, j - start + 1);
        last_index[(unsigned char)s[j]] = j;
    }

    return max_len;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    printf("%d\n", lengthOfLongestSubstring(s));

    return 0;
}