//#include<stdio.h>
//int main()
//{
//	int num = 100;
//	if (num != 100)
//	{
//		printf("100 �ƴϳ׿�.\n");
//		printf("�ƽ��׿�\n");
//	}
//	else
//		printf("100�̳׿�!.\n");
//	printf("���α׷��� �����մϴ�\n");
//}
////if��
//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("A B C Ű �� �ϳ��� ������ EnterŰ�� ��������:");
//	scanf(" %c", &ch);
//	switch (ch)
//	{
//	case 'a': case 'A': printf("A Ű�� �������ϴ�.\n"); break;
//	case 'b': case 'B': printf("B Ű�� �������ϴ�.\n"); break;
//	case 'c': case 'C': printf("C Ű�� �������ϴ�.\n"); break;
//	default: printf("�߸� �������ϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int first, last;
//	printf("���۰�=>");
//	scanf("%d", &first);
//	printf("����=>");
//	scanf("%d", &last);
//	int k = first;
//	if (first > last)
//	{
//		first = last;
//		last = k;
//	}
//	while (first <= last)
//	{
//		if (first % 2 != 0)
//			printf("%d ", first);
//		first++;
//
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int num;
//	int k = 1; 
//	int count;
//	int h;
//	printf("���ڸ� ���� �� �Է� :");
//	scanf("%d", &num);
//	while (num / k != 0)
//	{
//		k *= 10;
//	}
//	count = k / 10;
//	while (count >= 1)
//	{
//		h = num / count;
//		while (h >= 1)
//		{
//			printf("\u2665\u2665");
//			h--;
//		}
//		printf("\n");
//		num %= count;
//		count /= 10;
//	}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int soccer = 0;
	int sleep = 0;
	int book = 0;

	do {
		printf("\n%d��° ��!\n", ++day);
		printf("������ �� �ұ��?\n");
		printf("1.�ڵ� �����Ѵ�.\n");
		printf("2.�౸ �Ʒ��Ѵ�.\n");
		printf("3.������ �ܴ�.\n");
		printf("4.������ �Ѵ�.\n");
		printf("�׿�. ������.\n>>");
		scanf("%d", &command);
		if (command == 1)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("����� ���׿�.\n");
			case 3: printf("���������� ");
				break;
			case 2: printf("����� ������.\n");
			case 4: printf("ī�信�� ");
				break;
			case 5: printf("�п����� ");
			}
			printf("�ڵ� �����սô�.\n");
			study++;
		}
		else if (command == 2)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("����� ���׿�.\n");
			case 3: printf("��忡�� ");
				break;
			case 2: printf("����� ������.\n");
			case 4: printf("�ǳ� ���忡�� ");
				break;
			case 5: printf("ǲ���忡�� ");
			}
			printf("�౸�� �����սô�.\n");
			soccer++;
		}
		else if (command == 3)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("����� ���׿�.\n");
			case 3: printf("��Ʈ ������ ");
				break;
			case 2: printf("����� ������.\n");
			case 4: printf("ħ�� ������ ");
				break;
			case 5: printf("��ٴڿ��� ");
			}
			printf("���� ��ô�.\n");
			sleep++;
		}
		else if (command == 4)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("����� ���׿�.\n");
			case 3: printf("���������� ");
				break;
			case 2: printf("����� ������.\n");
			case 4: printf("�� å�� �ɾƼ� ");
				break;
			case 5: printf("ħ�뿡 ������ ");
			}
			printf("������ �սô�.\n");
			book++;
		}
		else break;
	} while (1);
	{
		if (study > soccer && study > sleep && study > book)
		{
			if (day <= 3) {
				printf("�״���Դϴ�...\n");
			}
			else {
				int level = study / 8;
				switch (level) {
				case 0: printf("�ڵ� ������ �Ǿ����ϴ�.!\n");
					break;
				case 1: printf("���α׷��Ӱ� �Ǿ����ϴ�.!\n");
					break;
				case 2: printf("FrontEnd �����ڰ� �Ǿ����ϴ�.!\n");
					break;
				case 3: printf("BackEnd�����ڰ� �Ǿ����ϴ�.!\n");
					break;
				case 4: printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.!\n");
					break;
				}
			}
		}
		if (soccer > study && soccer > sleep && soccer > book)
		{
			if (day <= 3) {
				printf("�״���Դϴ�...\n");
			}
			else {
				int level = soccer / 8;
				switch (level) {
				case 0: printf("�౸ �����ְ� �Ǿ����ϴ�.!\n");
					break;
				case 1: printf("�Ƹ��߾� ������ �Ǿ����ϴ�.!\n");
					break;
				case 2: printf("���� ������ �Ǿ����ϴ�.!\n");
					break;
				case 3: printf("���� ��ǥ ������ �Ǿ����ϴ�.!\n");
					break;
				case 4: printf("�����̾�� ������ �Ǿ����ϴ�.!\n");
					break;
				}
			}
		}
		if (soccer > study && soccer > sleep && soccer > book)
		{
			if (day <= 3) {
				printf("�״���Դϴ�...\n");
			}
			else {
				int level = soccer / 8;
				switch (level) {
				case 0: printf("�౸ �����ְ� �Ǿ����ϴ�.!\n");
					break;
				case 1: printf("�Ƹ��߾� ������ �Ǿ����ϴ�.!\n");
					break;
				case 2: printf("���� ������ �Ǿ����ϴ�.!\n");
					break;
				case 3: printf("���� ��ǥ ������ �Ǿ����ϴ�.!\n");
					break;
				case 4: printf("�����̾�� ������ �Ǿ����ϴ�.!\n");
					break;
				}
			}
		}
		if (sleep > study && sleep > soccer && sleep > book)
		{
			if (day <= 3) {
				printf("�״���Դϴ�...\n");
			}
			else {
				int level = sleep / 8;
				switch (level) {
				case 0: printf("�Ƿΰ� ȸ���Ǿ����ϴ�..!\n");
					break;
				case 1: printf("���ڴ°� ������ �Ǿ����ϴ�.!\n");
					break;
				case 2: printf("���� �ǰ��������ϴ�..!\n");
					break;
				case 3: printf("�ǰ��� ��ȭ�Ǿ����ϴ�.!\n");
					break;
				case 4: printf("����� �Ǿ����ϴ�.!\n");
					break;
				}
			}
		}
		if (book > study && book > soccer && book > sleep)
		{
			if (day <= 3) {
				printf("�״���Դϴ�...\n");
			}
			else {
				int level = book / 8;
				switch (level) {
				case 0: printf("�����ϴ� ����� �˰ԵǾ����ϴ�.!\n");
					break;
				case 1: printf("������ ��̰� ������ϴ�..!\n");
					break;
				case 2: printf("������ ������ �Ǿ����ϴ�..!\n");
					break;
				case 3: printf("������� �ö����ϴ�.!\n");
					break;
				case 4: printf("������а��� �Ǿ����ϴ�..!\n");
					break;
				}
			}
		}
		return 0;
	}
}
		
		
		//study soccer sleep book