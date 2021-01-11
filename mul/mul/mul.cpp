
#include "mul.h"
#include <stdio.h>
long long  _stdcall mul(int x, int y)
{
    long long m = (long long)x;
    long long n = (long long)y;
    long long s = m * n;
    printf("%lld * %lld = %lld\n", m, n, s);
    return s;
}