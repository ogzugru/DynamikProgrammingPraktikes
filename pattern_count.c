//
// Created by Oğuzhan uğur Sarısakaloğlu on 24.03.2024.
//
#include <stdio.h>
#include <string.h>

// Pattern'ın Text içinde kaç kez geçtiğini sayan fonksiyon
int pattern_count(const char *text, const char *pattern) {
    int count = 0;
    int patternLength = strlen(pattern);
    int textLength = strlen(text);

    for (int i = 0; i <= textLength - patternLength; i++) {
        int found = 1;
        for (int j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return count;
}

int run_pattern_count() {
    char text[] = "ACAACTATGCATACTATCGGGAACTATCCT";
    char pattern[] = "ACTAT";
    int count = pattern_count(text, pattern);
    printf("'%s' dizisi %s icinde %d kez gecmektedir.\n", pattern, text, count);
    return 0;
}
