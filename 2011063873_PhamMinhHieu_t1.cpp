#include <stdio.h>

void NhapMang(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Nhap so thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%4d", a[i]);
}

int TimVTMax(int a[], int n)
{
	int i, vtmax = 0;
	int max = a[0];
	for (i = 0; i < n; i++)
		if (a[i] > max)
		{
			max = a[i];
			vtmax = i;
		}
	return vtmax;
}

void XoaPhanTu(int a[], int &n, int pos)
{
	if (n <= 0)
		return;
	if (pos < 0)
	{
		pos = 0;
	}
	for (int i = pos; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	--n;
}

int DuongCuoiCung(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] > 0)
			return a[i];
		return -1;
	}
}

int ViTriXCuoi(int a[], int n, int x)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == x)
			return i + 1;
	}
	return -1;
}

int main()
{
	int n, pos, x;

	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if (n <= 0 || n > 100)
			printf("Nhap sai, nhap lai.");
	} while (n <= 0 || n > 100);
	int a[n];
	printf("\nNHAP MANG\n");
	NhapMang(a, n);

	printf("\nXUAT MANG");
	XuatMang(a, n);

	printf("\n\nTIM VI TRI");
	printf("\nVi tri cua gia tri lon nhat la: %5d", TimVTMax(a, n));

	printf("\n\nXOA PHAN TU");
	XoaPhanTu(a, n, pos);
	printf("\nMang sau khi xoa: ");
	XuatMang(a, n);

	printf("\n\nTIM VI TRI PHAN TU DUONG CUOI CUNG ");
	printf("\nSo duong cuoi cung la: %d", DuongCuoiCung(a, n));
	printf("\n\nNhap gia tri can tim : ");
	scanf(" %d", &x);
	int kq = ViTriXCuoi(a, n, x);
	printf("Vi tri thoa man yeu cau bai toan la: %d", kq);

	return 0;
}
