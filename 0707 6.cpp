//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("�� %d����\n",sheep);
//	}
//	printf("������!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("�� %d����\n", sheep);
//		if (sheep == 3) {
//			printf("���߿� ������\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//	}
//	return 0;
//}
//����1
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("�� %d����\n",sheep);
//	}
//	printf("������!\n");
//	return 0;
//}
//����2
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("�� %d����\n", sheep);
//		if (sheep == 45)
//		{
//			printf("������!\n");
//			break;
//		}
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("���� %d\n", round);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("����Ʈ %d��\n",count);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number;
//	int sum_number=0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("���� %d\n", sum_number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ���:");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("�߾�");
//	}
//	printf("\n");
//	return 0;
//}
////����1
//#include<stdio.h>
//int main()
//{
//	int num;
//	for (num = 10; num <= 99; num++)
//	{
//		printf("%d\n",num);
//	}
//	return 0;
//}
////����2
//#include<stdio.h>
//int main()
//{
//	int num;
//	int total=1;
//	for (num = 3; num <= 8; num++) {
//		total *= num;
//	}
//	printf("%d", total);
//	return 0;
//}
//����3
//#include<stdio.h>
//int main()
//{
//	int num;
//	for (num = 1; num <= 50; num++) {
//		int first = num % 10;
//		int second = num / 10;
//		if ((first && first%3 == 0) || (second && second %3 == 0))
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("100 ������ �������� ����մϴ�.\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("100���� 7�� ����� ����մϴ�.\n");
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char input;
//	for (;;) {
//		scanf(" %c", &input);
//		switch (input) {
//		case 's': printf("START GAME\n");
//			break;
//		case 'e': printf("EXIT GAME\n");
//				return 0;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ���:");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--) //�ʱ�ȭ ���� ������ ���� //���ǽĿ� ���� ���� //�����Ŀ� ������ ���� //{}�ȿ� ���๮ ��� �ݺ����� ����
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++) {
//		printf("%d\n", count);
//	}
//	return 0;
//}
//// ����4
//#include<stdio.h>
//int main()
//{
//	int num;
//	for (num = 11; num <= 200; num += 11)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//����5
//#include<stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 0.1; sqLine * 4 <= 21; sqLine += 0.1)
//	{
//		printf("%.1f\n", sqLine);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	myClass++; student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d�� %d��\n", myClass, student);
//	}
//	myClass++;
//	for (student = 1; student <= 3; student++) {
//		printf("%d�� %d��\n", myClass, student);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++) {
//		for (student = 1; student <= 3; student++) {
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++) {
//		for (myClass = 1; myClass <= 8; myClass++) {
//			for (student = 1; student <= 30; student++) {
//				printf("%d�г� %d�� %d��\n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}
////����1 ������
//#include<stdio.h>
//int main()
//{
//	int num1, num2;
//	for (num1 = 2; num1 <= 9; num1++) {
//		for (num2 = 1; num2 <= 9; num2++) {
//			printf("%d ", num1 * num2);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����2
//#include<stdio.h>
//int main()
//{
//	int num1, num2;
//	for (num1 = 2; num1 <= 9; num1++) {
//			if (num1 == 3)
//			{
//				continue;
//			}
//		for (num2 = 1; num2 <= 9; num2++) {
//			printf("%d ", num1 * num2);
//		}
//		printf("\n");
//	}
//		return 0;
//}
//����3
//#include<stdio.h>
//int main()
//{
//	int fourth, sixth;
//	for (fourth = 1; fourth <= 4; fourth++) {
//		for (sixth = 1; sixth <= 6; sixth++) {
//			printf("4��-%d, 6��-%d\n", fourth, sixth);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d��° ���� �ݺ��� ����\n", outer);
//		for (inter = 0; inter < 5; inter++) {
//			printf("���� �ݺ��� %d��° �ݺ�\n", inter);
//		}
//		printf("%d��° ���� �ݺ��� Ż��\n", outer);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < outer + 1; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
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
//} //