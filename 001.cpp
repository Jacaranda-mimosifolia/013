//�ж��Ƿ�Ϊ����
#include<stdio.h>
int main()
{
	int i,n=0;
	for (;;)
	{
		n++;
		printf("���������:");
		scanf("%d",&i);
		getchar();
		if (i%4==0)//����29/28
			printf("����\n"); 
		else if (i%4!=0)
			printf("������\n");
		else if (n>5)
			break;
	}
	return 0;
 } 
