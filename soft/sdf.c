
int main()
{
	int d,m,y;
	printf("Nhap ngay: ");
	scanf("%d", &d);
	printf("Nhap thang: ");
	scanf("%d", &m);
	printf("Nhap nam: ");
	scanf("%d", &y);
	NextDay(d, m, y);

    return 0;
}
void NextDay(int d, int m, int y)
{
	int songay;
	bool NamNhuan = false;
	if ((y % 400 == 0) || ((y % 4) && (y % 100 != 0)))
		NamNhuan = true;
	switch (m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			songay = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			songay = 30;
			break;
		case 2:
			if (NamNhuan)
				songay = 29;
			else
				songay = 28;
			break;
		default:
			printf("Thang khong hop le");
	}
	if (d>songay)
		printf("Ngay khong hop le");
	else
	{
		d++;
		if (d > songay)
		{
			d = 1;
			m++;
			if (m > 12)
			{
				m = 1;
				y++;
			}
		}
		printf("Ngay ke tiep la: %d/%d/%d",d,m,y);
	}
}