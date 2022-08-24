/*
    This program is used to solve an Oxford Math Admission Test (MAT) test that
    states as thus

    1 - 4 + 9 - 16 + ... + 99^2 - 100^2 equals _______.
*/
#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - (i * i);
        }
        else
        {
            sum = sum + (i * i);
        }
    }

    printf("%d", sum);
}