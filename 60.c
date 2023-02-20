#include <stdio.h>

int main() {
   char input[100];
   FILE *fptr;

   printf("Enter text to input: ");
   fgets(input, 100, stdin);

   fptr = fopen("output.txt", "w");
   if (fptr == NULL) {
      printf("Error opening file!");
      return 1;
   }

   fprintf(fptr, "%s", input);
   fclose(fptr);
   printf("Data written to file successfully.\n");

   return 0;
}
