#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkEnd(char string[]) {
    if ((string[0] == '0') && (string[1] == '\0')) {
        return 1;
    }
    return 0;
}

void substringCopy(char copy[], char string[], int start, int end) {
    for (int i = start; i < end; i++) {
        copy[i - start] = string[i];
    }
    copy[end] = '\0';
}

void countWordSizeInString(char string[], char biggestWord[]) {
    int len = strlen(string), wordCount = 0, start, end, wordLen;
    char word[100];
    start = 0;
    end = 0;
    for (int i = 0; i < len; i++) {
        if (string[i] == ' ') {
            wordLen = end - start;
            if (wordCount == 0) {
                printf("%d", wordLen);
            }
            else {
                printf("-%d", wordLen);
            }
            if (wordLen >= strlen(biggestWord)) {
                substringCopy(biggestWord, string, start, end);
            }
            end++;
            start = end;
            wordCount++;
        }
        else {
            end++;
        }
    }
    wordLen = end - start;
    if (wordCount == 0) {
        printf("%d\n", wordLen);
    }
    else {
        printf("-%d\n", wordLen);
    }
    if (wordLen >= strlen(biggestWord)) {
        substringCopy(biggestWord, string, start, end);
    }
}

int main() {
    char string[100], biggestWord[100];
    while(1) {
        scanf(" %99[^\n] ", string);
        if (checkEnd(string)) {
            break;
        }
        countWordSizeInString(string, biggestWord);
    }
    printf("Maior palavra: %s", biggestWord);
	return 0;
}
