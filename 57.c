#include <stdio.h>

int main() {
    FILE *file1, *file2, *merged_file;
    char file1_name[50], file2_name[50], merged_file_name[50], c;

    printf("Enter file 1: ");
    scanf("%s", file1_name);

    printf("Enter file 2: ");
    scanf("%s", file2_name);

    // Open the two input files
    file1 = fopen(file1_name, "r");
    if (file1 == NULL) {
        printf("Error opening file %s\n", file1_name);
        return 1;
    }
    file2 = fopen(file2_name, "r");
    if (file2 == NULL) {
        printf("Error opening file %s\n", file2_name);
        return 1;
    }

    // Open the merged file for writing
    printf("Enter name for merged file: ");
    scanf("%s", merged_file_name);
    merged_file = fopen(merged_file_name, "w");

    // Read the contents of file1 and write to the merged file
    while ((c = fgetc(file1)) != EOF) {
        fputc(c, merged_file);
    }

    // Read the contents of file2 and write to the merged file
    while ((c = fgetc(file2)) != EOF) {
        fputc(c, merged_file);
    }

    // Close the files
    fclose(file1);
    fclose(file2);
    fclose(merged_file);

    printf("Merged file saved as %s\n", merged_file_name);

    return 0;
}
