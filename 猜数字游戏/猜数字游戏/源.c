#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu(){
	int choice = 0;
	printf("******************************\n");
	printf("*******  1:start game  *******\n");
	printf("******  0:end the game  ******\n");
	printf("******************************\n");
	printf("make your choice:\n");
	scanf("%d", &choice);
	return choice;
}
void Game(){
	//srand(整数)：设置随机种子随机序列即每次都不相同
	//time(0)：获取当前的时间戳(以1970年1月1日0时0分0秒为基准，计算当前时刻和基准时间的秒数之差)；
	//unsigned:类型的强制转换；
	srand((unsigned int)time(0));
	//由程序取一个随机数（1,100）；
	//库函数 rand:功能产生一个随机的整数（0，randmax（32767））；
	int result = rand() % 100 + 1;
	while (1){
		printf("input your number:\n");
		int num = 0;
		scanf("%d", &num);
		if (num < result){
			printf("small!\n");
		}
		else if (num>result){
			printf("big!\n");
		}
		else{
			printf("Bingo congratulations!\n");
			break;
		}
	}
}
int main(){
	//需要一个循环不确定循环结束条件时候，可以写个while(1)
	while (1){
		//创建用户的选择菜单
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if(choice == 0){
			printf("goodbye\n");
			break;
		}
		else{
			printf("Unvalidated Input!\n");
		}

	}

}