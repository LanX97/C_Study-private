#include<stdio.h>
#include<string.h>
#define KEY 0xFA
/*
f9   设置与取消断点
f5/f10   开始调试
shift + f5   放弃调试
f10   逐过程执行
f11   逐语句执行（可进入函数内部）*/

int maina()
{
	printf("%c", (char)KEY);
	return 0;
}
