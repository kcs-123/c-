//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()//문제4
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;//mymoney는 1000~10000원
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500; //coin500은 0~1500
//	int coin100 = rand() % 5000; //coin100은 0~4999
//	coin100 = coin100 / 100 * 100;//coin100은 0~4900
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개 있습니다.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 1;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 150;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 0;
//	if (!apple)//!apple은 apple이 0이 아닐 때 0이고 0일때 0이 아니다--반대이므로
//	{
//		printf("apple은 하나도 없습니다.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 10;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//	int apple = 0;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//문제1
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력하세요: ");
//	scanf("%d", &input);
//	if(input==0)
//	{
//		printf("0입니다.");
//	}
//	else if (input > 0)
//	{
//		printf("양수입니다");
//	}
//	else 
//	{
//		printf("음수입니다.");
//	}
//	return 0;
//}
//문제2
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력하세요: ");
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("input은 두자리 숫자입니다");
//	}
//	else
//	{
//		printf("input은 두자리 숫자가 아닙니다.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150이상입니다.");
//	}
//	if (height > 170);
//	{ printf("키가 170이상입니다."); } //else if와는 다르게 독립적으로 시행
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160이상입니다.\n");
//	}
//	return 0;
//} //else if의 경우 앞의 조건문이 거짓이어야 실행된다.
//문제3
//#include<stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요");
//	scanf("%d", &y_age);
//	if (y_age > 0)
//	{
//		printf("전체연령가 등급을 시청할 수 있습니다.\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가 등급을 시청할 수 있습니다.\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가 등급을 시청할 수 있습니다.");
//	}
//	return 0;
//}
//문제4
#include<stdio.h>
int main()
{
	char initial;
	printf("문자를 입력하세요: ");
	scanf("%c", &initial);
	if (initial >= 0x61 && initial)
	{
		printf("입력한 문자는 소문자입니다.");
	}
	else
	{
		printf("입력한 문자는 대문자입니다");
	}
	return 0;
}