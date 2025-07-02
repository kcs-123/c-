////5-3
//#include<stdio.h>
//void main()
//{
//	int a = 200;
//	if (a < 200)
//	{
//		printf("100보다 작군요..\n");
//		printf("거짓이므로 앞의 문장은 안보이겠죠?\n");
//	}
//	printf("프로그램 끝!\n");
//}
////a의 값을 200보다 크게하면 조건문을 실행한다.

//5-6
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	int a;
//	printf("정수를 입력하세요 :");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("짝수를 입력했군요..\n");
//	}
//	else
//	{
//		printf("홀수를 입력했군요..\n");
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
//			printf("50보다 크고 100보다 작군요..\n");
//		}
//		else
//		{
//			printf("와~100보다 크군요..\n");
//		}
//	}
//	else {
//		printf("에게~50보다 작군요..\n");
//	}
//}

//5-9
//#define _CRT_NO_SECURE_WARNINGS
//#include<stdio.h>
//void main()
//{
//	int a;
//	printf("1~4 중에 선택하세요:");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1: printf("1을 선택했다\n");
//		break;
//	case 2: printf("2를 선택했다\n");
//		break;
//	case 3: printf("3을 선택했다\n");
//		break;
//	case 4: printf("4를 선택했다\n");
//		break;
//	default:
//		printf("이상한 걸 선택했다.");
//	}
//
//} //switch문의 기본적인 예시이다.

//5-10
//#define _CRT_NO_SECURE_WARNINGS
//#include<stdio.h>
//void main()
//{
//	int year;
//	printf("출생 연도를 입력하세요");
//	scanf("%d", &year);
//	switch (year % 12)
//	{
//	case 0: printf("원숭이띠\n"); break;
//	case 1: printf("닭띠\n"); break;
//	case 2: printf("개띠\n"); break;
//	case 3: printf("돼지띠\n"); break;
//	case 4: printf("쥐띠\n"); break;
//	case 5: printf("소띠\n"); break;
//	case 6: printf("호랑이띠\n"); break;
//	case 7: printf("토끼띠\n"); break;
//	case 8: printf("용띠\n"); break;
//	case 9: printf("뱀띠\n"); break;
//	case 10: printf("말띠\n"); break;
//	case 11: printf("양띠\n"); break;
//	}
//}