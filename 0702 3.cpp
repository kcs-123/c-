//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("���ڸ� �Է��ϼ���:");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3: 
//	case 6: 
//	case 9: 
//		printf("¦"); break;
//	default: printf("%d", number);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'x';
//	switch (command) 
//	{
//	case 0x78: printf("���ĺ� x �Է�.\n");
//		break;
//	case 'X': printf("����ǥ �Է�.\n");
//		break;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: {
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number1, &number2);
//		printf("% d + % d = % d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number1, number2;
//		printf("���� �� ���� �Է��ϼ��� \n");
//		scanf("%d %d", &number1, &number2);
//		printf("% d - % d = % d\n", number1, number2, number1 - number2);
//		break;
//	}
//	}
//	return 0;
//	}
//����7
//#include<stdio.h>
//int main()
//{
//	char key;
//	printf("����Ű�� �Է��ϼ���:");
//	scanf("%c", &key);
//	switch (key)
//	{
//	case 'w': printf("�� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	case 'a': printf("�� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	case 's': printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	case 'd': printf("�� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	default: printf("����Ű�� �߸� �Է��ϼ̽��ϴ�."); break;
//	}
//}
//����8
//#include<stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("appetizer: 1.ĳ��� 2.������ 3.Ǫ�Ʊ׶� �� �ϳ��� �����ϼ���.");
//	scanf("%d", &appetizer);
//	printf("mainDish: 1.������ũ 2.�����丮 3.�簥�� �� �ϳ��� �����ϼ���");
//	scanf("%d", &mainDish);
//	printf("dessert: 1.�ɟ� 2.���̽�ũ�� 3.���ݸ����� �� �ϳ��� �����ϼ���");
//	scanf("%d", &dessert);
//	printf("�ֹ��� ������ ");
//	switch (appetizer)
//	{
//	case 1:printf("ĳ���, "); break;
//	case 2:printf("������, "); break;
//	case 3:printf("Ǫ�Ʊ׶�, "); break;
//	}
//	switch (mainDish)
//	{
//	case 1:printf("������ũ, "); break;
//	case 2:printf("�����丮, "); break;
//	case 3:printf("�簥��, "); break;
//	}
//	switch (dessert)
//	{
//	case 1:printf("�ɟ��Դϴ�."); break;
//	case 2:printf("���̽�ũ���Դϴ�."); break;
//	case 3:printf("���ݸ������Դϴ�."); break;
//	}
//	return 0;
//}

//while ��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i , i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("������ ���� ��� �ݺ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("���� count: %d\n", count);
//		printf("count�� 3���� ���� ���� �ݺ�\n");
//		count++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("���� count: %d\n", count);
//		printf("count�� 0���� ū ���� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}
////����1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		printf("C");
//		i++;
//	}
//}

////����2
//#include<stdio.h>
//int main()
//{
//	int i = -10;
//	while (i <= 0)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

////����3
//#include<stdio.h>
//int main()
//{
//	int i = 5;
//	while (i <= 100)
//	{
//	printf("%d ", i);
//	i+=5;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int count = 3;
//	while (count) { //count�� 0�� �Ǿ�� ���������� break�� ���� ����
//		if (count == 1)
//		{
//			break;
//		}
//		printf("���� count: %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("���ĺ��� �Է����ּ���(�ٸ� �� �Է½� �ٽ��Է�):");
//		scanf("%c", &alphabet);
//		if(alphabet>='a' && alphabet<='z')
//		{
//			printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else { continue;}
//		printf("�Է��� ��: %c\n", alphabet);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("����� �Է����ּ���(0�Է½� ����);");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;  //break�� continue�� Ȱ���Ͽ� ���߿� �ǳʶٰų� ������Ű�� ������ �� �� �ִ�.
//}

//����4
