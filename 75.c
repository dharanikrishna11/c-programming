#include <stdio.h>

int main() {
    int m, n, i, product;
    
    printf("Enter a number: ");
    scanf("%d", &m);
    
    printf("Enter the limit: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        product = m * i;
        printf("%d x %d = %d\n", i, m, product);
    }
    
    return 0;
}
