//����4
//#include<stdio.h>
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while (1)
//	{
//		multi = multi*number;
//		if (multi >= 50000)
//		{
//			break;
//		}
//		number += 1;
//	}
//	printf("%d", number);
//	return 0;
//}

//����5
//#include<stdio.h>
//int main()
//{
//	char alphabet = 'A';
//	while (alphabet <= 'Z')
//	{
//		if(alphabet=='F')
//		{
//			alphabet += 1;
//			continue;
//		}
//		printf("%c ", alphabet);
//		alphabet += 1;
//		
//	}
//	return 0;
//}

////����6
//#include<stdio.h>
//int main()
//{
//	printf("����Ų��� ����\n");
//	int total=0;
//	int number;
//	int player = 0;
//	while (total < 31)
//	{
//		printf("%c : ", 'A' + player);
//		scanf("%d",&number);
//		if (number > 3 || number < 0)
//		{
//				printf("�ٽ��Է��� �ּ���\n");
//				continue;
//			
//		}
//		total = total + number;
//		printf("=>%d\n", total);
//
//		player = !player; //player�� ���� 0,1�� ������ �������� �̿��Ѵ�.
//		if(total>=31)
//		{
//			break;
//		}
//	}
//
//	printf("%c�� �̰���ϴ�!", 'A' + player);
//}
//#include<stdio.h>
//int main()
//{
//	int temperature = 20;
//	do {
//		printf("���� �µ� : %d��\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;	
//}  //while�� �޸� do-while�� ��� ó�� �ѹ��� ����ȴ�.

//#include<stdio.h>
//int main()
//{
//	int input;
//	enum{GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�(0:���� ����)\n");
//		scanf("%d",&input);
//		switch (input) {
//		case NEWGAME:printf("�� ���� ����\n");
//			break;
//		case LOADGAME:printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION: printf("�ɼ� ����\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("������ �����մϴ�.\n");
//	return 0;
//}

////����5
//#include<stdio.h>
//int main()
//{
//	int select;
//	enum{LOGIN=1,SIGNIN,OPTION,PRODUCER};
//	do {
//		printf("������ �����ϼ���.\n 1.�α��� 2.ȸ������ 3.�ɼ� 4.���� �����");
//		scanf("%d",&select);
//		switch (select) {
//		case LOGIN: printf("�α����� �����մϴ�.\n"); break;
//		case SIGNIN: printf("ȸ�������� �����մϴ�.\n"); break;
//		case OPTION: printf("�ɼ� ����\n"); break;
//		case PRODUCER: printf("made by ~~~\n"); break;
//		default: break;
//		}
//	} while (select >= 1 && select <= 4);
//	printf("������ �����մϴ�.");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day=0;
	int study = 0;
	int soccer = 0;
	int sleep = 0;
	do {
		printf("\n%d��° ��!\n", ++day);
		printf("������ �� �ұ��?\n");
		printf("1.�ڵ� �����Ѵ�.\n");
		printf("2.�౸ �Ʒ��Ѵ�.\n");
		printf("3.������ �ܴ�.\n");
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
		if (command == 2)
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
		if (command == 3)
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
	} while (1);
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
	}//���� ���� �� �ൿ�� ���� ������ ����Ѵ�.
	return 0;
}