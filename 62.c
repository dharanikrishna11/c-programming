#include <stdio.h>

int main() {
    char filename[100];
    FILE *fileptr;

    printf("Enter Name of file to open for reading: ");
    scanf("%s", filename);

    fileptr = fopen(filename, "r");

    if (fileptr == NULL) {
        printf("Error: File not found.");
        return 1;
    }

    // Read the contents of the file here

    fclose(fileptr);
    return 0;
}
