//判断是否为闰年
#include<stdio.h>
int main()
{
	int i,n=0;
	for (;;)
	{
		n++;
		printf("请输入年份:");
		scanf("%d",&i);
		getchar();
		if (i%4==0)//闰年29/28
			printf("闰年\n"); 
		else if (i%4!=0)
			printf("非闰年\n");
		else if (n>5)
			break;
	}
	return 0;
 } 
