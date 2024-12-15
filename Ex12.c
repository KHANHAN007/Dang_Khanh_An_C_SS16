#include <stdio.h>
#include <string.h>
#include <ctype.h>

int demChuaCai(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (isalpha(*str))
        {
            count++;
        }
        str++;
    }
    return count;
}
int demSo(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (isdigit(*str))
        {
            count++;
        }
        str++;
    }
    return count;
}
int demKyTuDacBiet(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (!isalpha(*str) && !isdigit(*str) && *str != ' ')
        {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char chuoi[100];
    int choice;

    do
    {
        printf("\n\t\tMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Nhap vao chuoi: ");
            fgets(chuoi, sizeof(chuoi), stdin);
            chuoi[strcspn(chuoi, "\n")] = '\0';
            break;
        case 2:
            printf("Chuoi ban da nhap: %s\n", chuoi);
            break;
        case 3:
            printf("So luong chu cai trong chuoi: %d\n", demChuaCai(chuoi));
            break;
        case 4:
            printf("So luong chu so trong chuoi: %d\n", demSo(chuoi));
            break;
        case 5:
            printf("So luong ky tu dac biet trong chuoi: %d\n", demKyTuDacBiet(chuoi));
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
