#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    char filename1[100], filename2[100], filename3[100];
    char c;

    printf("Enter first file name : ");
    scanf("%s", filename1);

    printf("Enter second file name : ");
    scanf("%s", filename2);

    printf("Enter destination file name : ");
    scanf("%s", filename3);

    // open the input files
    fp1 = fopen(filename1, "r");
    fp2 = fopen(filename2, "r");

    // check if the input files exist
    if (fp1 == NULL || fp2 == NULL) {
        printf("Error: Unable to open file!\n");
        exit(EXIT_FAILURE);
    }

    // open the output file
    fp3 = fopen(filename3, "w");

    // check if the output file was created
    if (fp3 == NULL) {
        printf("Error: Unable to create file!\n");
        exit(EXIT_FAILURE);
    }

    // copy the contents of the first file to the output file
    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp3);
    }

    // copy the contents of the second file to the output file
    while ((c = fgetc(fp2)) != EOF) {
        fputc(c, fp3);
    }

    printf("Files merged successfully!");

    // close all the files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
