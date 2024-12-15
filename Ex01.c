#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    printf("Dia chi cua bien: %d", ptr);
    printf("\nDia chi cua bien: %d", &a);
    printf("\nGia tri cua bien: %d", a);
    printf("\nGia tri cua bien: %d", *ptr);
}