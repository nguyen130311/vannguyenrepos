#include <array>
#include <cstdio>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <cmath>
#define mymain int main()
int row, column, Array[20000][20000];
bool Fibonacci(int n)
{
    int Fib[1000005];
    Fib[0] = 1; Fib[1] = 1;
    for(int i = 2; i <= 1000000; i++){
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    }
    for(int i = 0; i <= 1000000; i++){
        if(n == Fib[i]) return true;
    }
    return false;
}
bool checkPrimeNumbers(int n)
{
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
bool checkPerfectNumbers(int n)
{
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(i * i == n){
                sum += i;
            }
            else {
                sum += i + n/i;
            }
        }
    }
    sum -= n;
    if(sum == n) return true;
    return false;
}
void listPerfectNumbers()
{
    printf("Perfect Numbers: \n");
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(checkPerfectNumbers(Array[i][j])){
                printf("%d ", Array[i][j]);
            }
        }
    }
    printf("\n");
}
void listFibonacciNumbers()
{
    printf("Fibonacci numbers: \n");
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(Fibonacci(Array[i][j])){
                printf("%d ", Array[i][j]);
            }
        }
    }
    printf("\n");
}
void findMinMaxNumbers()
{
    int MAX = -1e9, MIN = 1e9;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            MAX = std::max(MAX, Array[i][j]);
            MIN = std::min(MIN, Array[i][j]);
        }
    }
    printf("Minimum number of Array: \n%d", MIN);
    printf("\nMaximum number of Array: \n%d\n", MAX);
}
void listPrimeNumbers()
{
    printf("Prime numbers: \n");
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(checkPrimeNumbers(Array[i][j])){
                printf("%d ", Array[i][j]);
            }
        }
    }
    printf("\n");
}
void Input()
{
    printf("Enter rows: \n");
    scanf("%d", &row);
    printf("Enter columns: \n");
    scanf("%d", &column);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            scanf("%d", &Array[i][j]);
        }
    }
}
void Output()
{
    listPerfectNumbers();
    listFibonacciNumbers();
    listPrimeNumbers();
    findMinMaxNumbers();
}
mymain
{
    // freopen(".inp","r",stdin);
    // freopen(".out","w",stdout);
    Input();
    Output();
    return 0;
}
