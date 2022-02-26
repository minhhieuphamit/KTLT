#include<stdio.h>
#include<string.h>
#include<conio.h>


struct date
{
	int ngay, thang, nam;
};


struct SinhVien
{
	char HoTen[30];
	char MSSV[11];
	char gioitinh[10];
	char lop[8];
	float toan, ly, tin;
	date ngaysinh;
};


void Nhap1SV(SinhVien &a)
{
	printf("Nhap ho va ten sinh vien: ");fflush(stdin);
	gets(a.HoTen);
	printf("Nhap ma so sinh vien: ");fflush(stdin);
	scanf("%s", &a.MSSV);
	printf("Nhap ngay, thang, nam sinh: ");fflush(stdin);
	scanf("%d %d %d", &a.ngaysinh.ngay, &a.ngaysinh.thang, &a.ngaysinh.nam);
	printf("Nhap gioi tinh: ");fflush(stdin);
	gets(a.gioitinh);
	printf("Nhap lop hoc: ");fflush(stdin);
	gets(a.lop);

	do{
		printf("Nhap diem toan: ");fflush(stdin);
		scanf("%f", &a.toan);	
		if(a.toan<0||a.toan>10)
			printf("\nDiem vua nhap khong hop le! Vui long nhap lai!\n");
	}while(a.toan<0||a.toan>10);
	
	do{
		printf("Nhap diem hoa: ");fflush(stdin);
		scanf("%f", &a.ly);	
		if(a.ly<0||a.ly>10)
			printf("\nDiem vua nhap khong hop le! Vui long nhap lai!\n");
	}while(a.ly<0||a.ly>10);
	
	do{
		printf("Nhap diem tin: ");fflush(stdin);
		scanf("%f", &a.tin);	
		if(a.tin<0||a.tin>10)
			printf("\nDiem vua nhap khong hop le! Vui long nhap lai!\n");
	}while(a.tin<0||a.tin>10);
}


void Xuat1SV(SinhVien a)
{
	printf("Ho va ten sinh vien la: %s", a.HoTen);
	printf("\nMa so sinh vien la: %s", a.MSSV);
	printf("\nNgay sinh cua sinh vien la: %d/%d/%d", a.ngaysinh.ngay, a.ngaysinh.thang, a.ngaysinh.nam);
	printf("\nGioi tinh cua sinh vien la: %s", a.gioitinh);
	printf("\nLop hoc cua sinh vien la: %s", a.lop);
	printf("\nDiem toan cua sinh vien la: %.2f", a.toan);
	printf("\nDiem ly cua sinh vien la: %.2f", a.ly);
	printf("\nDiem tin cua sinh vien la: %.2f", a.tin);
}

void showStudent(SinhVien a[], int n)
{
	printf("\n%- 11s\t-30s\t-30s\t-30s\t-30s\t-30s\t-30s\t-30s");
}

void NhapDS(SinhVien a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap sinh vien thu %d: \n", i+1);
		Nhap1SV(a[i]);
	}
}




void XuatDS(SinhVien a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\nSinh vien thu %d: \n", i+1);
		Xuat1SV(a[i]);
	}
}


void Nhapn(int &n)
{
	printf("Nhap so luong sinh vien can nhap vao: ");
	scanf("%d", &n);
}

void timMSSV(SinhVien a[], int n)
{
    char x[11];
	printf("\n\n\nNhap ma so sinh vien can tim: ");
	gets(x);
	for(int i=0;i<n;i++)
	{
		if(strcmp(x,a[i].MSSV)==0)
		{
			Xuat1SV(a[i]);
		}
		else
			printf("\n\n Ma so sinh vien vua nhap khong ton tai.");
	}
}

int main()
{


	int n;
	Nhapn(n);
	SinhVien a[n];
	NhapDS(a,n);
	XuatDS(a,n);
	timMSSV(a,n);
	//showStudent(a,n);
	getch();

}
