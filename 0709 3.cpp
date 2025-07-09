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
//outer는 줄 수 정해주고, inter1범위+inter2범위==가로 칸 수, inter1부터 공백
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

//문제1
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

//문제2
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

//문제2
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

#include<stdio.h>
int main()  // 5   3   1 
// 0   1   2
{
	int outer=0
	for (int x = 1; x <=outer; x++)
	{
		printf(" ");
	}
	outer+=1
	for (int x = 1; x <= 5; x++)
	{
		printf("*");
	}
	printf("\n");

	for (int x = 1; x <= 1; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <= 3; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 2; x++)
	{
		printf(" ");
	}
	for (int x = 1; x <= 1; x++)
	{
		printf("*");
	}
	printf("\n");

	return 0;
}