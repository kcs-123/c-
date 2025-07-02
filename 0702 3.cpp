//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("숫자를 입력하세요:");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3: 
//	case 6: 
//	case 9: 
//		printf("짝"); break;
//	default: printf("%d", number);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'x';
//	switch (command) 
//	{
//	case 0x78: printf("알파벳 x 입력.\n");
//		break;
//	case 'X': printf("엑스표 입력.\n");
//		break;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: {
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("% d + % d = % d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("% d - % d = % d\n", number1, number2, number1 - number2);
//		break;
//	}
//	}
//	return 0;
//	}
//문제7
//#include<stdio.h>
//int main()
//{
//	char key;
//	printf("방향키를 입력하세요:");
//	scanf("%c", &key);
//	switch (key)
//	{
//	case 'w': printf("위 방향키를 입력하셨습니다."); break;
//	case 'a': printf("좌 방향키를 입력하셨습니다."); break;
//	case 's': printf("아래 방향키를 입력하셨습니다."); break;
//	case 'd': printf("우 방향키를 입력하셨습니다."); break;
//	default: printf("방향키를 잘못 입력하셨습니다."); break;
//	}
//}
//문제8
//#include<stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("appetizer: 1.캐비어 2.샐러드 3.푸아그라 중 하나를 선택하세요.");
//	scanf("%d", &appetizer);
//	printf("mainDish: 1.스테이크 2.생선요리 3.양갈비 중 하나를 선택하세요");
//	scanf("%d", &mainDish);
//	printf("dessert: 1.케잌 2.아이스크림 3.초콜릿무스 중 하나를 선택하세요");
//	scanf("%d", &dessert);
//	printf("주문한 음식은 ");
//	switch (appetizer)
//	{
//	case 1:printf("캐비어, "); break;
//	case 2:printf("샐러드, "); break;
//	case 3:printf("푸아그라, "); break;
//	}
//	switch (mainDish)
//	{
//	case 1:printf("스테이크, "); break;
//	case 2:printf("생선요리, "); break;
//	case 3:printf("양갈비, "); break;
//	}
//	switch (dessert)
//	{
//	case 1:printf("케잌입니다."); break;
//	case 2:printf("아이스크림입니다."); break;
//	case 3:printf("초콜릿무스입니다."); break;
//	}
//	return 0;
//}

//while 문
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i , i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
////문제1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		printf("C");
//		i++;
//	}
//}

////문제2
//#include<stdio.h>
//int main()
//{
//	int i = -10;
//	while (i <= 0)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

////문제3
//#include<stdio.h>
//int main()
//{
//	int i = 5;
//	while (i <= 100)
//	{
//	printf("%d ", i);
//	i+=5;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int count = 3;
//	while (count) { //count가 0이 되어야 중지하지만 break로 도중 중지
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count: %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf("%c", &alphabet);
//		if(alphabet>='a' && alphabet<='z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else { continue;}
//		printf("입력한 값: %c\n", alphabet);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료);");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;  //break과 continue를 활용하여 도중에 건너뛰거나 중지시키는 동작을 할 수 있다.
//}

//문제4
