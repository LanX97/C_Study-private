#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<wchar.h>
#include<ctype.h>
#include"common.h"



int main()
{	
	WelcomeToGame();
	SCCI();
	while (1)
	{
		UIinfo();
		initSnake();		
		initFood();			
		initUIFood();
		initUISnake();		
		PlayGame();
		Gameover();
		reset();
	}
	system("pause");
	return EXIT_SUCCESS;
}




void PlayGame(void)
{

	while (1)
	{
		if (snake.body[0].x == WIDE || snake.body[0].y == HIGH || snake.body[0].x == 0 || snake.body[0].y == 0)			//边界碰撞判定
			return;

		for (int i = 1; i < snake.size; i++)																			//蛇身体碰撞判定
		{
			if (snake.body[0].x == snake.body[i].x && snake.body[0].y == snake.body[i].y)
				return;
		}

		if (snake.body[0].x == food.x && snake.body[0].y == food.y)                                                     //吃到食物判定
		{
			SnakeState = GetFood;			//吃到状态
			snake.size++;
			initFood();
			initUIFood();
			score += 100;
			if (speed > 90)					//加速，但不至于太快
				speed -= 10;
			SCCP(76, 4);					//更新分数与长度
			printf("%d", score);
			SCCP(76, 6);
			printf("%d", snake.size);
			SCCP(0, HIGH + 2);
		}
		Control();
		initUISnake();
		SnakeState = NotGetFood;
		Sleep(speed);
	}
}


void SCCI(void)
{
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(CONSOLE_CURSOR_INFO);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}


void SCCP(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void WelcomeToGame(void)
{
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	SCCP(38, 12);
	printf("欢迎来到贪吃蛇小游戏\n");
	SCCP(40, 20);
	system("pause");
	system("cls");
	SCCP(38, 12);
	printf("使用W. S. A. D控制蛇的移动\n");
	SCCP(40, 20);
	system("pause");
	system("cls");
}


void UIinfo(void)
{
	int i;

	for (i = 0; i <= WIDE; i++)
	{
		SCCP(i, 0);
		putchar('-');
	}

	for (i = 0; i <= HIGH; i++)
	{
		SCCP(0, i);
		putchar('|');
	}

	for (i = 0; i <= HIGH; i++)
	{
		SCCP(WIDE, i);
		putchar('|');
	}

	for (i = 0; i <= WIDE; i++)
	{
		SCCP(i, HIGH);
		putchar('-');
	}


	SCCP(70, 4);
	printf("分数：");
	SCCP(76, 4);
	printf("%d", score);
	SCCP(70, 6);
	printf("长度：");
	SCCP(76, 6);
	printf("%d", snake.size);
	SCCP(70, 8);
	printf("历史最高分：");
	GetHistoryRecord();
	SCCP(82, 8);
	printf("%d", historyrecord);
	SCCP(0, HIGH + 2);
}


void initSnake(void)
{
	snake.size = 2;

	snake.body[0].x = WIDE / 2;
	snake.body[0].y = HIGH / 2;

	snake.body[1].x = WIDE / 2 - 1;
	snake.body[1].y = HIGH / 2;

	return;
}


void initFood(void)
{
	srand(time(NULL));
	food.x = rand() % (WIDE - 1) + 1;
	food.y = rand() % (HIGH - 1) + 1;

	return;
}


void initUISnake(void)
{
	for (int i = 0; i < snake.size; i++) 
	{	
		
		SCCP(snake.body[i].x, snake.body[i].y);

		if (i == 0)
			putchar('@');
		else
			putchar('*');
	}

	if (SnakeState = NotGetFood)						//未吃食物时空格覆盖尾巴
	{
		SCCP(SnakeTail_x, SnakeTail_y);
		putchar(' ');
	}

	SCCP(0, HIGH + 2);
	return;
}

void initUIFood(void)
{
	SCCP(food.x, food.y);
	putchar('#');
}


void Control()
{

	if (_kbhit())
	{
		key = _getch();
		key = toupper(key);
	}

	switch (key) 
	{
		case 'W':
			if (currentstate == 'S')			//防止走回头路线
				break;
			kx = 0; 
			ky = -1; 
			currentstate = 'W';
			break;
		case 'S':
			if (currentstate == 'W')
				break;
			kx = 0; 
			ky = 1; 
			currentstate = 'S';
			break;
		case 'A':
			if (currentstate == 'D')
				break;
			kx = -1; 
			ky = 0; 
			currentstate = 'A';
			break;
		case 'D':
			if (currentstate == 'A')
				break;
			kx = 1; 
			ky = 0; 
			currentstate = 'D';
			break;
		default: 
			break;
	}

	SnakeTail_x = snake.body[snake.size - 1].x;			//获取尾部坐标
	SnakeTail_y = snake.body[snake.size - 1].y;

	for (int i = snake.size-1; i > 0; i--)				//移动后各部分坐标
	{
		snake.body[i].x = snake.body[i - 1].x;
		snake.body[i].y = snake.body[i - 1].y;
	}

	snake.body[0].x += kx;
	snake.body[0].y += ky;

}


void GetHistoryRecord(void)
{
	fp = fopen("record.dat", "rb +");
	if (fp == NULL)
		return;
	fread(phistoryrecord, sizeof(int), 1, fp);
	fclose(fp);
}


void WriteistoryRecord(void)
{
	if (historyrecord < score)
	{
		SCCP(26, 6);
		printf("新纪录！");
		SCCP(0, HIGH + 2);
		fp = fopen("record.dat", "wb +");
		fwrite(pscore, sizeof(int), 1, fp);
		fclose(fp);
	}
}


void Gameover(void)
{
	WriteistoryRecord();
	SCCP(22, 8);
	printf("再来一局？(Y/N)");
	SCCP(25, 10);
	printf("游戏结束");
	SCCP(0, HIGH + 2);
	userinput = _getch();
	userinput = toupper(userinput);
	while (1)
	{
		if (userinput == 'Y') {
			system("cls");
			break;
		}
		else if(userinput == 'N')
			exit(0);
		else
		{
			SCCP(0, HIGH + 1);
			printf("请输入Y或N");
			SCCP(0, HIGH + 2);
			userinput = _getch();
		}
	}
}


void reset(void)
{
	for (int i = 0; i < snake.size; i++)
	{
		snake.body[i].x = 0;
		snake.body[i].y = 0;
	}
	 speed = 200;
	 score = 0;
	 key = 'D'; 
	 currentstate = 'D';
	 kx = 0, ky = 0;
	 SnakeTail_x = 0, SnakeTail_y = HIGH + 1;
	 historyrecord = 0;
	 snake.size = 2;

}


