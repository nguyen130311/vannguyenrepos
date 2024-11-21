#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <array>

#define mymain int main()

int test, n;

int Fibonacci(int n)
{
    int F[55];
    F[0] = 1; F[1] = 1;
    for(int i = 2; i < 50; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}

mymain
{
    scanf("%d", &test);
    while(test--) {
        scanf("%d", &n);
        printf("%d\n", Fibonacci(n));
    }
    return 0;
}
