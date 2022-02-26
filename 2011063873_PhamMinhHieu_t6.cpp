#include <stdio.h>
#include <string.h>
struct Sach
{
	char MaSach[10];
	char TenSach[40];
	long gia;
};

void Nhap1Sach(Sach *x)
{
	printf("Nhap ma sach: ");
	fflush(stdin);
	gets(x->MaSach);
	printf("Nhap ten sach: ");
	fflush(stdin);
	gets(x->TenSach);
	printf("Nhap gia: ");
	fflush(stdin);
	scanf("%ld", &x->gia);
}

void Xuat1Sach(Sach *x)
{
	printf("\n\t%s\t\t%s\t\t%ld", x->MaSach, x->TenSach, x->gia);
}

void Nhap1DS(Sach *x, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap thong tin sach thu %d: \n", i + 1);
		Nhap1Sach(x + i);
	}
}

void Xuat1DS(Sach *x, int n)
{
	printf("\n-----------DANH SACH TAT CAC SACH------------");
	printf("\n      Ma sach\t     Ten Sach\t     Gia sach");
	for (int i = 0; i < n; i++)
	{
		Xuat1Sach(x + i);
	}
}

void NhapSLg(int &n)
{
	printf("\nNhap so luong sach can nhap: ");
	scanf("%d", &n);
}

void TimSach(Sach *x, int n)
{
	{
		char c[10];
		int count = 0;
		printf("\n\n\nNhap ma so sach can tim: ");
		scanf("%s", &c);
		printf("\n      Ma sach\t     Ten Sach\t     Gia sach");
		for (int i = 0; i < n; i++)
		{
			if (strcmp(c, (x + i)->MaSach) == 0)
				Xuat1Sach(x + i);
		}
	}
}

void SachDatNhat(Sach *x, int n)
{
	int max = x->gia;
	for (int i = 1; i < n; i++)
		if ((x + i)->gia > max)
			max = (x + i)->gia;
	printf("\nNhung cuon sach co gia cao nhat:\n");
	printf("\n      Ma sach\t     Ten Sach\t     Gia sach");
	for (int i = 0; i < n; i++)
		if ((x + i)->gia == max)
			Xuat1Sach((x + i));
}

void LietKe(Sach *x, int n)
{
	long giasach;
	printf("\nNhap gia sach cua sach: ");
	scanf("%ld", &giasach);
	for (int i = 0; i < n; i++)
	{
		if ((x + i)->gia > giasach)
			Xuat1Sach(x + i);
	}
}
int main()
{
	int n;
	char c;
	NhapSLg(n);
	Sach *x;
	x = new Sach[n];
	Nhap1DS(x, n);
	Xuat1DS(x, n);
	TimSach(x, n);
	SachDatNhat(x, n);
	LietKe(x, n);
	return 0;
}
