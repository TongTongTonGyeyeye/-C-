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
	//srand(����)�������������������м�ÿ�ζ�����ͬ
	//time(0)����ȡ��ǰ��ʱ���(��1970��1��1��0ʱ0��0��Ϊ��׼�����㵱ǰʱ�̺ͻ�׼ʱ�������֮��)��
	//unsigned:���͵�ǿ��ת����
	srand((unsigned int)time(0));
	//�ɳ���ȡһ���������1,100����
	//�⺯�� rand:���ܲ���һ�������������0��randmax��32767������
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
	//��Ҫһ��ѭ����ȷ��ѭ����������ʱ�򣬿���д��while(1)
	while (1){
		//�����û���ѡ��˵�
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