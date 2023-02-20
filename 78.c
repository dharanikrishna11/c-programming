#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE]; 
    int n, i, temp;
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    for (i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    
    printf("The reversed array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
