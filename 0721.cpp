//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};
//	struct bibim b1;
//	b1.a = 10;
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//	printf("b1.a==>%d\n", b1.a);
//	printf("b1.b==>%f\n", b1.b);
//	printf("b1.c==>%c\n", b1.c);
//	printf("b1.d==>%s\n", b1.d);
//}

//#include<stdio.h>
//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//	struct student s;
//	printf("이름 : ");
//	scanf("%s", s.name, 9);
//	printf("국어점수: ");
//	scanf("%d", &s.kor);
//	printf("영어 점수:");
//	scanf("%d", &s.eng);
//	s.avg = (s.kor + s.eng) / 2.0f;
//	printf("\n--구조체 활용--\n");
//	printf("학생이름==>%s\n", s.name);
//	printf("국어 점수==>%d\n", s.kor);
//	printf("영어 점수==>%d\n", s.eng);
//	printf("평균 점수==>%5.1f\n", s.avg);
//}

//#include<stdio.h>
//void main()
//{
//	enum week{sun,mon,tue,wed,thu,fri,sat};
//	enum week ww;
//	ww = sat;
//	if (ww = sun)
//	{
//		printf("오늘은 일요일입니다.\n");
//	}
//	else
//		printf("오늘은 일요일이 아닙니다.\n");
//
//}

//#include<stdio.h>
//void main()
//{
//	int a, b, c, d;
//	int hap;
//	printf("1번째 숫자를 입력하세요:");
//	scanf("%d", &a);
//	printf("2번째 숫자를 입력하세요:");
//	scanf("%d", &b);
//	printf("3번째 숫자를 입력하세요:");
//	scanf("%d", &c);
//	printf("4번째 숫자를 입력하세요:");
//	scanf("%d", &d);
//	hap = a + b + c + d;
//	printf("합계==>%d\n", hap);
//}

//#include<stdio.h>
//void main()
//{
//	int aa[4];
//	int hap;
//	printf("1번째 숫자를 입력하세요:");
//	scanf("%d", &aa[0]);
//	printf("2번째 숫자를 입력하세요:");
//	scanf("%d", &aa[1]);
//	printf("3번째 숫자를 입력하세요:");
//	scanf("%d", &aa[2]);
//	printf("4번째 숫자를 입력하세요:");
//	scanf("%d", &aa[3]);
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	printf("합계==>%d\n", hap);
//}

//#include<stdio.h>
//void main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%d번째 숫자를 입력하세요: ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	printf("합계==>%d\n", hap);
//}


//#include<stdio.h>
//void main()
//{
//	int aa[4] = { 100,200,300,400 };
//	int bb[] = { 100,200,300,400 };
//	int cc[4] = { 100,200 };
//	int dd[4] = { 0 };
//	int i;
//	for (i = 0; i <4; i++)
//		printf("aa[%d]==>%d\t", i, aa[i]);
//	printf("\n");
//	for (i = 0; i <= 3; i++)
//		printf("bb[%d]==>%d\t", i, bb[i]);
//	printf("\n");
//	for (i = 0; i <= 3; i++)
//		printf("cc[%d]==>%d\t", i, cc[i]);
//	printf("\n");
//	for (i = 0; i <= 3; i++)
//		printf("dd[%d]==>%d\t", i, dd[i]);
//	printf("\n");
//}


//#include<stdio.h>
//void main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int min = a[0];
//	int max = a[0];
//	int sum = a[0];
//	float avg;
//	for (int i = 0; i <= 4; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//		if (a[i] <min)
//			min = a[i];
//		sum += a[i];
//	}
//	avg = sum / 5.0f;
//	printf("min : %d\n", min);
//	printf("max : %d\n", max);
//	printf("sum : %d\n", sum);
//	printf("avg : %f\n", avg);
//}

//#include<stdio.h>
//int main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int arr[7] = { };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[a[i]] += 1;
//	}
//	for (int k = 1; k <= 6; k++)
//	{
//		printf("%d가 나온 횟수: %d\n", k, arr[k]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[2][3] = { '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { {'1','2','3'},{'4','5','6'} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	int arr2d[5][4] = {
//		{662,7,4,74},{8,396,299,95},{66,73,86,0},{116,26,586,42},{84,7,41,11}
//	};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { {2,4,6},{8,10,12},{14,16,18} };
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 2; j++)
//		{
//			printf("%2d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}
////문제2
//#include<stdio.h>
//void main()
//{
//	int k = 1;
//	int arr[5][5];
//	for(int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = k;
//			k++;
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%2d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////문제3
//#include<stdio.h>
//void main()
//{
//	int k = 1;
//	int arr[5][5];
//	for(int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = k;
//			k++;
//		}
//	}
//	for (int i = 4; i>=0; i--)
//	{
//		for (int j = 4; j>=0; j--)
//		{
//			printf("%2d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////문제4
//#include<stdio.h>
//void main()
//{
//	int k = 1;
//	int arr2d[5][5];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr2d[i][j] = k;
//			k++;
//		}
//	}
//	int arr1d[25];
//	int m = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr1d[m] = arr2d[i][j];
//			m++;
//		}
//	}
//	for (int i = 0; i < 25; i++)
//	{
//		printf("%2d ", arr1d[i]);
//	}
//}

////문제5 //별 0x2A
//#include<stdio.h>
//int main()
//{
//	int num;
//	int arr[10];
//	printf("10이하의 숫자를 입력하세요:");
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//
//	int star[10][10] = {};
//	for (int j = 0; j < num; j++)
//	{
//		for (int i = 0; i < arr[j]; i++)
//		{
//			star[i][j] = '*';
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if(star[i][j] == 0)printf(" ");
//			else printf("%c",star[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//void main()
//{
//	const int n = 10;
//
//	int arr[n][n] = { };
//
//	int x = -1;
//	int y = 0;
//	int num = 1;
//	int mov=n;
//	int ch=1;
//
//	for (;;)
//	{
//		for (int i = 0; i < mov; i++)
//		{
//			x+=ch;
//			arr[y][x] = num;
//			num++;
//		}
//		mov--;
//		if (mov == 0) break;
//		for (int i = 0; i < mov; i++)
//		{
//			y+=ch;
//			arr[y][x] = num;
//			num++;
//		}
//		ch *= (-1);
//	}
//for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int count;
//	int num[100];
//	int check;
//	int m = 0;
//	scanf("%d", &count);
//	for (int i = 0; i < count; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	scanf("%d", &check);
//	for (int i = 0; i < count; i++)
//	{
//		if (num[i] == check)
//		{
//			m++;
//		}
//	}
//	printf("%d", m);
//	return 0;
//}

#include<stdio.h>


int main()
{
	int N;
	int arr[1000000] = {};
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d %d", min, max);
	return 0;
}