#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <filename> <n>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *filename = argv[1];
    const int n = atoi(argv[2]);

    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Error: could not open file '%s'\n", filename);
        exit(EXIT_FAILURE);
    }

    char *buffer = (char*) malloc(n + 1);
    if (!buffer) {
        fprintf(stderr, "Error: could not allocate memory\n");
        fclose(file);
        exit(EXIT_FAILURE);
    }

    const size_t bytes_read = fread(buffer, 1, n, file);
    fclose(file);

    if (bytes_read != n) {
        fprintf(stderr, "Error: could not read %d bytes from file\n", n);
        free(buffer);
        exit(EXIT_FAILURE);
    }

    for (int i = n - 1; i >= 0; i--) {
        putchar(buffer[i]);
    }

    putchar('\n');

    free(buffer);

    return 0;
}
