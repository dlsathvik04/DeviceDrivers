#include <stdio.h>

float getIntelligence(float x, int y)
{
    return 2 + (y + 0.5 * x);
}

int main()
{
    for (int y = 1; y <= 6; y++)
    {
        for (float x = 5.5; x <= 12.5; x += 0.5)
        {
            printf("%0.1f	%d	%0.1f  \n", getIntelligence(x, y), y, x);
        }
    }
    return 0;
}