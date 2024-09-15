#include <stdio.h>

int reverseNum(int num)
{
    int a = num;
    int result = 0;
    while (a > 0)
    {
        result = (result * 10) + (a % 10);
        a = a / 10;
    }
    return result;
}

int isPalindrome(int num)
{
    int rev = reverseNum(num);
    if (rev == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("reverse Num: %d \n", reverseNum(num));
    if (isPalindrome(num))
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}