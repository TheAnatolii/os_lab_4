#include <iostream>
#include "functions.hpp"

extern "C"
{
    int PrimeCount(int A, int B)
    {
        bool sieve[B];
        int count = 0;

        for (int i = 1; i <= B; i++)
        { // Изначально все числа не вычеркнуты.
            sieve[i] = true;
        }

        for (int i = 2; i <= B; i++)
        {
            if (sieve[i])
            { // если i не вычеркнуто
                if (i >= A)
                {
                    count++;
                }

                for (int j = i * i; j <= B; j += i)
                { // вычеркиваем все кратные числа начиная с i^2
                    sieve[j] = false;
                }
            }
        }
        return count;
    }
}

extern "C"
{

    long long factorial(int x)
    {
        long long ans = x;
        for (int i = x - 1; i > 1; --i)
        {
            ans *= i;
        }
        return ans;
    }

    float E(int x)
    {
        float ans = 1.0;
        for (int i = 1; i <= x; ++i)
        {
            ans += 1.0 / (factorial(i));
        }
        return ans;
    }
}