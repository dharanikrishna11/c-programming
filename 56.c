#include <stdio.h>

int main()
{
    char filename[50], text[1000];
    printf("Enter name of file to write: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write: ");
    scanf(" %[^\n]s", text);

    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File written successfully.\n");

    return 0;
}
