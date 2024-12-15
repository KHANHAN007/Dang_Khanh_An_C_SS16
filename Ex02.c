#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b=tmp;
}
int main()
{
    int a = 5, b = 10;
    printf("Truoc khi doi:\na = %d\nb = %d",a,b);
    swap(&a, &b);
    printf("\nSau khi doi:\na = %d\nb = %d",a,b);
}