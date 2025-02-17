#include <stdio.h>

int main() {
    int a, b, c;
    float average;

    // Taking input from the user
    scanf("%d %d %d", &a, &b, &c);

    // Calculating the average
    average = (a + b + c) / 3.0;

    // Printing the result with two decimal places
    printf("Average: %.2f\n", average);

    return 0;
}
