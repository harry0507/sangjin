#include<stdio.h>
int main(void)
{
	int i;
	char arr[21];
	scanf("%s",&arr);
	for(int i = 0;i<20;i++)
	{
		if(arr[i]==NULL) break;
		printf("\'%c\'\n",arr[i]);	
	}
	
	
	return 0;
}
