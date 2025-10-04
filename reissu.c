
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
