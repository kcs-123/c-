//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()//����4
//{
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;//mymoney�� 1000~10000��
//	printf("%d���̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500; //coin500�� 0~1500
//	int coin100 = rand() % 5000; //coin100�� 0~4999
//	coin100 = coin100 / 100 * 100;//coin100�� 0~4900
//	printf("�׸��� ������ ������");
//	printf("%d���̴�.", coin500 + coin100);
//	printf("\n���� ���ڸ� �� �� ������?");
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
//		printf("apple�� 15�� �ֽ��ϴ�.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple�� 17���� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 1;
//	if (apple > 7)
//	{
//		printf("apple�� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 150;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �����ϴ�");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple)
//	{
//		printf("apple�� 0���� �ƴմϴ�.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 0;
//	if (!apple)//!apple�� apple�� 0�� �ƴ� �� 0�̰� 0�϶� 0�� �ƴϴ�--�ݴ��̹Ƿ�
//	{
//		printf("apple�� �ϳ��� �����ϴ�.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 10;
//	if (apple == 10)
//	{
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
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
//		printf("apple�� �ϳ��� �����ϴ�\n");
//	}
//	else
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}
//����1
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("���ڸ� �Է��ϼ���: ");
//	scanf("%d", &input);
//	if(input==0)
//	{
//		printf("0�Դϴ�.");
//	}
//	else if (input > 0)
//	{
//		printf("����Դϴ�");
//	}
//	else 
//	{
//		printf("�����Դϴ�.");
//	}
//	return 0;
//}
//����2
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("���ڸ� �Է��ϼ���: ");
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("input�� ���ڸ� �����Դϴ�");
//	}
//	else
//	{
//		printf("input�� ���ڸ� ���ڰ� �ƴմϴ�.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150�̻��Դϴ�.");
//	}
//	if (height > 170);
//	{ printf("Ű�� 170�̻��Դϴ�."); } //else if�ʹ� �ٸ��� ���������� ����
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150�̻��Դϴ�.\n");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160�̻��Դϴ�.\n");
//	}
//	return 0;
//} //else if�� ��� ���� ���ǹ��� �����̾�� ����ȴ�.
//����3
//#include<stdio.h>
//int main()
//{
//	int y_age;
//	printf("���̸� �Է��ϼ���");
//	scanf("%d", &y_age);
//	if (y_age > 0)
//	{
//		printf("��ü���ɰ� ����� ��û�� �� �ֽ��ϴ�.\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12�� ������ ����� ��û�� �� �ֽ��ϴ�.\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15�� ������ ����� ��û�� �� �ֽ��ϴ�.");
//	}
//	return 0;
//}
//����4
#include<stdio.h>
int main()
{
	char initial;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &initial);
	if (initial >= 0x61 && initial)
	{
		printf("�Է��� ���ڴ� �ҹ����Դϴ�.");
	}
	else
	{
		printf("�Է��� ���ڴ� �빮���Դϴ�");
	}
	return 0;
}