#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//menu - 打印菜单
void menu()
{
	printf("******************************\n");
	printf("********** 1 - 开始 **********\n");
	printf("********** 0 - 退出 **********\n");
	printf("******************************\n");
}
//game - 猜数字
void game()
{
	
	int ret = rand() % 100 + 1; //生成1-100随机数
	//printf("%d",ret);
	int guess = 0;
	while (1)
	{
		printf("请猜数字(1-100):>");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("猜大了!\n");
		}
		else if (guess < ret)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL)); //随机数生成器
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);

	return 0;
}