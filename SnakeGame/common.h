#ifndef _COMMON_H
#define _COMMON_H

#define WIDE 60
#define HIGH 20

/*数据类型定义*/

struct BODY					//每节身体坐标
{
	int x;
	int y;
};

struct SNAKE				//一条蛇
{
	struct BODY body[WIDE * HIGH];
	int size;
}snake;

struct FOOD					//食物坐标
{
	int x;
	int y;
}food;

enum State { GetFood, NotGetFood };

/*全局变量定义*/

FILE* fp;
COORD coord;
struct SNAKE snake;
struct FOOD food;
enum State SnakeState;		                                   //当前蛇状态
int speed = 200;                                               //速度
int score = 0, *pscore = &score;				               //得分
char key = 'D', currentstate = 'D', userinput;				   //当前移动状态
int kx = 0, ky = 0;											   //蛇头坐标的移动距离
int SnakeTail_x = 0, SnakeTail_y = HIGH + 1;	   			   //蛇尾坐标
int historyrecord = 0, *phistoryrecord = &historyrecord;	   //记录历史记录


/*函数声明*/

void WelcomeToGame(void);			//输出初始界面
void reset(void);					//重置参数
void UIinfo(void);					//输出图形界面
void SCCP(int x, int y);			//设置光标位置函数
void SCCI(void);					//设置光标信息
void initSnake(void);				//初始化蛇位置
void initFood(void);				//初始化食物位置
void initUISnake(void);				//输出蛇图像
void initUIFood(void);				//输出食物图像
void PlayGame(void);				//游戏主体与规则
void Control();						//移动控制
void GetHistoryRecord(void);		//读取文件中的历史记录
void WriteistoryRecord(void);		//写入历史记录到文件
void Gameover(void);				//游戏结束后判断继续游玩还是结束程序

#endif
