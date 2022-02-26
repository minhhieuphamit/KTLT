#include <stdio.h>
#define MAX 100

void NhapMang(int a[], int n)
{
    if (n == 0)
        return;
    NhapMang(a, n - 1);
    printf("Nhap phan tu thu %d: ", n - 1);
    scanf("%d", &a[n - 1]);
}

void XuatMang(int a[], int n)
{
    if (n == 0)
        return;
    XuatMang(a, n - 1);
    printf("%d\t", a[n - 1]);
}

int Tong(int a[], int n)
{
    if (n == 1)
        return a[0];
    return a[n - 1] + Tong(a, n - 1);
}

int TimMax(int a[], int n)
{
    if (n == 1)
        return a[0];
    int max = TimMax(a, n - 1);
    if (max > a[n - 1])
        return max;
    else
        return a[n - 1];
}

int ChanDau(int a[], int i, int n)
{
    if (i == n)
        return -1;
    if (a[i] % 2 == 0)
        return a[i];
    return ChanDau(a, i + 1, n);
}

int main()
{
    int a[MAX], n;
    // Nhap so phan tu
    printf("Nhap vao so phan tu mang: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n > MAX)
            printf("\nBan nhap sai gia tri! Moi nhap lai\n");
    } while (n <= 0 || n > MAX);

    // Nhap mang
    printf("\n\nNHAP MANG\n");
    NhapMang(a, n);

    // Xuat mang
    printf("\n\nMANG SAU KHI NHAP LA:\n");
    XuatMang(a, n);

    // Tinh tong
    printf("\n\n\nTONG PHAN TU CO TRONG MANG LA: %d\n", Tong(a, n));

    // Tim max
    printf("PHAN TU CO GIA TRI LON NHAT TRONG MANG LA: %d\n", TimMax(a, n));

    // Tim so chan dau tien
    if (ChanDau(a, 0, n) == -1)
        printf("MANG VUA NHAP KHONG CO GIA TRI CHAN!!!\n");
    else
        printf("GIA TRI CHAN DAU TIEN XUAT HIEN TRONG MANG LA: %d\n", ChanDau(a, 0, n));

    return 0;
}
