# C_Study
 一个私人仓库，用于存放学习过程中写过的代码  
Since 2025 1/28

<div align=center><img width="150" height="150" src="https://github.com/user-attachments/assets/5257846a-6d6a-41fc-85c3-65d41ea0c7c5"/></div>


### 1.SnakeGame 
一个简单的贪吃蛇小游戏，学校社团布置的一个小任务。  
写了一点思路

1.游戏界面：  
使用 CONSOLE_CURSOR_INFO 隐藏光标，避免干扰游戏画面  
通过 SetConsoleCursorPosition 定位光标位置，绘制游戏界面和游戏元素（蛇、食物等）  
2.游戏元素初始化：  
蛇的初始位置和长度（struct BODY 和 struct SNAKE），食物的位置通过随机数生成（struct FOOD）  
3.蛇的移动与控制：  
使用键盘输入控制蛇的方向（W, S, A, D 键）  
4.移动逻辑：  
蛇头移动，蛇身跟随，用数组存储蛇的身体坐标  
5.食物生成与检测：  
食物生成在随机位置，并且蛇吃到食物后会增长长度，同时加速  
6.游戏状态管理：  
判断蛇是否撞墙或撞到自己，如果发生则游戏结束  
使用 Sleep 函数控制游戏速度，蛇吃食物后会加快速度  
  
容易忽略的地方  
1.控制方向时需要避免蛇突然反转方向  
2.食物不能生成在蛇的身体上，需要确保食物生成位置是合法的  

### 2.StudentInfoSystem
一坨答辩，原本是一道作业题，试着改了一下，结果逻辑太乱，自己也看不懂了

### 3.homework
寒假自学时完成的书上作业，记录我的学习过程

### 4.homework1
开学后的第一次实操作业，很快就写完了，还睡了半节课
  
  
