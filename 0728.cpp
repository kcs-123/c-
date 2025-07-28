//#include<stdio.h>
//int main()
//{
//	char arr[5][15] = {};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 15; j++) {
//
//			char ch;
//			scanf("%c", &ch);
//			if (ch == '\n' || ch == 0) break;
//			arr[i][j] = ch;
//		}
//	}
//	for (int i = 0; i < 15; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (arr[i][j] == 0) continue;
//
//			printf("%c", arr[j][i]);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count;
//	int paper[100][100] = {};
//	scanf("%d", &count);
//	int bottom, left;
//	for (int i = 0; i < count; i++)
//	{
//		scanf("%d",&bottom);
//		scanf("%d", &left);
//		for (int j = bottom; j < bottom + 10; j++) {
//			for (int k = left; k < left + 10; k++) {
//				paper[j][k] = 1;
//			}
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			if (paper[i][j] == 1)
//			{
//				sum++;
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	int b = 100;
//	int *pB = &b;
//	printf("b=%d\n",b);//%x가 의미하는것???
//	printf("b=%x\n", &b); //
//	printf("b=%d\n", *pB);
//	printf("b=%x\n", pB);
//}


//#include<stdio.h>
//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//	int b = 100;
//	int* pB = &b;
//	double c = 3.14;
//	double* pC = &c;
//	printf("pA의 크기:%d byte\n", sizeof(pA));
//	printf("pB의 크기:%d byte\n", sizeof(pB));
//	printf("pC의 크기:%d byte\n", sizeof(pC));
//
//	printf("*pA의 크기:%d byte\n", sizeof(*pA));
//	printf("*pB의 크기:%d byte\n", sizeof(*pB));
//	printf("*pC의 크기:%d byte\n", sizeof(*pC));
//}

//#include<stdio.h>
//void main()
//{
//	char str[] = "programming";
//	char* ptr1, *ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//	printf("두 포인터 간의 차는 %d입니다\n", ptr2 - ptr1);
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//
//}

//#include<stdio.h>
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//	numptr = &num1;
//	printf("%d\n", *numptr);
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}

//#include<stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;
//	printf("%d\n", *(int*)p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf(">%d-%d", *ptrFibo4, *ptrFibo1);
//	printf(">>%d\n", ptrFibo4 - ptrFibo1);
//	printf("%d", ptrFibo1[1]);
//	printf("%d", ptrFibo1[0]);
//	printf("%d", ptrFibo1[-1]);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numptrA;
//	void* ptr;
//	numptrA = &numArr[2];
//	ptr = numArr;
//	printf("%d\n",numptrA[-1]);
//	printf("%d\n",*((int*)ptr+4));
//	return 0;
//}

//문제1
//#include<stdio.h>
//int main()
//{
//	int arr[5] = {};
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int* ptr;
//	ptr = arr;
//	ptr += 2;
//	printf("%d", *ptr);
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p++);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d", *p++);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//	pt--;
//	*pt++ += 20;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말";
//	char* ptr = &str[7];
//	printf("%s\n\n", ptr);
//}

//#include<stdio.h>
//void main()
//{
//	char str[] ="기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//	printf("%s\n\n", str);
//	str[15] = 'a'; str[23] = 'b'; str[25] = 'c';
//	printf("%s\n\n", ptr);
//}

//문제1
//#include<stdio.h>
//int main()
//{
//	int arr[100] = {};
//	for (int i = 0; i < 100; i++)
//	{
//		arr[i] = i+1;
//	}
//	int* ptr = arr;
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	for (int i = 99; i >= 0; i--)
//	{
//		printf("%d " ,*(ptr + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100] = {};
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//	}
//	int* ptr = &arr[50];
//	/*do {
//			printf("%d ", *ptr);
//			ptr++;
//			if (*ptr >= 100)
//			{
//				printf("%d ", *ptr);
//				ptr -= 99;
//			}
//
//	} while (*ptr != 50);*/
//	for (; *ptr != 50; ptr++) {
//		printf("%d ", *ptr);
//		if (*ptr == 100)
//			ptr -= 100;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "memmove can be very useful.......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//struct mydata
//{
//	int a;
//	char b[25];
//};
//void main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d-%s\n", data.a, data.b);
//}
#include<stdio.h>
#include<string.h>
int main()
{
	char* str1 = (char*)"coding";
	char* str2 = (char*)"coding";
	char* str3 = (char*)"coding.ne.kr";
	char* str4 = (char*)"ne.kr";
	char* str5 = (char*)"abcd";
	printf("%s with %s=%d\n", str1, str2,memcmp(str1, str2, strlen(str1)));
	printf("%s with %s(str1 size)=%d\n", str1, str3, memcmp(str1, str3, strlen(str1)));
	printf("%s with %s(str2 size)=%d\n", str1, str3, memcmp(str1, str3, strlen(str3)));
	printf("%s with %s=%d\n", str1, str4, memcmp(str1, str4, strlen(str1)));
	printf("%s with %s (str1 size)=%\n", str1, str5, memcmp(str1, str5, strlen(str1)));
	printf("%s with %s (str5 size)=%d\n", str1, str5, memcmp(str1, str5, strlen(str5)));
	return 0;
}