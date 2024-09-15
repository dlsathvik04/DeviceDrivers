#include <stdio.h>

int main()
{
    float salary;
    scanf("%f", &salary);
    int dearness = salary * 0.4;
    int house = salary * 0.2;
    printf("%.2f", salary + dearness + house);
    return 0;
}