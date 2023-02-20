#include <stdio.h>

int main() {
    FILE *source_file, *target_file;
    char source_name[20], target_name[20];
    char ch;

    printf("Enter the name of the source file: ");
    scanf("%s", source_name);

    // Open the source file
    source_file = fopen(source_name, "r");
    if (source_file == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    printf("Enter the name of the target file: ");
    scanf("%s", target_name);

    // Open the target file
    target_file = fopen(target_name, "w");
    if (target_file == NULL) {
        printf("Error: Could not open target file.\n");
        return 1;
    }

    // Copy the contents of the source file to the target file
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, target_file);
    }

    // Close the files
    fclose(source_file);
    fclose(target_file);

    printf("File copied successfully.\n");

    return 0;
}
