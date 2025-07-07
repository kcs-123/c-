//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n",sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다\n");
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
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}
//문제1
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n",sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}
//문제2
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep % 10 == 0) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//		if (sheep == 45)
//		{
//			printf("잠들었다!\n");
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
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n",count);
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
//	printf("도합 %d\n", sum_number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요:");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}
////문제1
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
////문제2
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
//문제3
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
//	printf("100 이하의 제곱수를 출력합니다.\n");
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
//	printf("100이하 7의 배수를 출력합니다.\n");
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
//	printf("1부터 10까지 곱한 수 출력:");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--) //초기화 식이 여러개 가능 //조건식에 변수 가능 //증감식에 여러개 가능 //{}안에 실행문 없어도 반복문은 실행
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
//// 문제4
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
//문제5
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
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
//	}
//	myClass++;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myClass, student);
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
//			printf("%d반 %d번\n", myClass, student);
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
//			printf("%d반 %d번\n", myClass, student);
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
//				printf("%d학년 %d반 %d번\n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}
////문제1 구구단
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
//문제2
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
//문제3
//#include<stdio.h>
//int main()
//{
//	int fourth, sixth;
//	for (fourth = 1; fourth <= 4; fourth++) {
//		for (sixth = 1; sixth <= 6; sixth++) {
//			printf("4면-%d, 6면-%d\n", fourth, sixth);
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
//		printf("%d번째 내부 반복문 진입\n", outer);
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d번째 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n", outer);
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