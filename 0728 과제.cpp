//#include<stdio.h>
//void main()
//{
//	char ch;
//	char* p;
//	ch = 'A';
//	p = &ch;
//	printf("ch�� ������ �ִ� ��: ch ==> %c\n", ch);
//	printf("ch�� �ּ�(address):&ch==>%d\n", &ch);
//	printf("p�� ������ �ִ� ��:p==>%d\n", p);
//	printf("p�� ����Ű�� ���� ���� ��: *p==>%c\n", *p);
//}

//#include<stdio.h>
//void main()
//{
//	char ch;
//	char* p;
//	char* q;
//	ch = 'A';
//	p = &ch;
//	q = p;
//	*q = 'Z';
//	printf("ch�� ������ �ִ� ��: ch==>%c\n\n", ch);
//}

//#include<stdio.h>
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//	p = s;
//	printf("&s[3]==>%s\n", &s[3]);
//	printf("p+3==>%s\n\n", p + 3);
//	printf("s[3]==>%c\n", s[3]);
//	printf("*(p+3)==>%c\n", *(p + 3));
//}

//#include<stdio.h>
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//	int i;
//	p = s;
//	for (i = sizeof(s) - 2;i >= 0;i--)
//	{
//		printf("%c", *(p+i));
//	}
//	printf("\n");
//}

//#include<stdio.h>
//void main()
//{
//	int a, b, tmp;
//	int* p1, * p2;
//	printf("a�� �� �Է� : ");
//	scanf("%d", &a);
//	printf("b�� �� �Է� : ");
//	scanf("%d", &b);
//	p1 = &a;
//	p2 = &b;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//	printf("�ٲ� �� a�� %d, b�� %d\n", a, b);
//
//}

//#include<stdio.h>
//void main()
//{
//	int s[10] = { 1,0,3,2,5,4,7,6,9,8 };
//	int tmp;
//	int i, k;
//	int* p;
//	p = s;
//	printf("���� �� �迭 s==>");
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", *(p + i));
//	}
//	printf("\n");
//	for (i = 0;i < 9;i++)
//	{
//		for (k = i + 1;k < 10;k++)
//		{
//			if (*(p + i) > *(p + k))
//			{
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//	}
//	printf("���� �� �迭 s==> ");
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", *(p + i));
//	}
//	printf("\n");
//}