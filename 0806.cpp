//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt;
//	printf("�Է��� ������ ? ");
//	scanf("%d", &cnt);
//	p = (int*)malloc(sizeof(int) * cnt);
//	for (i = 0;i < cnt;i++)
//	{
//		printf("%d��° ���� : ", i + 1);
//		scanf("%d",&p[i]);
//	}
//	for (i = 0;i < cnt;i++)
//	{
//		hap = hap + p[i];
//	}
//		printf("�Է��� ������ ��==>%d\n", hap);
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
//	printf("malloc �Լ� ���\n");
//	p = (int*)malloc(sizeof(int) * 3);
//	for (i = 0;i < 3;i++)
//	{
//		printf("�Ҵ�� ���� �ʱⰪp[%d]==>%d\n", i, p[i]);
//	}
//	free(p);
//	printf("\n calloc�Լ� ���\n");
//	s= (int*)calloc(sizeof(int),3);
//	for (j = 0;j < 3;j++)
//	{
//		printf("�Ҵ�� ���� �ʱⰪs[%d]==>%d\n", j, s[j]);
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
//	printf("1 ��° ���� : ");
//	scanf("%d", &p[0]);
//	cnt++;
//	for (i = 0;;i++)
//	{
//		printf("%d��° ����: ", i);
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

//#include<stdio.h>  //printf()�� �ҷ���
//#include<stdlib.h> //malloc,srand,rand,free �ҷ�����
//#include<time.h> //time�� ����ϱ� ���� �ҷ���
//
//
//
//
//void func_sort(int* pNum, int N);  //�Լ��� �̸� ����
////void func_swap(int& a, int& b);	//�Լ��� �̸� ����
//void func_swap(int& a, int& b)//���۷��� ����
//{
//	int temp = a;  //temp������ �ξ� �����ѵ� ���� ��ȯ�����ִ� �Լ�	///temp������ �� a�� ����
//	a = b; //a������ ���� �� b�� �ٲ�
//	b = temp;// b������ ���� �̸� ���ص� temp�� a�� ������ �ٲ�
//}
//int main()//���� �Լ� ����
//{
//	int N, * pNum;	//���� ����
//	scanf("%d", &N); //���� N�� ���� �޾ƿ�
//	pNum = (int*)malloc(sizeof(int) * N); //*pNum�� �迭�� ����///pNum������ ������ �迭�� �ٲ���, ũ��� intũ��� �տ��� �Է¹��� N�� ��ŭ ����
//	srand((unsigned int)time(NULL)); //rand()�Լ��� ���� ���� ����
//	printf("<�������� �Է¹��� �� ���>\n");
//	for (int i = 0; i < N; i++) //i�� 0���� Ű������ N�� �ݺ�
//	{
//		*(pNum + i) = (rand() % N) + 1;//N������ ���� �� �Ҵ�///1���� N������ �������� pNum+i�� �ش��ϴ� �����Ϳ� ���� �ο�
//		printf("%2d", pNum[i]); //���
//	}
//	func_sort(pNum, N); //���� �������� �����ϴ� �Լ� ����
//	printf("\n<�������� ���ĵ� �� ���>");
//	for (int i = 0; i < N; i++)//i�� 0���� Ű������ N�� �ݺ�
//	{
//		printf("%2d", pNum[i]);
//		if (i % 10 == 9) printf("\n");//���ٿ� 10���� ���
//	}
//	free(pNum); //�޸� ����ȭ?
//}
//
//void func_sort(int* pNum, int N)//�Լ� ����
//{
//	for (int i = 0; i < N; ++i) //i�� Ű�����鼭 N�� �ݺ�
//	{
//		for (int j =i ; j < N; ++j) //j����ŭ �ݺ�///j�� i���� Ű������ N-i�� �ݺ�
//		{
//			if (pNum[i] > pNum[j])
//				func_swap(pNum[i], pNum[j]); //���� ���ڰ� �� ũ�ٸ� ���� ���ڿ� ��ȯ�ϴ� �Լ� ����
//		}
//	}
//}



//6��° ���� void func_swap(int&a,int&b)�� ����� �����ϴ� ���: �Լ��� ���� �Լ��� ������ ��ġ�� �̵���Ų��.

//����3

//#include<stdio.h>  //printf()�� �ҷ���
//#include<stdlib.h> //malloc,srand,rand,free �ҷ�����
//#include<time.h> //time�� ����ϱ� ���� �ҷ���
//
//struct DATA {
//	int N, * pNum;	//���� ����
//};
//
//
//void func_sort(DATA *d);  //�Լ��� �̸� ����
//void func_swap(int& a, int& b)//���۷��� ����
//{
//	int temp = a;  //temp������ �ξ� �����ѵ� ���� ��ȯ�����ִ� �Լ�	///temp������ �� a�� ����
//	a = b; //a������ ���� �� b�� �ٲ�
//	b = temp;// b������ ���� �̸� ���ص� temp�� a�� ������ �ٲ�
//}
//int main()//���� �Լ� ����
//{
//	DATA data;
//	scanf("%d", &data.N); //���� N�� ���� �޾ƿ�
//	data.pNum = (int*)malloc(sizeof(int) * data.N); //*pNum�� �迭�� ����///pNum������ ������ �迭�� �ٲ���, ũ��� intũ��� �տ��� �Է¹��� N�� ��ŭ ����
//	srand((unsigned int)time(NULL)); //rand()�Լ��� ���� ���� ����
//	printf("<�������� �Է¹��� �� ���>\n");
//	for (int i = 0; i < data.N; i++) //i�� 0���� Ű������ N�� �ݺ�
//	{
//		*(data.pNum + i) = (rand() % data.N) + 1;//N������ ���� �� �Ҵ�///1���� N������ �������� pNum+i�� �ش��ϴ� �����Ϳ� ���� �ο�
//		printf("%2d", data.pNum[i]); //���
//	}
//	func_sort(&data); //���� �������� �����ϴ� �Լ� ����
//	printf("\n<�������� ���ĵ� �� ���>");
//	for (int i = 0; i < data.N; i++)//i�� 0���� Ű������ N�� �ݺ�
//	{
//		printf("%2d", data.pNum[i]);
//		if (i % 10 == 9) printf("\n");//���ٿ� 10���� ���
//	}
//	free(data.pNum); //�޸� ����ȭ?
//}
//
//void func_sort(DATA *d)//�Լ� ����
//{
//	for (int i = 0; i < (*d).N; ++i) //i�� Ű�����鼭 N�� �ݺ�
//	{
//		for (int j = i; j < d->N; ++j) //j����ŭ �ݺ�///j�� i���� Ű������ N-i�� �ݺ�
//		{
//			if (d->pNum[i] > d->pNum[j])
//				func_swap(d->pNum[i], d->pNum[j]); //���� ���ڰ� �� ũ�ٸ� ���� ���ڿ� ��ȯ�ϴ� �Լ� ����
//		}
//	}
//}

//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("�ȳ��ϼ���");
//	fclose(pFile);
//}
// 
// 
//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "�ȳ��ϼ���");
//	fclose(pFile);
//}
//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "r");
//	fscanf(pFile, "%s", name);//���Ͽ��� ���ڿ��� name���� �ҷ���
//	printf("%s", name);
//	fclose(pFile);
//}

//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n)
//	{
//		printf("���Ͽ� ���� ���� ���� �Է��ϼ���: ");
//		scanf("%s", name);
//		fprintf(pFile, "%d��° ����)%-10s]\n", n, name);
//	}
//	fclose(pFile);
//}

//#include<stdio.h>
//void main()
//{
//	FILE* readfp, * writefp;
//	char buff[1024];
//	readfp = fopen("myfile.txt", "r");
//	writefp = fopen("outfile.txt", "w");
//	if (readfp == NULL)
//	{
//		printf("������ ã�� ���Ͽ����ϴ�.\n");
//
//		return;
//	}
//	while (!feof(readfp)) {
//		fgets(buff, 1024, readfp);
//		fputs(buff, writefp);
//	}
//	fclose(readfp);
//	fclose(writefp);
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define BUFF_SIZE 30
//int main()
//{
//	char buff[BUFF_SIZE];
//	int readLen = 0;
//	FILE* src, * dst;
//	char name1[100], name2[100], enter;
//	printf("�Է¹��� ������ �̸��� �Է��ϼ��� : ");
//	scanf("%s%c", name1, &enter);
//	printf("��¹��� ������ �̸��� �Է��ϼ��� : ");
//	gets_s(name2);
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//	if (src == NULL || dst == NULL)
//	{
//		puts("������ �� ã��");
//		return -1;
//	}
//	while (true)
//	{
//		readLen = fread(buff, 1, BUFF_SIZE, src);
//		if (readLen < BUFF_SIZE)
//		{
//			if (feof(src) != 0)
//			{
//				fwrite(buff, 1, readLen, dst);
//				puts("���� ���� �Ϸ�");
//				break;
//			}
//			else {
//				printf("���� ���� ����");
//				return -1;
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//	if (fclose(src) != 0 || fclose(dst) != 0)
//	{
//		puts("������ ���� ���߽��ϴ�.");
//		return -1;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* fp = fopen("coding.txt", "w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//	fprintf(fp, "�� ���߱�\n");
//	fprintf(fp, "i: %6d\n", i);
//	fprintf(fp, "i: %7d\n", i);
//	fprintf(fp, "i: %2d\n\n", i);
//	fprintf(fp,"������ ����\n");
//	fprintf(fp, "i: %5d\n", i);
//	fprintf(fp, "���� ����\n");
//	fprintf(fp, "i: %-5d��\n\n", i);
//	fprintf(fp,"#������ ���\n");
//	fprintf(fp, "i: %#x \n", i);
//	fprintf(fp, "j: %#x\n\n", j);
//	fprintf(fp, "��ȣ���̱�\n");
//	fprintf(fp, "i: %+d, j: %+d\n", i, j);
//	fclose(fp);
//	return 0;
//}

//����1
//#include<stdio.h>
//int main()
//{
//	char a[100];
//	FILE* fp1 = fopen("question1.txt", "w");
//	FILE* fp2 = fopen("question2.txt", "w");
//
//	gets_s(a);
//	fprintf(fp1, a);
//	gets_s(a);
//	fprintf(fp2, a);
//
//
//	fclose(fp1);
//	fclose(fp2);
//
//	fp1 = fopen("question1.txt", "r");
//	fp2 = fopen("question2.txt", "r");
//
//	char r[100];
//	fgets(r,1024, fp1);
//	char r2[100];
//	fgets(r2, 1024, fp2);
//	printf("%s", r);
//	printf("%s", r2);
//
//
//
//	fclose(fp1);
//	fclose(fp2);
//
//	int same = 0;
//	int i = 0;
//	for (;r[i] != NULL;i++)
//	{
//		if (r[i] == r2[i]) same += 1;
//	}
//	printf("%d", same);
//
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAXENERGY 6
void printfenergy(int my)
{
	printf("�� ���: ");
	for (int i = 0; i < my; i++)
	{
		printf("��");
	}
	for (int i = my;i<MAXENERGY;i++)
	{
		printf("��");
	}
	printf("\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	char num[4] = "___", tmp[4];
	int answer = rand() % 1000;
	sprintf(tmp, "%03d", answer);
	int energy = MAXENERGY;
	char input;
	while (1)
	{
		printfenergy(energy);
		if (!energy) {
			printf("���� ����");
			printf("���� : %s", tmp);
			break;
		}
		printf("���� : %s\n\n", num);
		if (atoi(num) == answer)
		{
			printf("���� �¸�!\n");
			break;
		}
		printf("���ڸ� ���纸���� : ");
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
	}
	return 0;
}