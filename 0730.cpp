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
//	printf("�Է��� ���ڿ�: %s\n", str);
//	printf("���ڿ��� ����:%d\n", strlen(str));
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

////����1
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
//		printf("�˻��� ���ڸ� �Է��ϼ���: ");
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

//����2
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
//		printf("���Դϴ�.");
//	}
//	else
//	{
//		printf("%d %c %d = %d�Դϴ�.", data[0], oper, data[1], result);
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
//	printf("GM�� �̸��� �Է��ϼ���: ");
//	scanf(" %s",i.gms[i.gmCount].name);
//	printf("�ٹ��ð��� �Է��ϼ��� : ");
//	scanf("%d", &i.gms[i.gmCount].part);
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d",&i.gms[i.gmCount].salary);
//	
//	i.gmCount += 1;
//	return i;
//}
//void main()
//{
//	printf("������ ����غ���!\n");
//	COMPANY gameCo;
//	printf("���� GM���� ����ұ�?\n");
//	while (1)
//	{
//		gameCo = HireGM_once(gameCo);
//		printf("�� ����ұ�?(y/n) : ");
//		char ch;
//		do {
//			ch = getchar();
//		} while (ch != 'y' && ch != 'n');
//		if (ch == 'n') break;
//	}
//	printf("GM %d���� �̾Ҵ�!\n", gameCo.gmCount);
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
//		{1500,3,"����Ĩ"},{1000,2,"�ް�"}
//	};
//	printf("<<�������Ǳ�!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), snacks[i].name,snacks[i].price,snacks[i].stock);
//	}
//	int choice;
//	scanf("%d", &choice);
//	printf("%s ���Խ��ϴ�.\n", snacks[choice - 1].name);
//}

//����4
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
	printf("������ �ִ� ���� �Է��ϼ���:");
	scanf("%d", &money);
	const int N = 6;
	DRINK drinks[6] = { { 1300,12,"coke" }, { 1200,7,"soda" }, { 1500,5,"apple" }, { 1000,5,"orange" }, { 700,20,"water" },{2000,8,"berry" } };
	printf("<<�������Ǳ�!>>\n");
	while (choice != 'n')
	{
		for (int i = 0; i < N; i++)
		{
			printf("%d.[%6s] %4d�� (%d�� ����)\n", (i + 1), drinks[i].name, drinks[i].price, drinks[i].stock);
		}
		scanf("%d", &choice);
		if (money < drinks[choice - 1].price)
		{
			printf("���� �����մϴ�.\n");
		
		}
		else 
		{
			printf("%s�� ���Խ��ϴ�.\n", drinks[choice - 1].name);
			drinks[choice - 1].stock -= 1;
			money -= drinks[choice - 1].price;
			printf("�Ž��� ���� % d�� �Դϴ�.\n", money);
		}
	}
}

/*
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
--�߰� �� �Է��� ��ٸ�
5.�̿��ڰ� ���ϴ� ���Ḧ ����
6.������ ���� ������ �� ���� ���
7.�߰� �ֹ� ���θ� ���
8.�߰� �ֹ� ���ΰ� ���̶�� ���� ������ �ݺ�
9.�ֹ��� ������ ���� ���� �Ž��������� ��ȯ
*/