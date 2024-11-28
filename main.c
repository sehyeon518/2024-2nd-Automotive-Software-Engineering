#include <stdio.h>
#include "fibonacci.h"  // 피보나치 함수 선언

int main() {
    int n;
    printf("Enter the number of terms (1-47): ");
    scanf("%d", &n);

    if (n < 1 || n > 47) {
        printf("Error: Input must be a natural number between 1 and 47\n");
        return 1;
    }

    generateFibonacci(n);  // 피보나치 함수 호출

    return 0;
}
