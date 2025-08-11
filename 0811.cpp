//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	char s[20];
//	FILE* rfp;
//	rfp = fopen("c:\\temp\\data1.txt", "r");
//	fgets(s, 20, rfp);
//	printf("파일에서 읽은 문자열 : ");
//	puts(s);
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	FILE* rfp;
//	int hap = 0;
//	int in, i;
//	rfp = fopen("c:\\temp\\data2.txt", "r");
//	for (i = 0;i < 5;i++)
//	{
//		fscanf(rfp, "%d", &in);
//		hap = hap + in;
//	}
//	printf("합계==>%d\n", hap);
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	char s[20];
//	FILE* wfp;
//	wfp = fopen("c:\\temp\\data3.txt", "w");
//	printf("문자열을 입력(최대 19자) : ");
//	gets_s(s);
//	fputs(s, wfp);
//	fclose(wfp);
//}



//#include<stdio.h>
//int var = 0;
//void func()
//{
//	int var = 111;
//}
//void func2()
//{
//	var = 222;
//}
//void main()
//{
//	printf("%d", var);
//	func();
//	printf("%d", var);
//	func2();
//	printf("%d", var);
//}

//#include<stdio.h>
//#include<string.h>
//
// char*upper_lower(char*arr)
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z')
//		{
//			arr[i] -= 32;
//		}
//		else if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			arr[i] += 32;
//		}
//	}
//	return arr;
//}
//
//int main()
//{
//	char inStr[100], outStr[100];
//	printf("문자열을 입력(100자 이내) : ");
//	scanf("%s", inStr);
//	strcpy(outStr, upper_lower(inStr));
//	printf("대소문자 변환 결과==>%s\n", outStr);
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int throwDice()
//{
//	int n;
//	n = rand() % 6 + 1;
//	return n;
//}
//void main()
//{
//	short int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//	printf("** 주사위 두개 던지기 시작 **\n\n");
//	srand((unsigned)time(NULL));
//	int dice1, dice2;
//	int equalCount = 0;
//	while (1)
//	{
//		dice1 = throwDice();
//		dice2 = throwDice();
//		if (dice1 == dice2)
//		{
//			diceNum[equalCount] = dice1;
//			equalCount += 1;
//		}
//		if (equalCount == 10)
//		{
//			break;
//		}
//	}
//	printf("같은 숫자가 나온 순서==> ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", diceNum[i]);
//	}
//	printf("\n\n");
//}

//#include<stdio.h>
//void func1(int);
//int main()
//{
//	func1(100);
//}
//void func1(int a)
//{
//	printf("%d", a);
//}
// 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAXENERGY 6
void printfenergy(int my)
{
	printf("내 목숨: ");
	for (int i = 0; i < my; i++)
	{
		printf("■");
	}
	for (int i = my; i < MAXENERGY; i++)
	{
		printf("□");
	}
	printf("\n");
}

char* getAnswer()
{
	FILE* fp = fopen("answer.TXT", "r");
	srand((unsigned int)time(NULL));
	int init;
	fscanf(fp, "%d", &init);
	int count = (rand() % init);//0~4

	printf("%d\n", init);
	printf("%d\n", count);

	char ps[100] = {};
	for(int i = 0; i <= count ; i++)//1~5
	{	
		fscanf(fp,"%s",ps);
	}
	fclose(fp);
	char *ps2;
	ps2 = (char*)malloc(strlen(ps)+1);
	//printf("%d\n", strlen(ps));
	//printf("%d\n", sizeof(ps));
	strcpy(ps2, ps);
	//printf("%d\n", strlen(ps2));
	//printf("%d\n", sizeof(ps2));
	return ps2;
	
}


int main()
{
	
	char* Answer = getAnswer();
	int len = strlen(Answer);
	puts(Answer);
	char* a;
	a = (char*)malloc(len+ 1);
	memset(a, '_',len);
	a[strlen(Answer)] = 0;
	printf("%s",a);








	free(Answer);

	/*
	char num[4] = "___", tmp[4];
	int answer = rand() % 1000;
	sprintf(tmp, "%03d", answer);
	int energy = MAXENERGY;
	char input;
	while (1)
	{
		printfenergy(energy);
		if (!energy) {
			printf("게임 오버");
			printf("정답 : %s", tmp);
			break;
		}
		printf("정답 : %s\n\n", num);
		if (atoi(num) == answer)
		{
			printf("게임 승리!\n");
			break;
		}
		printf("숫자를 맞춰보세요 : ");
		scanf(" %c", &input);
		bool check = true;
		for (int i = 0; i < 3; i++)
		{
			if (tmp[i] == input) {
				num[i] = input;
				check = false;
			}
		}
		if (check) energy--;
	}*/
	return 0;
}