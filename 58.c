#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

int main() {
    char filename[100], line[MAX_LINE_LENGTH];
    FILE *fp;
    int word_count = 0, line_count = 0;

    printf("Enter file to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
        // count words in line
        word_count = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n') {
                word_count++;
            }
        }

        // count lines in file
        line_count++;
    }

    printf("Number of words in a line: %d\n", word_count);
    printf("Number of lines in file: %d\n", line_count);

    fclose(fp);
    return 0;
}
