////5-3
//#include<stdio.h>
//void main()
//{
//	int a = 200;
//	if (a < 200)
//	{
//		printf("100���� �۱���..\n");
//		printf("�����̹Ƿ� ���� ������ �Ⱥ��̰���?\n");
//	}
//	printf("���α׷� ��!\n");
//}
////a�� ���� 200���� ũ���ϸ� ���ǹ��� �����Ѵ�.

//5-6
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	int a;
//	printf("������ �Է��ϼ��� :");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("¦���� �Է��߱���..\n");
//	}
//	else
//	{
//		printf("Ȧ���� �Է��߱���..\n");
//	}
//}

//5-7
//#include<stdio.h>
//void main()
//{
//	int a = 45;
//	if (a > 50)
//	{
//		if (a < 100) {
//			printf("50���� ũ�� 100���� �۱���..\n");
//		}
//		else
//		{
//			printf("��~100���� ũ����..\n");
//		}
//	}
//	else {
//		printf("����~50���� �۱���..\n");
//	}
//}

//5-9
//#define _CRT_NO_SECURE_WARNINGS
//#include<stdio.h>
//void main()
//{
//	int a;
//	printf("1~4 �߿� �����ϼ���:");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1: printf("1�� �����ߴ�\n");
//		break;
//	case 2: printf("2�� �����ߴ�\n");
//		break;
//	case 3: printf("3�� �����ߴ�\n");
//		break;
//	case 4: printf("4�� �����ߴ�\n");
//		break;
//	default:
//		printf("�̻��� �� �����ߴ�.");
//	}
//
//} //switch���� �⺻���� �����̴�.

//5-10
//#define _CRT_NO_SECURE_WARNINGS
//#include<stdio.h>
//void main()
//{
//	int year;
//	printf("��� ������ �Է��ϼ���");
//	scanf("%d", &year);
//	switch (year % 12)
//	{
//	case 0: printf("�����̶�\n"); break;
//	case 1: printf("�߶�\n"); break;
//	case 2: printf("����\n"); break;
//	case 3: printf("������\n"); break;
//	case 4: printf("���\n"); break;
//	case 5: printf("�Ҷ�\n"); break;
//	case 6: printf("ȣ���̶�\n"); break;
//	case 7: printf("�䳢��\n"); break;
//	case 8: printf("���\n"); break;
//	case 9: printf("���\n"); break;
//	case 10: printf("����\n"); break;
//	case 11: printf("���\n"); break;
//	}
//}