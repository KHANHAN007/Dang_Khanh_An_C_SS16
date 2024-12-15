#include <stdio.h>

void updateArr(int *a, int pos, int newValue, int length)
{
    if(pos>=0 && pos< length)
    {
        *(a + pos) = newValue;
    }
    else
        printf("Vi tri %d khong hop le.\n", pos);
}
void print(int *a, int length)
{
    for (int i = 0; i < length;++i)
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

    int pos = 2;
    int newValue = 12;
    updateArr(a, pos, newValue, length);
    printf("\nMang sau khi cap nhat: ");
    print(a, length);
}