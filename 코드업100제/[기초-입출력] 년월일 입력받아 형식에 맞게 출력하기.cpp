#include<stdio.h>
int main(void)
{
	int year, month, day;
	scanf("%d.%d.%d",&year,&month, &day);
	printf("%04d.%02d.%d",year,month,day);
	return 0;
}
