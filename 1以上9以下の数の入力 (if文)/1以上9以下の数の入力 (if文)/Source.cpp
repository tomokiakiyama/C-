#include<stdio.h>
int main(void)
{
	int x;

	printf("1以上9以下の数を入力してください\n");
	scanf_s("%d", &x);

	for (; x < 1 || x>9;)
	{
		printf("1以上9以下の数を入力してください\n");
		scanf_s("%d", &x);
	}

	return 0;
}