#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	float x, y;
	int W, Wa, Wb, Wc, Wd;
	char area;

	srand((unsigned)time(NULL));

	printf("请输入你现在的x坐标：");
	scanf("%f", &x);
	printf("请输入你现在的y坐标：");
	scanf("%f", &y);

	if (x>0 && x<779 && y>481 && y<562) {
		printf("你正在A区，小心地雷！\n");
		area = 'A';
	}
	else if(x>0 && x<155 && y>160 && y<481){
		printf("你正在B区，小心有陷阱！\n");
		area = 'B';
	}
	else if (x>0 && x<779 && y>0 && y < 160) {
		printf("你正在C区，小心敌人埋伏！\n");
		area = 'C';
	}
	else if (x>457 && x<779 && y>160 && y<481) {
		printf("你正在D区，可以补充武器！\n");
		area = 'D';
	}
	else if (x>155 && x<457 && y>160 && y<481) {
		printf("你正在O区，快去解救人质！\n");
		area = 'O';
	}
	else if (x<0 || x>779 || y<0 || y>562) {
		printf("你落在了任务区外！\n");
		area = 'P';
	}
	else {
		printf("你落在了区域边界电网上！\n");
		area = 'P';
	}

	switch (area) {
		case 'A':
			printf("开始人质解救任务...\n");
			printf("你正在A区，遇到了A区守卫。转动赌盘进入O区开始解救人质...\n");

			printf("请按W键产生你的赌盘数字：");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("你的赌盘数字为：%d\n", W);
					break;
				}else {
					printf("请按W键产生你的赌盘数字：");
				}
			}

			printf("请按G键产生A区守卫的赌盘数字：");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wa = rand() % 10 + 80;
					printf("A区守卫的赌盘数字为：%d\n", Wa);
					break;
				}
				else {
					printf("请按G键产生A区守卫的赌盘数字：");
				}
			}

			if (W >= Wa)
				printf("成功进入人质O区，解救人质成功！");
			else
				printf("地雷爆炸，任务失败！");

			break;

		case 'B':
			printf("开始人质解救任务...\n");
			printf("你正在B区，遇到了B区守卫。转动赌盘进入O区开始解救人质...\n");

			printf("请按W键产生你的赌盘数字：");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("你的赌盘数字为：%d\n", W);
					break;
				}
				else {
					printf("请按W键产生你的赌盘数字：");
				}
			}

			printf("请按G键产生B区守卫的赌盘数字：");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wb = rand() % 11 + 45;
					printf("B区守卫的赌盘数字为：%d\n", Wb);
					break;
				}
				else {
					printf("请按G键产生B区守卫的赌盘数字：");
				}
			}

			if (W >= Wb)
				printf("成功进入人质O区，解救人质成功！");
			else
				printf("掉入陷阱，任务失败！");

			break;

		case 'C':
			printf("开始人质解救任务...\n");
			printf("你正在C区，遇到了C区守卫。转动赌盘进入O区开始解救人质...\n");

			printf("请按W键产生你的赌盘数字：");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("你的赌盘数字为：%d\n", W);
					break;
				}
				else {
					printf("请按W键产生你的赌盘数字：");
				}
			}

			printf("请按G键产生C区守卫的赌盘数字：");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wc = rand() % 10 + 60;
					printf("B区守卫的赌盘数字为：%d\n", Wc);
					break;
				}
				else {
					printf("请按G键产生C区守卫的赌盘数字：");
				}
			}

			if (W >= Wc)
				printf("成功进入人质O区，解救人质成功！");
			else
				printf("遭到伏击，任务失败！");

			break;

		case 'D':
			printf("开始人质解救任务...\n");
			printf("你正在D区，遇到了D区守卫。转动赌盘进入O区开始解救人质...\n");

			printf("请按W键产生你的赌盘数字：");
			while (1) {
				if ('W' == getchar() || 'w' == getchar()) {
					W = rand() % 100;
					printf("你的赌盘数字为：%d\n", W);
					break;
				}
				else {
					printf("请按W键产生你的赌盘数字：");
				}
			}

			printf("请按G键产生D区守卫的赌盘数字：");
			while (1) {
				if ('G' == getchar() || 'g' == getchar()) {
					Wd = rand() % 10 + 10;
					printf("D区守卫的赌盘数字为：%d\n", Wd);
					break;
				}
				else {
					printf("请按G键产生D区守卫的赌盘数字：");
				}
			}

			if (W >= Wd)
				printf("成功进入人质O区，解救人质成功！");
			else
				printf("武器丢失，任务失败！");

			break;

		case 'O':
			printf("任务完成，救出人质！");
			break;
		case 'P':
			printf("任务失败！");
			break;
	}

	return 0;
}