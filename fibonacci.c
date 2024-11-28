#include <stdio.h>

void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Sequence: ");

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
    printf("Enter the number of terms (1-47): ");
    scanf("%d", &n);

    if (n < 1 || n > 47) {
        printf("Error: Input must be a natural number between 1 and 47\n");
    return 1;
    }

    if (n >= 48) {
        printf("Overflow: Input too large\n");
        return 1;
    }
    else {
        generateFibonacci(n);
    }

    return 0;
}