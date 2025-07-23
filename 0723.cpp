//#include<stdio.h>
//int main()
//{
//	int arr[9] = {};
//	for (int i = 0; i <= 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int check = 1;
//
//	for (int i = 0; i <= 8; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			check = i + 1;
//		}
//	}
//	printf("%d\n", max);
//	printf("%d", check);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int N, M;
//	scanf("%d", &N);
//	scanf("%d", &M);
//	int arr[100] = {};
//	int i, j, k;
//	for (int r = 0; r <= M - 1; r++)
//	{
//		scanf("%d", &i);
//		scanf("%d", &j);
//		scanf("%d", &k);
//		for (int h = i - 1; h <= j - 1; h++)
//		{
//			arr[h] = k;
//		}
//	}
//	
//	for (int h = 0; h <= N - 1; h++)
//	{
//		printf("%d ", arr[h]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100] = {};
//	int i, j, M, N;
//	scanf("%d", &N);
//	scanf("%d", &M);
//	for (int k = 0; k <= N-1; k++)
//	{
//		arr[k] = k + 1;
//	}
//	int t = 0;
//	for (int k = 0; k <= M - 1; k++)
//	{
//		scanf("%d", &i);
//		scanf("%d", &j);
//		t = arr[i - 1];
//		arr[i - 1] = arr[j - 1];
//		arr[j - 1] = t;
//	}
//	for (int k = 0; k <= N - 1; k++)
//	{
//		printf("%d ",arr[k]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ans[30] = {};
//	int arr[28] = {};
//	for (int i = 0; i <28; i++)
//	{
//		scanf("%d", &arr[i]);
//		ans[arr[i] - 1] = 1;
//	}
//	for (int i = 0; i <= 29; i++)
//	{
//		if (ans[i] != 1)
//		{
//			printf("%d\n", i + 1);
//		}
//	}
//}
//ex1
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		arr[i] %= 42;
//	}
//	int ans = 0;
//	for (int j = 0; j <= 9; j++)
//	{
//		int check = arr[j];
//		int k = 1;
//		for (int i = 0; i <= 9; i++)
//		{
//			if (j!=i&&check == arr[i])
//			{
//				k = 0;
//			}
//		}
//		ans += k;
//	}
//	printf("%d", ans);
//	return 0;
//}


////ex2
// #include<stdio.h>
//int main()
//{
//	int arr2[42] = {};
//	for (int i = 0; i < 10; i++)
//	{
//		int arr;
//		scanf("%d", &arr);
//		arr2[arr % 42] = 1;
//	}
//	int ans = 0;
//	for (int i = 0; i < 42; i++)
//	{
//		if (arr2[i] == 1)
//			ans += 1;
//	}
//	printf("%d", ans);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int arr2[100];
//	for (int i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//		arr2[i] =i+1; 
//	}
//	int N, M;
//	scanf("%d", &N);
//	scanf("%d", &M);
//	int i, j;
//	for (int k = 0; k <= M - 1; k++)
//	{
//		scanf("%d", &i);
//		scanf("%d", &j);
//		for (int k = i - 1; k<j; k++)
//		{
//			arr[k] = arr2[j-1-(k-i+1)];
//		}
//		for (int k = i - 1; k < j; k++)
//		{
//			arr2[k] = arr[k];
//		}
//	}
//	for (int k = 0; k <= N - 1; k++)
//	{
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int N;
//	float arr[1000];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	float max = arr[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (max < arr[i]) max = arr[i];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		arr[i] = arr[i] / max * 100;
//	}
//	float ans=0;
//	for (int i = 0; i < N; i++)
//	{
//		ans += arr[i];
//	}
//	printf("%f",ans/N);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[100][100] = {};
//	int arr2[100][100] = {};
//	int N, M;
//	scanf("%d", &N);
//	scanf("%d", &M);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			arr1[i][j] += arr2[i][j];
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[9][9];
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = arr[0][0];
//	int a = 1;
//	int b = 1;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//				a = i+1;
//				b = j+1;
//			}
//		}
//	}
//	printf("%d\n%d %d", max, a, b);
//	return 0;
//}
#include<stdio.h>
int main()
{
	char arr[5][15] = {};
	 for (int i = 0; i < 5; i++) {
		 for (int j = 0; j < 15; j++) {
			 scanf("%c", &arr[i][j]);
			 if (arr[i][j] == '\n') break;
		 }
	 }
	 for (int i = 0; i < 15; i++) {
		 for (int j = 0; j < 5; j++) {
			 if (arr[j][i] == 0||arr[j][i]=='\n') continue;
			 else printf("%c",arr[j][i]);
		 }
	 }
	 return 0;
}