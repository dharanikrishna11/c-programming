#include <stdio.h>

int main() {
    int P, Q, R;
    printf("Enter the values of P, Q, and R: ");
    scanf("%d %d %d", &P, &Q, &R);
    printf("Numbers from %d to %d except %d:\n", P, Q, R);
    for (int i = P; i <= Q; i++) {
        if (i % 10 == R || i == R) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
