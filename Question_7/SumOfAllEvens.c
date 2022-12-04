#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum, min = 0, max = 100;
    for (min; min <= max; min += 2)
    {
        sum += min;
    }
    printf("The sum of all the even numbers from %d to %d is %d", min, max, sum);
    return 0;
}