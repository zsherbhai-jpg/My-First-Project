#include <stdio.h>

int main()
{
    
    int lower, upper, i, j, isPrime;
    printf("========================================\n");
    printf(" PRIME NUMBERS FINDER USING WHILE LOOP \n");
    printf("========================================\n");
    
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    
    if (lower > upper) {
        int temp = lower;
        lower = upper;
        upper = temp;
    }
    printf("\nPrime numbers between %d and %d are:\n", lower, upper);
    
    i = lower;
    
    while (i <= upper) {

        
        if (i <= 1) {
            isPrime = 0;
        } else {
            isPrime = 1; 
            j = 2; 
            while (j < i) {
                
                if (i % j == 0) {
                    isPrime = 0; 
                    break; 
                }
                j++; 
            }
        }
        
        if (isPrime == 1) {
            printf("%d ", i);
        }
        i++; 
    }
    printf("\n------------------------------------------\n");
    return 0;
}