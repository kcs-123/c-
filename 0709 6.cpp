//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//outer�� �� �� �����ְ�, inter1����+inter2����==���� ĭ ��, inter1���� ����
//#include<stdio.h>
//int main()
//{
//	int Line = 3;
//	scanf("%d", &Line);
//	for (int y = 1; y <= Line; y+=1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����1
//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	scanf("%d",&outer);
//	for (; outer >= 1; outer--)
//	{
//		for (inter = 1; inter <= outer; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//����2
//#include<stdio.h>
//int main()
//{
//	int inter1, inter2, outer;
//	scanf("%d", &outer);
//	for (;outer >= 1; outer--)
//	{
//		for (inter1 = 1; inter1 <= outer - 1; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 1; inter2 <= 9 - outer*3; inter2++) {
//			printf("*");
//		}
//		for (inter1 = 1; inter1 <= outer - 1; inter1++) {
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����2
//#include<stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	
//	int inter = 1;
//	for (int outer = LINE-1; outer >= 0;outer -= 1)
//	{
//		for (int x = 1; x <= outer; x++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inter; x++)
//		{
//			printf("*");
//		}
//		inter += 2;
//		printf("\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()  // 5   3   1 
//// 0   1   2
//{
//	for (int x = 1; x < 1; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 1; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}
//����3 ���ﰢ��

//����2 ���̾�
//#include<stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	int inter1 = 1;
//	for (int outer = LINE - 1; outer >= 0; outer -= 1)
//	{
//		for (int x = 1; x <= outer; x++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inter1; x++)
//		{
//			printf("*");
//		}
//		inter1 += 2;
//		printf("\n");
//	}
//	int inter2 = inter1-2;
//	for (int outer = 0; outer <= LINE - 1; outer += 1)
//	{
//		for (int x = 1; x <= outer; x++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= inter2; x++)
//		{
//			printf("*");
//		}
//		inter2 -= 2;
//		printf("\n");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int Line;
//	scanf("%d", &Line);
//	int inter = 1;
//	for (int outer = Line-1; outer >= 0;)
//	{
//		for (int x = 1; x <= outer; x++)
//		{
//			printf(" ");
//		}
//		outer -= 1;
//		for (int x = 1; x <= inter; x++)
//		{
//			printf("%d", inter);
//		}
//		inter += 1;
//		printf("\n");
//	}
//
//}

//#include<stdio.h>
//int main()
//{
//	int player = 0x41;
//	int change = 1;
//	int input;
//	int num = 1;
//	printf("<����Ų ��� 31!>\n");
//	printf("������ �����մϴ�! 31�� ���ϴ� ����� ���� �˴ϴ�!\n");
//	for (;;)
//	{
//		for (int turn = 0; turn <= 2; turn++)
//		{
//			printf("%c : ", player);
//			scanf("%d", &input);
//			if (input != num && input != 0) {
//				printf("�߸��� �Է��Դϴ�.\n");
//				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", num);
//				turn--;
//				continue;
//			}
//			if (turn == 0 && input == 0)
//			{
//				printf("���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�.\n");
//				turn--;
//				continue;
//			}
//			else if (input == 0)
//			{
//				break;
//			}
//			if (input == 31)
//			{
//				break;
//			}
//			num += 1;
//		}
//		player += change;
//		if (input == 31)
//		{
//			break;
//		}
//		change *= -1;
//		printf("���� �Ѿ�ϴ�.\n");
//	}
//	printf("���� %c�� �¸��Դϴ�!", player);
//	return 0;
//}
//for���� while���� ��ȯ
//#include<stdio.h>
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("���α׷� ����\n");
//			break;
//		}
//	}
//	return 0;
//}

//����1
//#include<stdio.h>
//int main()
//{
//	for (float conversion = 0; conversion < 2; conversion += 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	double conversion = 90;
	while (conversion > 0.1)
	{
		if (conversion == 10.0)
		{
			continue;
		}
		printf("%.31f\n", conversion);
		conversion /= 3
	}
	for (double conversion = 90; conversion > 0.1; conversion /= 3)
	{
		if (conversion == 10.0)
		{
			continue;
		}
		printf("%.31f\n", conversion);
	}
	return 0;
}