#include <stdio.h>

void delete(int *a, int *length, int pos)
{
    for (int i = pos; i < *length - 1; ++i)
        *(a + i) = *(a + i + 1);
    (*length)--;
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
    int pos=2;
    printf("Mang ban dau: ");
    print(a, length);
    printf("\nMang sau khi xoa: ");
    delete (a, &length, pos);
    print(a, length);
}