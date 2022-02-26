#include <stdio.h>
#include <string.h>

char c[50];
int i,n,j;

void chuanhoa()
{
	n=strlen(c);
	for(j=0;j<n;j++)
		if(c[j]!=' ' && c[j]>='A' && c[j]<='Z') c[j]+=32;
	for(i=0;i<n-1;i++)
		if(c[i]==' ' ) c[i+1]-=32;
		if(c[0]>='a' && c[0]<='z') c[0]=c[0]-32;
}

int main()
{
	printf("Nhap vao chuoi: ");
	gets(c);
	chuanhoa();
	puts(c);
}

