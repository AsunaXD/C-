#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// }
// // minimum of two function
// int min(double a, double b) // parameter
// {
//     if (a < b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// // calculate the sum from 1 to n

// int sumN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// // factorial functiion

// int facto(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }

//     return fact;
// }

// calculate the sum of the digits number

// int calculate(int n)
// {
//     int digSum = 0;
//     while (n != 0)
//     {
//         int lastDigit = n % 10;
//         n /= 10;
//         digSum += lastDigit;
//     }
//     return digSum;
// }

// binomial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n = 6, r = 3;
    cout << nCr(n, r) << endl;

    return 0;
}