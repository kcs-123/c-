//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt;
//	printf("입력할 개수는 ? ");
//	scanf("%d", &cnt);
//	p = (int*)malloc(sizeof(int) * cnt);
//	for (i = 0;i < cnt;i++)
//	{
//		printf("%d번째 숫자 : ", i + 1);
//		scanf("%d",&p[i]);
//	}
//	for (i = 0;i < cnt;i++)
//	{
//		hap = hap + p[i];
//	}
//		printf("입력한 숫자의 합==>%d\n", hap);
//		free(p);
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<malloc.h>
//void main()
//{
//	int* p;
//	int* s;
//	int i, j;
//	printf("malloc 함수 사용\n");
//	p = (int*)malloc(sizeof(int) * 3);
//	for (i = 0;i < 3;i++)
//	{
//		printf("할당된 곳의 초기값p[%d]==>%d\n", i, p[i]);
//	}
//	free(p);
//	printf("\n calloc함수 사용\n");
//	s= (int*)calloc(sizeof(int),3);
//	for (j = 0;j < 3;j++)
//	{
//		printf("할당된 곳의 초기값s[%d]==>%d\n", j, s[j]);
//	}
//	free(s);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt = 0;
//	int data;
//	p = (int*)malloc(sizeof(int) * 1);
//	printf("1 번째 숫자 : ");
//	scanf("%d", &p[0]);
//	cnt++;
//	for (i = 0;;i++)
//	{
//		printf("%d번째 숫자: ", i);
//		scanf("%d", &data);
//		if (data != 0)
//		{
//			p = (int*)realloc(p, sizeof(int) * i);
//		}
//		else
//		{
//			break;
//		}
//		p[i - 1] = data;
//		cnt++;
//	}
//	for (i = 0;i < cnt;i++)
//	{
//		hap = hap + p[i];
//	}
//	
//}