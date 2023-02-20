#include <stdio.h>

#define MAX_SIZE 1000 // Maximum size of the file to be read

int main() {
    char filename[100]; // To store the filename
    char content[MAX_SIZE]; // To store the contents of the file
    FILE *fp; // File pointer to open the file

    printf("Enter the name of the file for reading: ");
    scanf("%s", filename);

    // Open the file for reading
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read the contents of the file
    fgets(content, MAX_SIZE, fp);

    // Print the contents of the file
    printf("%s", content);

    // Close the file
    fclose(fp);

    return 0;
}
