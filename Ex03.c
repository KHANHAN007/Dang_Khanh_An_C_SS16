#include <stdio.h>

void sum(int *a, int *b, int *result)
{
    *result = *a + *b;
}
int main()
{
    int a = 5, b = 10, result;
    sum(&a, &b, &result);
    printf("%d", result);
}