#include <stdio.h>

void nhap(int *arr, int *length)
{
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", length);
    printf("Nhap vao cac phan tu:\n");
    for (int i = 0; i < *length; i++)
    {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", (arr + i));
    }
}
void xuat(int *arr, int length)
{
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int sum(int *arr, int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int max(int *arr, int length)
{
    int max = *arr;
    for (int i = 1; i < length; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}
int main()
{
    int arr[100], length = 0;
    int choice;

    do
    {
        printf("\n\t\tMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            nhap(arr, &length);
            break;
        case 2:
            xuat(arr, length);
            break;
        case 3:
            printf("Do dai mang: %d\n", length);
            break;
        case 4:
            printf("Tong cac phan tu trong mang: %d\n", sum(arr, length));
            break;
        case 5:
            printf("Phan tu lon nhat trong mang: %d\n", max(arr, length));
            break;
        case 6:
            printf("Tam biet.\n");
            break;
        default:
            printf("Lua chon khong hop le. Nhap lai.\n");
            break;
        }
    } while (choice != 6);
}
