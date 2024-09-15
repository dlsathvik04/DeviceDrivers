#include <stdio.h>

struct Stats {
    int sum;
    double average;
    int max;
};

struct Stats calculateStats(int num1, int num2, int num3, int num4, int num5) {
    struct Stats stats;

    stats.sum = num1 + num2 + num3 + num4 + num5;
    stats.average = (double)stats.sum / 5;
    stats.max = num1;
    if (num2 > stats.max) {
        stats.max = num2;
    }
    if (num3 > stats.max) {
        stats.max = num3;
    }
    if (num4 > stats.max) {
        stats.max = num4;
    }
    if (num5 > stats.max) {
        stats.max = num5;
    }

    return stats;
}

int main() {
    int num1, num2, num3, num4, num5;

    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    struct Stats results = calculateStats(num1, num2, num3, num4, num5);

    printf("Sum: %d\n", results.sum);
    printf("Average: %.2lf\n", results.average); 
    printf("Maximum: %d\n", results.max);

    return 0;
}