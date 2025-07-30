//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* str1 = (char*)"coding";
//	char* str2 = (char*)"coding";
//	char* str3 = (char*)"coding.ne.kr";
//	char* str4 = (char*)"ne.kr";
//	char* str5 = (char*)"abcd";
//	printf("%s with %s=%d\n", str1, str2, memcmp(str1, str2, strlen(str1)));
//	printf("%s with %s(str1 size)=%d\n", str1, str3, memcmp(str1, str3, strlen(str1)));
//	printf("%s with %s(str2 size)=%d\n", str1, str3, memcmp(str1, str3, strlen(str3)));
//	printf("%s with %s=%d\n", str1, str4, memcmp(str1, str4, strlen(str1)));
//	printf("%s with %s (str1 size)=%d\n", str1, str5, memcmp(str1, str5, strlen(str1)));
//	printf("%s with %s (str5 size)=%d\n", str1, str5, memcmp(str1, str5, strlen(str5)));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int src_data[10] = { 0,1,2,3,4,5 };
//	int dst_data[10] = { 10,20,30,40,50 };
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[20] = "coding";
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[10];
//	scanf("%s", str);
//	printf("입력한 문자열: %s\n", str);
//	printf("문자열의 길이:%d\n", strlen(str));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"...\n", str);
//	pch = strchr(str, 's');
//	while (pch != NULL)
//	{
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample",6);
//	printf("%s\n", str);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//	printf("s1[%-7s],s2[%-7s]=>ret=[%2d]\n",str1,str2,strcmp(str1,str2));
//	printf("s2[%-7s],s3[%-7s]=>ret=[%2d]\n", str2, str3, strcmp(str2, str3));
//	printf("s3[%-7s],s1[%-7s]=>ret=[%2d]\n", str3, str1, strcmp(str3, str1));
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char buf[25];
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	strncpy(buf, "www world", 5);
//	printf("%s\n", buf);
//	return 0;
//}

////문제1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char buff[100];
//	gets_s(buff);
//	char sch;
//	char* pch;
//	for (;;)
//	{
//		printf("검색할 문자를 입력하세요: ");
//		scanf(" %c", &sch);
//		if (sch == '0')
//		{
//			break;
//		}
//		pch = strchr(buff, sch);
//		while (pch != NULL)
//		{
//			printf("found at %d\n", pch - buff + 1);
//			pch = strchr(pch + 1, sch);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int parsing(char* string, int* data)
//{
//	char* p;
//	int cnt;
//	cnt = 0;
//	p = strtok(string, "_");
//	while (p)
//	{
//		data[cnt++] = atoi(p);
//		p = strtok(NULL, "_");
//	}
//	return cnt;
//}
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//	cnt = parsing(String, data);
//	for (i = 0;i < cnt; i++)
//	{
//		printf("%d\n", data[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int integer = 123;
//	char character = 'c';
//	char string[] = "hello world";
//	int* pointer = &integer;
//	double pi = 3.141592;
//	char buf[100];
//	sprintf(buf, "integer:(decimal) %d (octal) %o \n", integer, integer);
//	printf("%s \n", buf);
//	sprintf(buf, "character : %c \n",character);
//	printf("%s \n", buf);
//	sprintf(buf, "pointer addr %p \n", pointer);
//	printf("%s \n", buf);
//	sprintf(buf, "floating point : %e //%f \n", pi, pi);
//	printf("%s \n", buf);
//	sprintf(buf, "percent symbol : %% \n");
//	printf("%s \n", buf);
//	return 0;
//}

//문제2
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char parsing(char* string, int* data)
//{
//	char* p;
//	char oper;
//	p = strtok(string," ");
//	data[0] = atoi(p);
//	p = strtok(NULL, " ");
//	oper = *p;
//	p = strtok(NULL, " ");
//	data[1] = atoi(p);
//	p = strtok(NULL, " ");
//	p = strtok(NULL, " ");
//	data[2] = atoi(p);
//	return oper;
//}


//int main()
//{
//	char String[100];
//	gets_s(String);
//	int data[3];
//	char oper = parsing(String, data);
//	int result;
//	
//	switch (oper)
//	{
//	case '+':
//		result = data[0] + data[1];
//		break;
//	case '-':
//		result = data[0] - data[1];
//		break;
//	case '*':
//		result = data[0] * data[1];
//		break;
//	case '/':
//		result = data[0] / data[1];
//		break;
//	case '%':
//		result = data[0] % data[1];
//		break;
//	}
//	if (result == data[2])
//	{
//		printf("참입니다.");
//	}
//	else
//	{
//		printf("%d %c %d = %d입니다.", data[0], oper, data[1], result);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//struct GM {
//	int no;
//	char name[10];
//	int part;
//	int salary;
//};
//struct COMPANY {
//	GM gms[5];
//	int gmCount = 0;
//};
//COMPANY HireGM_once(COMPANY i)
//{
//	i.gms[i.gmCount].no = i.gmCount+1;
//	printf("GM의 이름을 입력하세요: ");
//	scanf(" %s",i.gms[i.gmCount].name);
//	printf("근무시간을 입력하세요 : ");
//	scanf("%d", &i.gms[i.gmCount].part);
//	printf("월급을 입력하세요 : ");
//	scanf("%d",&i.gms[i.gmCount].salary);
//	
//	i.gmCount += 1;
//	return i;
//}
//void main()
//{
//	printf("게임을 출시해보자!\n");
//	COMPANY gameCo;
//	printf("먼저 GM부터 고용할까?\n");
//	while (1)
//	{
//		gameCo = HireGM_once(gameCo);
//		printf("더 고용할까?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
//}

//#include<stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
//{
//	const int N = 2;
//	SNACK snacks[N] = {
//		{1500,3,"레몬칩"},{1000,2,"달고나"}
//	};
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), snacks[i].name,snacks[i].price,snacks[i].stock);
//	}
//	int choice;
//	scanf("%d", &choice);
//	printf("%s 나왔습니다.\n", snacks[choice - 1].name);
//}

//문제4
#include<stdio.h>
struct DRINK {
	int price;
	int stock;
	char name[20];
};
void main()
{
	int choice = 0;
	int money;
	printf("가지고 있는 돈을 입력하세요:");
	scanf("%d", &money);
	const int N = 6;
	DRINK drinks[6] = { { 1300,12,"coke" }, { 1200,7,"soda" }, { 1500,5,"apple" }, { 1000,5,"orange" }, { 700,20,"water" },{2000,8,"berry" } };
	printf("<<음료자판기!>>\n");
	while (choice != 'n')
	{
		for (int i = 0; i < N; i++)
		{
			printf("%d.[%6s] %4d원 (%d개 남음)\n", (i + 1), drinks[i].name, drinks[i].price, drinks[i].stock);
		}
		scanf("%d", &choice);
		if (money < drinks[choice - 1].price)
		{
			printf("돈이 부족합니다.\n");
		
		}
		else 
		{
			printf("%s가 나왔습니다.\n", drinks[choice - 1].name);
			drinks[choice - 1].stock -= 1;
			money -= drinks[choice - 1].price;
			printf("거스름 돈은 % d원 입니다.\n", money);
		}
	}
}

/*
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
--추가 돈 입력을 기다림
5.이용자가 원하는 음료를 제공
6.돈에서 음료 가격을 뺀 돈을 계산
7.추가 주문 여부를 물어봄
8.추가 주문 여부가 참이라면 위의 과정을 반복
9.주문이 끝나면 남은 돈을 거스름돈으로 반환
*/