#include <stdio.h>

int fibonacci_calls = 0; // Global variable to track function calls

int fibonacci(int n) {
  fibonacci_calls++; // Increment call count for each invocation

  if (n <= 1) {
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n = 25;

  for (int i = 0; i < n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\nTotal function calls: %d\n", fibonacci_calls);

  return 0;
}
