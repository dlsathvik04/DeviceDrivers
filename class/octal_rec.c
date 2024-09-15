#include <stdio.h>

int reverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    else
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
        return reverse(num, rev);
    }
}

int octal(int num, int prev)
{
    if (num == 0)
    {
        int rev = reverse(prev, 0);
        return rev;
    }
    else
    {
        prev = prev * 10 + (num % 8);
        num /= 8;
        return octal(num, prev);
    }
}

int octal2(int num)
{
    if (num < 8)
        return num % 8;
    return 10 * (octal2(num / 8)) + (num % 8);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", octal2(a));
    return 0;
}