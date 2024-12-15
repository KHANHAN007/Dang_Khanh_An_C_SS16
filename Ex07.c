#include <stdio.h>

void insertionSort(int *a, int length)
{
    for (int i = 0; i < length; ++i)
    {
        int tmp = *(a + i), j = i - 1;
        while (j >= 0 && *(a + j) > tmp)
        {
            *(a + j + 1) = *(a + j);
            --j;
        }
        *(a + j+1) = tmp;
    }
}
void print(int *a, int length)
{
    for (int i = 0; i < length; ++i)
    {
        printf("%d ", *(a + i));
    }
}
int main()
{
    int a[] = {3, 2, 5, 1, 10, 40, 22, 11};
    int length = sizeof(a) / sizeof(*a);
    insertionSort(a, length);
    print(a, length);
}