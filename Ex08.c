#include <stdio.h>
#include <string.h>

void reverse(char *inputString, char *reverseString)
{
    int length = strlen(inputString);
    for (int i = 0; i < length; ++i)
    {
        *(reverseString + i) = *(inputString + length - i - 1);
    }
    *(reverseString + length) = '\0';
}
int main()
{
    char inputString[100], reverseString[100];

    printf("Nhap vao chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    reverse(inputString, reverseString);
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s", reverseString);
}