#include <stdio.h>

int main() {
    int A, m, n, o;

    printf("Enter the limit A: ");
    scanf("%d", &A);

    printf("Pythagorean triples with values smaller than %d:\n", A);
    for (n = 1; n < A; n++) {
        for (m = n+1; m < A; m++) {
            o = m*m + n*n;
            if (o >= A) {
                break;
            }
            printf("(%d,%d,%d)\n", m*m-n*n, 2*m*n, o);
        }
    }

    return 0;
}
