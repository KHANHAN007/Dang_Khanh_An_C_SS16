#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkPrime(int n)
{
    if (n < 2)
        return false;
    if (n < 4)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    int i = 5;
    while (i * i <= n)
    {
        if (!(n % i) || !(n % (i + 2)))
            return false;
        i += 6;
    }
    return true;
}
void reverseArr(int *a, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = *(a + i);
        *(a + i) = *(a + n - i - 1);
        *(a + n - i - 1) = temp;
    }
}
void tang(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}
void giam(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) < *(a + j))
            {
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}
void printEven(int *a, int n)
{
    printf("Cac so chan trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            printf("%d ", *(a + i));
        }
    }
    printf("\n");
}
void printPrime(int *a, int n)
{
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(*(a + i)))
        {
            printf("%d ", *(a + i));
        }
    }
    printf("\n");
}
int found(int *a, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int *a, n, choice, x;

    do
    {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap vao so phan tu trong mang: ");
            scanf("%d", &n);
            a = (int *)malloc(n * sizeof(int));
            printf("Nhap cac phan tu: \n");
            for (int i = 0; i < n; i++)
            {
                printf("a[%d] = ", i);
                scanf("%d", a + i);
            }
            break;
        case 2:
            printEven(a, n);
            break;
        case 3:
            printPrime(a, n);
            break;
        case 4:
            reverseArr(a, n);
            printf("Mang sau khi dao nguoc: ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", *(a + i));
            }
            printf("\n");
            break;
        case 5:
            printf("\nMENU CON: Sap xep mang\n");
            printf("1. Tang dan\n");
            printf("2. Giam dan\n");
            printf("Lua chon cua ban: ");
            int subChoice;
            scanf("%d", &subChoice);
            if (subChoice == 1)
            {
                tang(a, n);
                printf("Mang sau khi sap xep tang dan: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", *(a + i));
                printf("\n");
            }
            else if (subChoice == 2)
            {
                giam(a, n);
                printf("Mang sau khi sap xep giam dan: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", *(a + i));
                printf("\n");
            }
            break;
        case 6:
            printf("Nhap phan tu can tim: ");
            scanf("%d", &x);
            int index = found(a, n, x);
            if (index != -1)
                printf("Phan tu %d duoc tim thay tai vi tri %d.\n", x, index);
            else
                printf("Phan tu %d khong ton tai trong mang.\n", x);
            break;
        case 7:
            printf("Thoat chuong trinh...\n");
            free(a); 
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);
}
