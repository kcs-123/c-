//strlen�Լ� �����
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

//����4
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
//			printf("�߸��� �Է��Դϴ�.\n�ٽ� �Է����ּ���: ");
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
//	printf("������ �ִ� ���� �Է��ϼ���:");
//	int money = get_money();
//	const int N = 6;
//	DRINK drinks[N] = { { 1300,12,"coke" }, { 1200,7,"soda" }, { 1500,5,"apple" }, { 1000,5,"orange" }, { 700,20,"water" },{2000,8,"berry" } };
//	printf("<<�������Ǳ�!>>\n");
//	while (choice != 0)
//	{
//		printf("���� �ܾ��� %d���Դϴ�.\n", money);
//		printf("0�� ������ �ֹ��� �����մϴ�.\n");
//		for (int i = 0; i < N; i++)
//		{
//			printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), drinks[i].name, drinks[i].price, drinks[i].stock);
//		}
//		scanf("%d", &choice);
//		if (choice == 0)
//		{
//			break;
//		}
//		else if (choice < 1||choice>N)
//		{
//			printf("���� ��ǰ��ȣ�Դϴ�__ �ٽ� �Է����ּ���.\n");
//			continue;
//		}
//		if (drinks[choice - 1].stock <= 0)
//		{
//			printf("��� �����ϴ�.\n �ٽ� �������ּ���.\n");
//			continue;
//		}
//		if (money < drinks[choice - 1].price)
//		{
//
//			printf("���� �����մϴ�.\n");
//			printf("���� �� �־��ּ��� : ");
//			add_money = get_money();
//			money += add_money;
//			continue;
//		}
//		else
//		{
//			printf("%s�� ���Խ��ϴ�.\n", drinks[choice - 1].name);
//			drinks[choice - 1].stock -= 1;
//			money -= drinks[choice - 1].price;
//			printf("���� ���� %d���Դϴ�.\n", money);
//		}
//		printf("���� ȭ������ ���ư��ϴ�.\n\n");
//	}
//	printf("�Ž������� %d���Դϴ�.\n�̿����ּż� �����մϴ�.\n",money);
//}

/*
* ������� ������ 'n'�� �ƴѵ���---
1.���� ������ ��ǰ �ľ�
2.���� ������ ��ǰ�� ǥ��
3.���� ����
3.���� ���� ������ ���
4.�̿��ڰ� ���ϴ� ���Ḧ ����
5.���� ��� ������
--���Ḧ ����
���� ���� ������
--�ٸ� ��ǰ�� �����ش޶�� ��û
�̿��ڰ� ���ϴ� ���ᰡ ���� ������ ��Ҷ�
-���� �����ϴٰ� ��� �� ���� �Ž��� �ְ� �Է��� �ٽ�???
5.�̿��ڰ� ���ϴ� ���Ḧ ����
6.������ ���� ������ �� ���� ���
�ܾ� ���� �� ������ ���

9.n�� ������ ���� ���� �Ž��������� ��ȯ
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

//����1
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

//����2
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
void func_sort(int* pNum, int N);  //�Լ��� �̸� ����
void func_swap(int& a, int& b);	//�Լ��� �̸� ����
int main()//���� �Լ� ����
{
	int N, * pNum;	//���� ����
	scanf("%d", &N); //���� N�� ���� �޾ƿ�
	pNum = (int*)malloc(sizeof(int) * N); //*pNum�� �迭�� ����
	srand((unsigned int)time(NULL)); //rand()�Լ��� ���� ���� ����
	printf("<�������� �Է¹��� �� ���>\n");
	for (int i = 0; i < N; i++) //�Է� ���� N��ŭ�� �����Ϳ� ���� ���� �Ҵ�
	{
		*(pNum + i) = (rand() % N) + 1;//N������ ���� �� �Ҵ�
		printf("%2d", pNum[i]); //���
	}
	func_sort(pNum, N); //���� �������� �����ϴ� �Լ� ����
	printf("\n<�������� ���ĵ� �� ���>");
	for (int i = 0; i < N; i++)
	{
		printf("%2d", pNum[i]);
		if (i % 10 == 9) printf("\n");//���ٿ� 10���� ���
	}
	free(pNum); //�޸� ����ȭ?
}

void func_sort(int* pNum, int N)//�Լ� ����
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

void func_swap(int& a, int& b)//���۷��� ����
{
	int temp = a;
	a = b;
	b = temp;
}