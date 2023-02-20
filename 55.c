#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

void display(struct student s)
{
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}

int main()
{
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter student %d name, age: ", i+1);
        scanf("%s %d", s[i].name, &s[i].age);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d:\n", i+1);
        display(s[i]);
        printf("\n");
    }

    return 0;
}
