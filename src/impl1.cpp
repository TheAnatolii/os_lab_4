#include <iostream>
#include "functions.hpp"

extern "C"
{
    bool bruteforce(int n)
    {
        int i = 2;
        while (i * i <= n)
        {
            if (n % i == 0)
            {
                return true;
            }
            ++i;
        }
        return false;
    }

    int PrimeCount(int A, int B)
    {
        int count = 0;
        for (int i = A; i <= B; ++i)
        {
            if (not bruteforce(i))
            {
                count++;
            }
        }
        return count;
    }
}

extern "C"
{
    float E(int x)
    {
        float ans = 1;
        for (int i = 1; i < x; ++i)
        {
            ans *= (1 + 1.0 / x);
        }
        return ans;
    }
}