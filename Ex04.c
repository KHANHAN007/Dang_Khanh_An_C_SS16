#include <stdio.h>

void print(int *a, int length)
{
    for(int i=0;i<length;++i)
    {
        printf("%d ", *(a + i));
    }
}
int main()
{
    int a[] = {3, 2, 5, 1, 10, 40, 22, 11};
    int length = sizeof(a) / sizeof(*a);
    print(a, length);
}