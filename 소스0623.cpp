//#include<stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}

//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 1;  
//	printf("사과 %d개\n", apple);  //%d위치에 apple을 삽입한다.
//	return 0; 
//}

//#include<stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d+%d=%d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int A;
//	A = 'A';
//	printf("A=%c, A=%d\n", A, A); //문자열 변수 A선언 후 값을 할당함 %d의 경우 A라는 문자열을 숫자로 출력? X %c가 문자열로 출력
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double pi; //double의 경우 실수형(소수점 16자리)
//	pi = 3.14;
//	float e = 2.718; //float의 경우 실수형(
//	printf("pi=%.2lf,e=%.5f..\n", pi, e);
//	return 0;
//}
//

//문제1
//#include<stdio.h>
//int main()
//{
//	float pi = 3.14;
//	int radius = 5;
//	float width = radius * radius * pi;
//	float length = 2 * radius * pi;
//	printf("width=%f\nlength=%f", width, length);
//	return 0;
//}
//

//문제2
//#include<stdio.h>
//int main()
//{
//	int up = 5;
//	int down = 3;
//	int high = 7;
//	float width = (up + down) * high / 2;
//	printf("width = %.3f //", width);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력:");
//	scanf("%d", &k);  //&는 그 변수에 할당?
//	printf("입력한 숫자는:%d\n", k);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력:");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 3개 입력:"); //단순한 출력
//	scanf("%c%c%c", &a, &b, &c); //변수에 값을 입력 받기
//	printf("문자 출력:%c%c%c\n", a, b, c);
//	return 0;
//}

//문제3
//#include<stdio.h>
//int main()
//{
//	float pi = 3.14;
//	int radius;
//	printf("원의 반지름을	 입력하세요");
//	scanf("%d", &radius); //변수 데이터 타입 일치시키기!
//	float width = radius * radius * pi;
//	float length = 2 * pi * radius;
//	printf("width=%f\nlenghth=%f", width, length);
//}

//문제4
//#include<stdio.h>
//int main()
//{
//	int W1, W2, H;
//	printf("사다리꼴의 윗변, 아랫변, 높이를 입력하세요");
//	scanf("%d%d%d", &W1, &W2, &H);
//	float width = (W1 + W2) * H / 2.0;//하나만 실수여도 실수 계산 방식으로 진행
//	printf("width=%f", width);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 15;
	int b = 3;
	printf("%d+%d=%d\n",a,b,a + b);
	printf("%d-%d=%d\n",a,b, a - b);
	printf("%d*%d=%d\n",a,b, a * b);
	printf("%d/%d=%d\n",a,b, a / b);
	printf("%d%%%d=%d\n",a,b, a % b);
	return 0;
}