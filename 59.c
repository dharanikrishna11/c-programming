#include <stdio.h>

int main() {
    char fileName[100], content[100];
    FILE *fp;

    printf("Enter the name of file for reading: ");
    scanf("%s", fileName);

    printf("Enter content to append: ");
    scanf("%s", content);

    fp = fopen(fileName, "a"); // opening file in append mode
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "%s\n", content); // appending content to file
    printf("Content appended to %s successfully.\n", fileName);

    fclose(fp); // closing file

    return 0;
}
