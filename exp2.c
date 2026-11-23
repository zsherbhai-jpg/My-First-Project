#include <stdio.h>


void task1_even_odd(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}


void task2_pcm_eligibility(void) {
    float physics, chemistry, maths, total, average;
    
    printf("Enter marks for Physics:");
    scanf("%f", &physics);
    printf("Enter marks for Chemistry:");
    scanf("%f", &chemistry);
    printf("Enter marks for Mathematics: ");
    scanf("%f", &maths);
    
    total = physics + chemistry + maths;
    average = total / 3.0;
    printf("\n \n");
    printf("PCM Total\t:\t%.2f / 300\n", total);
    printf("Average Marks\t:\t%.2f%%\n", average);
    printf(" \n");
   
    printf("Status\t\t:\t%s\n", (average >= 50) ? "ELIGIBLE for Admission"
                                                  : "NOT ELIGIBLE for Admission");
    printf("----------------------------------------\n");
}

void task3_sum_odd_range(void) {
    int start, end, i, temp, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);
    if (start > end) { 
        temp = start;
        start = end;
        end = temp;
    }
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) 
            sum = sum + i;
    }
    printf("Sum of odd numbers = %d\n", sum);
}


int main(void) {
    int choice;
    printf("============================\n");
    printf("  EXPERIMENT 2 - SELECT TASK\n");
    printf("============================\n");
    printf("1. Even/Odd Number Checker\n");
    printf("2. PCM Marks and Eligibility\n");
    printf("3. Sum of Odd Numbers in a Range\n");
    printf("----------------------------\n");
    printf("Enter choice (1-3): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    switch (choice) {
        case 1: task1_even_odd();       break;
        case 2: task2_pcm_eligibility(); break;
        case 3: task3_sum_odd_range();  break;
        default: printf("Invalid choice.\n"); break;
    }
    return 0;
}