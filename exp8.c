#include <stdio.h>
#include <string.h>


void task1_string_length(void) {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    
    while(str[length] != '\0') {
        length++;
    }
    printf("The length of the string is: %d\n", length);
}


void task2_palindrome(void) {
    char str[100];
    int i, length, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);
}


int main(void) {
    int choice;
    printf("============================\n");
    printf("  EXPERIMENT 8 - SELECT TASK\n");
    printf("============================\n");
    printf("1. String Length\n");
    printf("2. Palindrome Checker\n");
    printf("----------------------------\n");
    printf("Enter choice (1-2): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    switch (choice) {
        case 1: task1_string_length(); break;
        case 2: task2_palindrome();    break;
        default: printf("Invalid choice.\n"); break;
    }
    return 0;
}