//#include<stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n",a++);//1�� ���� ���ϰ� ����
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);//1�� ���� ���ϰ� ����
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a,b;
//	printf("a,b�� ���� �Է��ϼ���");
//	scanf("%d%d",&a,&b);
//	printf("%d+%d=%d\n",a,b,a + b);
//	printf("%d-%d=%d\n",a,b,a - b);
//	printf("%d*%d=%d\n",a,b,a * b);
//	printf("%d/%d=%d\n",a,b,a / b);
//	printf("%d%%%d=%d",a,b,a % b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int first = 1 % 4;
//	printf("%d=1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d=5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d=4%%2\n", third);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d%d", &number1, &number2);
//	printf("%d=number1%%4\n", number1 % 4);
//	printf("%d=number2%%3\n", number2 % 3);
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d=1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d=2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d=3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d=4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d=5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d=6%%3", sixth);
//	return 0;
//}

//����2
//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("number�� �Է��ϼ���");
//	scanf("%d", &number);
//	printf("%d=number%%50", number % 50);
//}

//#include<stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d=6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d=6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d=6/4", data3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1/ number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//} //�ΰ��� ���ڸ� �Է¹޾Ƽ� ������ ���� ����

//#include<stdio.h>
//int main()
//{
//	int coin;
//	printf("���� �Է����ּ���.(��)");
//scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	coin = coin % 1000;
//	printf("������ %d��,", coin10000);
//	printf("5000���� %d��", coin5000);
//	printf("1000����%d��", coin1000);
//	printf("�������� �����Դϴ�.");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int price;
//	printf("���� ������ �Է��ϼ���.");
//	scanf("%d", &price);
//	int remain = 1000 - price;
//	int coin500 = remain / 500;
//	remain = remain % 500;
//	int coin100 = remain / 100;
//	remain = remain % 100;
//	int coin50 = remain / 50;
//	remain = remain % 50;
//	int coin10 = remain / 10;
//	remain = remain % 10;
//	printf("�Ž������� 500�� %d��, 100�� %d��, 50�� %d��, 10�� %d��, �������� %d���Դϴ�. ",coin500,coin100,coin50,coin10,remain);
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù���� : %d\n", randInt);
//	printf("�������� : %d", nextInt);
//	return 0;
//} 
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int randInt = rand() % 10;
	int nextInt = rand() % 10+50;
	printf("ù���� : %d\n", randInt);//0~9
	printf("�������� : %d", nextInt);//50~59--rand()�� 1~10���� ���� ����or0~9���� ����
}

//���� �ڵ�� ������ ������ ���� ����� �ݺ������� �Ʒ��� �ڵ�� ���� ���ϸ� �Ҵ�ǰ� �̸� ����Ѵ�?