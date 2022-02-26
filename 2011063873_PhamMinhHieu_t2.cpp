#include <stdio.h>

void NhapMaTran(int a[][100], int d, int c)
{
   for (int i = 0; i < d; i++)
      for (int j = 0; j < c; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}

void XuatMaTran(int a[][100], int d, int c)
{
   for (int i = 0; i < d; i++)
   {
      for (int j = 0; j < c; j++)
         printf("%4d\t", a[i][j]);
      printf("\n");
   }
}

int TongCacSoChan(int a[][100], int d, int c)
{
   int sum = 0;
   for (int i = 0; i < d; i++)
      for (int j = 0; j < c; j++)
         if (a[i][j] % 2 == 0)
            sum += a[i][j];
   return sum;
}

int XuatCacPtuDong(int a[][100], int d, int c, int x)
{
   for (int j = 0; j < c; j++)
      printf("%4d", a[x - 1][j]);
}
void TrungBinhCot(int a[][100], int d, int &c, int k)
{
   printf("\nNhap cot can tinh");
   scanf("%d", &k);
   long s = 0;
   for (int i = 0; i < d; i++)
   {
      s = s + a[i][k - 1];
   }
   float f;
   f = s / c;
   printf("\nTBC: %.2f", s / c);
}

int main()
{
   int a[100][100];
   int d, c, x;
   printf("Nhap so dong: ");
   scanf("%d", &d);
   printf("Nhap so cot: ");
   scanf("%d", &c);
   printf("Nhap vao ma tran:\n");
   NhapMaTran(a, d, c);
   XuatMaTran(a, d, c);
   printf("Tong cac so chan la: %d", TongCacSoChan(a, d, c));
   printf("\nNhap dong can xuat: ");
   scanf("%d", &x);
   printf("\nCac phan tu dong %d la: ", x);
   XuatCacPtuDong(a, d, c, x);
   TrungBinhCot(a, d, c, x);
   return 0;
}
