//strlen함수 만들기
//#include<stdio.h>
//
//int strlength_test(char* i)
//{
//	int result = 0;
//	for (; *i != NULL; i += 1)
//	{
//		result += 1;
//	}
//	return result;
//}
//
//int main()
//{
//	char str[100];
//	gets_s(str);
//	//scanf("%s", str);
//	int result2=strlength_test(str);
//	printf("%d", result2);
//	return 0;
//}

//문제4
//#include<stdio.h>
//struct DRINK {
//	int price;
//	int stock;
//	char name[20];
//};
//int get_money()
//{
//	int m;
//	scanf("%d", &m);
//	if (m < 0)
//	{
//		for (;;)
//		{
//			printf("잘못된 입력입니다.\n다시 입력해주세요: ");
//			scanf("%d", &m);
//			printf("\n");
//			if (m >= 0) break;
//		}
//	}
//	return m;
//}
//void main()
//{
//	int add_money;
//	int choice = 10;
//	printf("가지고 있는 돈을 입력하세요:");
//	int money = get_money();
//	const int N = 6;
//	DRINK drinks[N] = { { 1300,12,"coke" }, { 1200,7,"soda" }, { 1500,5,"apple" }, { 1000,5,"orange" }, { 700,20,"water" },{2000,8,"berry" } };
//	printf("<<음료자판기!>>\n");
//	while (choice != 0)
//	{
//		printf("현재 잔액은 %d원입니다.\n", money);
//		printf("0을 누르면 주문을 종료합니다.\n");
//		for (int i = 0; i < N; i++)
//		{
//			printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), drinks[i].name, drinks[i].price, drinks[i].stock);
//		}
//		scanf("%d", &choice);
//		if (choice == 0)
//		{
//			break;
//		}
//		else if (choice < 1||choice>N)
//		{
//			printf("없는 상품번호입니다__ 다시 입력해주세요.\n");
//			continue;
//		}
//		if (drinks[choice - 1].stock <= 0)
//		{
//			printf("재고가 없습니다.\n 다시 선택해주세요.\n");
//			continue;
//		}
//		if (money < drinks[choice - 1].price)
//		{
//
//			printf("돈이 부족합니다.\n");
//			printf("돈을 더 넣어주세요 : ");
//			add_money = get_money();
//			money += add_money;
//			continue;
//		}
//		else
//		{
//			printf("%s가 나왔습니다.\n", drinks[choice - 1].name);
//			drinks[choice - 1].stock -= 1;
//			money -= drinks[choice - 1].price;
//			printf("남은 돈은 %d원입니다.\n", money);
//		}
//		printf("선택 화면으로 돌아갑니다.\n\n");
//	}
//	printf("거스름돈은 %d원입니다.\n이용해주셔서 감사합니다.\n",money);
//}

/*
* 사용자의 선택이 'n'이 아닌동안---
1.구매 가능한 상품 파악
2.구매 가능한 상품을 표시
3.돈을 받음
3.들어온 돈이 얼마인지 계산
4.이용자가 원하는 음료를 받음
5.음료 재고가 있을때
--음료를 제공
음료 제고가 없을때
--다른 상품을 선택해달라고 요청
이용자가 원하는 음료가 받은 돈보다 비쌀때
-돈이 부족하다고 출력 후 돈을 거슬러 주고 입력을 다시???
5.이용자가 원하는 음료를 제공
6.돈에서 음료 가격을 뺀 돈을 계산
잔액 설명 및 선택을 물어봄

9.n을 받으면 남은 돈을 거스름돈으로 반환
*/


//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int* iptr = (int*)malloc(sizeof(int));
//	char* cptr = (char*)malloc(sizeof(char));
//	double* dptr = (double*)malloc(sizeof(double));
//	*iptr = 5;
//	*cptr = 'a';
//	*dptr = 3.5;
//	printf("%d, %c, %1f", *iptr, *cptr, *dptr);
//	free(iptr);
//	free(cptr);
//	free(dptr);
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr_1[5];
//	int* arr_2;
//	for (int i = 0; i < 5; i++)
//	{
//		arr_1[i] = i + 1;
//	}
//	arr_2 = (int*)malloc(sizeof(int) * 5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr_2[i] = arr_1[i];
//		printf("%d,", arr_2[i]);
//	}
//	free(arr_2);
//	return 0;
//}

//문제1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int nRow = 5, nCol = 4;
//	int** aNum;
//	aNum = new int*[nRow];
//	for (int i = 0; i < nRow; i++)
//	{
//		aNum[i] = new int[nCol];
//		for (int j = 0; j < nCol; ++j)
//		{
//			aNum[i][j] = i * 10 + j;
//		}
//	}
//	for (int i = 0; i < nRow; ++i)
//	{
//		for (int j = 0; j < nCol; ++j)
//		{
//			printf("%02d", aNum[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < nRow; ++i) delete aNum[i];
//	delete aNum;
//}

//문제2
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int* arr = (int*)malloc(10 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//		printf("%d ", arr[i]);
//	}
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void func_sort(int* pNum, int N);  //함수를 미리 선언
void func_swap(int& a, int& b);	//함수를 미리 선언
int main()//메인 함수 선언
{
	int N, * pNum;	//변수 설정
	scanf("%d", &N); //정수 N의 값을 받아옴
	pNum = (int*)malloc(sizeof(int) * N); //*pNum을 배열로 만듬
	srand((unsigned int)time(NULL)); //rand()함수를 쓰기 위해 설정
	printf("<랜덤으로 입력받은 수 출력>\n");
	for (int i = 0; i < N; i++) //입력 받은 N만큼의 포인터에 랜덤 값을 할당
	{
		*(pNum + i) = (rand() % N) + 1;//N이하의 랜덤 수 할당
		printf("%2d", pNum[i]); //출력
	}
	func_sort(pNum, N); //오름 차순으로 정렬하는 함수 시행
	printf("\n<오름차순 정렬된 수 출력>");
	for (int i = 0; i < N; i++)
	{
		printf("%2d", pNum[i]);
		if (i % 10 == 9) printf("\n");//한줄에 10개씩 출력
	}
	free(pNum); //메모리 자유화?
}

void func_sort(int* pNum, int N)//함수 내용
{
	for (int i = 0; i < N;++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (pNum[i] > pNum[j])
				func_swap(pNum[i], pNum[j]); //
		}
	}
}

void func_swap(int& a, int& b)//레퍼런스 문법
{
	int temp = a;
	a = b;
	b = temp;
}