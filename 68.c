#include <stdio.h>

union student {
    int roll_no;
    char name[20];
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    union student s[n];

    for (i = 0; i < n; i++) {
        printf("Enter student %d Roll No., name, Marks: ", i + 1);
        scanf("%d %s %f", &s[i].roll_no, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No.: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}
