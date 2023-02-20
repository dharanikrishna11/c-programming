#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
        printf("%s\n", a);
    else
    {
        for (i = l; i <= r; i++)
        {
            if (i != l && a[i] == a[l])
                continue;
            swap((a + l), (a + i));
            permute(a, l + 1, r);
            swap((a + l), (a + i));
        }
    }
}

int main()
{
    char str[10];
    printf("Enter a number: ");
    scanf("%s", str);
    int n = strlen(str);
    printf("Unique permutations of %s are:\n", str);
    permute(str, 0, n - 1);
    return 0;
}
