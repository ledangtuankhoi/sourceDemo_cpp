
#include<stdio.h>
#include<conio.h>
int Mang[10]={10,9,8,7,6,5,4,3,2,1};
int X;
void SelectionSort(int mang[],int n)
{ 
	int i,j,tam;
	for(i=0;i<n;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
			if(mang[j]<mang[min]) min=j;
		tam=mang[i];
		mang[i]=mang[min];
		mang[min]=tam;
	}
}
void inday(int mang[],int n)
{ 
	int vt;
	for(vt=0;vt<n;vt++)
	printf("%d ",mang[vt]);
}
void main()
{
	class();
	printf("Day truoc khi sap xep\n");
	inday(Mang,10);
	SelectionSort(Mang,10);
	printf("\nDay sau khi sap xep\n");
	inday(Mang,10);
	getch();
}