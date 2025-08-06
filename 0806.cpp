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

//#include<stdio.h>  //printf()를 불러옴
//#include<stdlib.h> //malloc,srand,rand,free 불러오기
//#include<time.h> //time을 사용하기 위해 불러옴
//
//
//
//
//void func_sort(int* pNum, int N);  //함수를 미리 선언
////void func_swap(int& a, int& b);	//함수를 미리 선언
//void func_swap(int& a, int& b)//레퍼런스 문법
//{
//	int temp = a;  //temp변수를 두어 저장한뒤 값을 교환시켜주는 함수	///temp변수에 값 a를 넣음
//	a = b; //a변수의 값을 값 b로 바꿈
//	b = temp;// b변수의 값을 미리 정해둔 temp즉 a의 값으로 바꿈
//}
//int main()//메인 함수 선언
//{
//	int N, * pNum;	//변수 설정
//	scanf("%d", &N); //정수 N의 값을 받아옴
//	pNum = (int*)malloc(sizeof(int) * N); //*pNum을 배열로 만듬///pNum포인터 형식을 배열로 바꿔줌, 크기는 int크기로 앞에서 입력받은 N개 만큼 만듬
//	srand((unsigned int)time(NULL)); //rand()함수를 쓰기 위해 설정
//	printf("<랜덤으로 입력받은 수 출력>\n");
//	for (int i = 0; i < N; i++) //i를 0부터 키워가며 N번 반복
//	{
//		*(pNum + i) = (rand() % N) + 1;//N이하의 랜덤 수 할당///1부터 N까지의 랜덤수를 pNum+i에 해당하는 포인터에 값을 부여
//		printf("%2d", pNum[i]); //출력
//	}
//	func_sort(pNum, N); //오름 차순으로 정렬하는 함수 시행
//	printf("\n<오름차순 정렬된 수 출력>");
//	for (int i = 0; i < N; i++)//i를 0부터 키워가며 N번 반복
//	{
//		printf("%2d", pNum[i]);
//		if (i % 10 == 9) printf("\n");//한줄에 10개씩 출력
//	}
//	free(pNum); //메모리 자유화?
//}
//
//void func_sort(int* pNum, int N)//함수 내용
//{
//	for (int i = 0; i < N; ++i) //i를 키워가면서 N번 반복
//	{
//		for (int j =i ; j < N; ++j) //j번만큼 반복///j를 i부터 키워가며 N-i번 반복
//		{
//			if (pNum[i] > pNum[j])
//				func_swap(pNum[i], pNum[j]); //앞의 숫자가 더 크다면 뒤의 숫자와 교환하는 함수 실행
//		}
//	}
//}



//6번째 줄의 void func_swap(int&a,int&b)를 지우고 실행하는 방법: 함수를 메인 함수의 앞으로 위치를 이동시킨다.

//문제3

//#include<stdio.h>  //printf()를 불러옴
//#include<stdlib.h> //malloc,srand,rand,free 불러오기
//#include<time.h> //time을 사용하기 위해 불러옴
//
//struct DATA {
//	int N, * pNum;	//변수 설정
//};
//
//
//void func_sort(DATA *d);  //함수를 미리 선언
//void func_swap(int& a, int& b)//레퍼런스 문법
//{
//	int temp = a;  //temp변수를 두어 저장한뒤 값을 교환시켜주는 함수	///temp변수에 값 a를 넣음
//	a = b; //a변수의 값을 값 b로 바꿈
//	b = temp;// b변수의 값을 미리 정해둔 temp즉 a의 값으로 바꿈
//}
//int main()//메인 함수 선언
//{
//	DATA data;
//	scanf("%d", &data.N); //정수 N의 값을 받아옴
//	data.pNum = (int*)malloc(sizeof(int) * data.N); //*pNum을 배열로 만듬///pNum포인터 형식을 배열로 바꿔줌, 크기는 int크기로 앞에서 입력받은 N개 만큼 만듬
//	srand((unsigned int)time(NULL)); //rand()함수를 쓰기 위해 설정
//	printf("<랜덤으로 입력받은 수 출력>\n");
//	for (int i = 0; i < data.N; i++) //i를 0부터 키워가며 N번 반복
//	{
//		*(data.pNum + i) = (rand() % data.N) + 1;//N이하의 랜덤 수 할당///1부터 N까지의 랜덤수를 pNum+i에 해당하는 포인터에 값을 부여
//		printf("%2d", data.pNum[i]); //출력
//	}
//	func_sort(&data); //오름 차순으로 정렬하는 함수 시행
//	printf("\n<오름차순 정렬된 수 출력>");
//	for (int i = 0; i < data.N; i++)//i를 0부터 키워가며 N번 반복
//	{
//		printf("%2d", data.pNum[i]);
//		if (i % 10 == 9) printf("\n");//한줄에 10개씩 출력
//	}
//	free(data.pNum); //메모리 자유화?
//}
//
//void func_sort(DATA *d)//함수 내용
//{
//	for (int i = 0; i < (*d).N; ++i) //i를 키워가면서 N번 반복
//	{
//		for (int j = i; j < d->N; ++j) //j번만큼 반복///j를 i부터 키워가며 N-i번 반복
//		{
//			if (d->pNum[i] > d->pNum[j])
//				func_swap(d->pNum[i], d->pNum[j]); //앞의 숫자가 더 크다면 뒤의 숫자와 교환하는 함수 실행
//		}
//	}
//}

//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요");
//	fclose(pFile);
//}
// 
// 
//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//}
//#include<stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "r");
//	fscanf(pFile, "%s", name);//파일에서 문자열을 name으로 불러옴
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
//		printf("파일에 쓰고 싶은 말을 입력하세요: ");
//		scanf("%s", name);
//		fprintf(pFile, "%d번째 내용)%-10s]\n", n, name);
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
//		printf("파일을 찾지 못하였습니다.\n");
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
//	printf("입력받을 파일의 이름을 입력하세요 : ");
//	scanf("%s%c", name1, &enter);
//	printf("출력받을 파일의 이름을 입력하세요 : ");
//	gets_s(name2);
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//	if (src == NULL || dst == NULL)
//	{
//		puts("파일을 못 찾음");
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
//				puts("파일 복사 완료");
//				break;
//			}
//			else {
//				printf("파일 복사 실패");
//				return -1;
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//	if (fclose(src) != 0 || fclose(dst) != 0)
//	{
//		puts("파일을 닫지 못했습니다.");
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
//	fprintf(fp, "폭 맞추기\n");
//	fprintf(fp, "i: %6d\n", i);
//	fprintf(fp, "i: %7d\n", i);
//	fprintf(fp, "i: %2d\n\n", i);
//	fprintf(fp,"오른쪽 정렬\n");
//	fprintf(fp, "i: %5d\n", i);
//	fprintf(fp, "왼쪽 정렬\n");
//	fprintf(fp, "i: %-5d끝\n\n", i);
//	fprintf(fp,"#문자의 사용\n");
//	fprintf(fp, "i: %#x \n", i);
//	fprintf(fp, "j: %#x\n\n", j);
//	fprintf(fp, "부호붙이기\n");
//	fprintf(fp, "i: %+d, j: %+d\n", i, j);
//	fclose(fp);
//	return 0;
//}

//문제1
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
	printf("내 목숨: ");
	for (int i = 0; i < my; i++)
	{
		printf("■");
	}
	for (int i = my;i<MAXENERGY;i++)
	{
		printf("□");
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
	}
	return 0;
}