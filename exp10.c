#include <stdio.h>


void task1_pointer_addition(void) {
    int num1, num2, sum;
    int *ptr1 = &num1, *ptr2 = &num2;
    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);
    sum = *ptr1 + *ptr2; 
    printf("Sum = %d\n", sum);
}


void task2_reverse_array(void) {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    int *ptr = &arr[n - 1]; // Point to end element
    printf("Reversed Array: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--; 
    }
    printf("\n");
}


int main(void) {
    int choice;
    printf("============================\n");
    printf(" EXPERIMENT 10 - SELECT TASK\n");
    printf("============================\n");
    printf("1. Pointer-Based Addition\n");
    printf("2. Array Reversal Using Pointers\n");
    printf("----------------------------\n");
    printf("Enter choice (1-2): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    switch (choice) {
        case 1: task1_pointer_addition(); break;
        case 2: task2_reverse_array();    break;
        default: printf("Invalid choice.\n"); break;
    }
    return 0;
}