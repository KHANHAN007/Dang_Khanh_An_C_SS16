#include <stdio.h>

void add(int *a, int *length, int value, int position)
{
    for (int i = *length; i > position; --i)
    {
        *(a + i) = *(a + i - 1);
    }
    *(a + position) = value;
    (*length)++;
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
    printf("Mang ban dau: ");
    print(a, length);
    int value = 6;
    int position = 2;
    add(a, &length, value, position);
    printf("\nMang sau khi them: ");
    print(a, length);

}
