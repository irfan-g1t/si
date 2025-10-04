
#include <stdio.h>
#include <string.h>

// Q1: Pyramid Pattern with Repeating Numbers
void pattern() {
    int i, j;
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Q2: Sum and Average of Odd and Even Numbers from an Array
void sum_and_average() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sumEven = 0, sumOdd = 0, countEven = 0, countOdd = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sumEven += arr[i];
            countEven++;
        } else {
            sumOdd += arr[i];
            countOdd++;
        }
    }

    printf("Sum of Even Numbers: %d\n", sumEven);
    printf("Average of Even Numbers: %.2f\n", (float)sumEven / countEven);
    printf("Sum of Odd Numbers: %d\n", sumOdd);
    printf("Average of Odd Numbers: %.2f\n", (float)sumOdd / countOdd);
}

// Q3: Compare Two Strings
void compare_strings() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if(strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
}

int main() {
    printf("Q1 Output:\n");
    pattern();

    printf("\nQ2 Output:\n");
    sum_and_average();

    printf("\nQ3 Output:\n");
    compare_strings();

    return 0;
}
