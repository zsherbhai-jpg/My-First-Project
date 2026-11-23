#include <stdio.h>


void task1_largest_element(void) {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; 
        }
    }
    printf("The largest element in the array is: %d\n", largest);
}


void task2_matrix_addition(void) {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Sum of the two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d \t", sum[i][j]);
        printf("\n");
    }
}

int main(void) {
    int choice;
    printf("============================\n");
    printf("  EXPERIMENT 7 - SELECT TASK\n");
    printf("============================\n");
    printf("1. Find Largest Element in Array\n");
    printf("2. Matrix Addition\n");
    printf("----------------------------\n");
    printf("Enter choice (1-2): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    switch (choice) {
        case 1: task1_largest_element();  break;
        case 2: task2_matrix_addition();  break;
        default: printf("Invalid choice.\n"); break;
    }
    return 0;
}