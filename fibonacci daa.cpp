#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

void printFibonacciSeries(int count) {
    if (count <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci Series:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int count;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &count);
    printFibonacciSeries(count);
    return 0;
}

