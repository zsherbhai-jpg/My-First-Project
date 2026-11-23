#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n; 
    }
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


void fibonacci_iterative(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Iterative Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }


    fibonacci_iterative(n);


    printf("Recursive Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");

    return 0;
}