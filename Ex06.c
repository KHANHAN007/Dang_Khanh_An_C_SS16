#include <stdio.h>

void found(int *a, int length, int *pos, int value)
{
    for (int i = 0; i < length;++i)
    {
        if(*(a+i)==value)
            *pos = i;
    }
}
int main()
{
    int a[] = {3, 2, 5, 1, 10, 40, 22, 11};
    int length = sizeof(a) / sizeof(*a);

    int pos, value = 22;
    found(a, length, &pos, value);
    printf("%d", pos);
}