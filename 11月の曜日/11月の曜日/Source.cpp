#include<stdio.h>
int main(void)
{
	int num;

	scanf_s("%d", &num);

	if (num >= 1 && num <= 30) {

		if (num % 7 == 6) {
			printf("11月%d日は日曜日\n", num);
		}
		else if (num % 7 == 0) {
			printf("11月%d日は月曜日\n", num);
		}
		else if (num % 7 == 1) {
			printf("11月%d日は火曜日\n", num);
		}
		else if (num % 7 == 2) {
			printf("11月%d日は水曜日\n", num);
		}
		else if (num % 7 == 3) {
			printf("11月%d日は木曜日\n", num);
		}
		else if (num % 7 == 4) {
			printf("11月%d日は金曜日\n", num);
		}
		else if (num % 7 == 5) {
			printf("11月%d日は土曜日\n", num);
		}
	}
	else
		printf("%d日は11月にはありません\n", num);

	return 0;
}

