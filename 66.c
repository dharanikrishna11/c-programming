#include <stdio.h>

int main() {
   int n, roll;
   char name[50];
   FILE *fptr;

   fptr = fopen("students.txt", "w"); // opening file in write mode

   if(fptr == NULL) {
      printf("Error opening file!");
      return 1;
   }

   printf("Enter the number of students: ");
   scanf("%d", &n);

   for(int i = 0; i < n; i++) {
      printf("Enter the roll number: ");
      scanf("%d", &roll);
      printf("Enter the name: ");
      scanf("%s", name);

      fprintf(fptr, "%d %s\n", roll, name); // writing to file
   }

   fclose(fptr); // closing file
   printf("Data written to file successfully!");

   return 0;
}
