#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str, char *reverseStr)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        *(reverseStr + i) = *(str + length - i - 1);
    }
    *(reverseStr + length) = '\0';
}
int countWorld(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            count++;
        }
        str++;
    }
    return count + 1;
}
void Hoa(char *str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}
void cat(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        str1++;
    }
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
int main()
{
    char chuoi[100], reverseStr[100], chuoi2[100];
    int choice;

    do
    {
        printf("\n\t\tMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh do dai chuoi\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them vao chuoi ban dau\n");
        printf("7. Thoat\n");
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
            reverseString(chuoi, reverseStr);
            printf("Chuoi dao nguoc: %s\n", reverseStr);
            break;
        case 3:
            printf("So luong tu trong chuoi: %d\n", countWorld(chuoi));
            break;
        case 4:
            printf("Nhap vao chuoi khac: ");
            fgets(chuoi2, sizeof(chuoi2), stdin);
            chuoi2[strcspn(chuoi2, "\n")] = '\0';
            if (strlen(chuoi2) < strlen(chuoi))
                printf("Chuoi 2 ngan hon chuoi 1.\n");
            else if (strlen(chuoi2) > strlen(chuoi))
                printf("Chuoi 2 dai hon chuoi 1.\n");
            else
                printf("Hai chuoi co do dai bang nhau.\n");
            break;
        case 5:
            Hoa(chuoi);
            printf("Chuoi in hoa: %s\n", chuoi);
            break;
        case 6:
            printf("Nhap vao chuoi khac de them: ");
            fgets(chuoi2, sizeof(chuoi2), stdin);
            chuoi2[strcspn(chuoi2, "\n")] = '\0';
            cat(chuoi, chuoi2);
            printf("Chuoi sau khi them: %s\n", chuoi);
            break;
        case 7:
            printf("Tam biet.\n");
            break;
        default:
            printf("Lua chon khong hop le. Nhap lai.\n");
            break;
        }
    } while (choice != 7);
}
