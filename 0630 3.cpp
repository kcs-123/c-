//����4
//#include<stdio.h>
//int main()
//{
//	char initial;
//	printf("���ڸ� �Է��ϼ���");
//	scanf("%c", &initial);
//	if (initial >= 0x41 && initial <= 'Z')
//	{
//		printf("�빮��");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("�ҹ���");
//	}
//	else
//		printf("���ĺ��� �ƴմϴ�");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else {
//		if (number < answer)
//		{
//			printf("����2�� ���� 1���� Ů�ϴ�.\n");
//		}
//		else {
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer) {
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else {
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//}  //���� 2���� �Է¹޾Ƽ� ���ǹ��� ���� ��Ҹ� �����ִ� �ڵ�

//#include<stdio.h>
//int main()
//{
//	int score = 95;
//	if (score > 90) {
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60) {
//		printf("������ D����Դϴ�.\n");
//	}
//	else {
//		printf("������ F����Դϴ�.");
//	}
//	return 0;
//} //else if�� ��� ���� ������ �����϶��� ����Ǵ� �ݸ� if�� �̿��ϸ� �������� ������ �����ϴ�.
//#include<stdio.h>
//int main()
//{
//	int number = 12;
//	if (number > 0) {
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0) {
//		printf("number�� �����Դϴ�.\n");
//	}
//	else {
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0) {
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else {
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//}

//����5
//#include<stdio.h>
//int main()
//{
//	char key;
//	printf("����Ű�� �Է��ϼ���: ");
//	scanf("%c", &key);
//	if (key == 'w')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (key == 's') {
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (key == 'a') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else if (key == 'd') {
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.\n");
//	}
//	else
//		printf("�ùٸ� ����Ű�� �ƴմϴ�.");
//	return 0;
//}
//����6
//#include<stdio.h>
//int main()
//{
//	int gauge;
//	printf("gauge�� �Է��ϼ���: ");
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55) {
//		printf("Perfect\n");
//	}
//	else if (gauge >= 35 && gauge <= 65) {
//		printf("Excellent\n");
//	}
//	else {
//		printf("good");
//	}
//}
////����7
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("���ڸ� �Է��ϼ���: ");
//	scanf("%d",&input);
//	if (input % 3 == 0) {
//		printf("3�� ����Դϴ�.\n");
//	}
//	else {
//		printf("3�� ����� �ƴմϴ�.\n");
//	}
//	if (input % 6 == 0) {
//		printf("6�� ����Դϴ�.\n");
//	}
//	else {
//		printf("6�� ����� �ƴմϴ�.\n");
//	}
//	if (input % 9 == 0) {
//		printf("9�� ����Դϴ�.\n");
//	}
//	else {
//		printf("9�� ����� �ƴմϴ�.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("���ڸ� �Է��ϼ���: ");
//	scanf("%d", &input);
//	if (input % 3 == 0) {
//		printf("3�� ����Դϴ�.\n");
//		if (input % 6 == 0) {
//			printf("6�� ����Դϴ�.\n");
//		}
//		if (input % 9 == 0) {
//			printf("9�� ����Դϴ�.\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command) //����=command
//	{
//	case'i':  //command�� i�϶� ����
//		printf("������â ����\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n"); //break;�� ���� ������ case 'i'���� �ڵ带 ��� �����Ѵ�.
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch(command) 
//	{
//	case'i': printf("������â ����\n");
//		break;
//	case'm': printf("����â ����\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ���");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case'i': printf("������â ����\n");
//			break;
//	case'm': printf("����â ����\n");
//			break;
//	default: printf("������ ����� �����ϴ�.");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1:printf("one\n"); break;
//	case 2:printf("two\n"); break;
//	case 3:printf("three\n"); break;
//	}
//	return 0;
//}
//����1
//#include<stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("���� 2���� �Է��ϼ���: ");
//	scanf("%d %d", &input1, &input2);
//	printf("+-*/%%�� �ϳ��� �Է��ϼ���: ");
//	scanf(" %c", &oper);
//	int result;
//	switch (oper)
//	{
//	//case'+':result = input1 + input2; break;
//	case'+':printf("%d+%d=%d", input1, input2, input1 + input2); break;
//	case'-':printf("%d-%d=%d", input1, input2, input1 - input2); break;
//	case'*':printf("%d*%d=%d", input1, input2, input1 * input2); break;
//	case'/':printf("%d/%d=%d", input1, input2, input1 / input2); break;
//	case'%':printf("%d%%%d=%d", input1, input2, input1 % input2); break;
//	}
//	//printf("%d%c%d=%d", input1, oper, input2, result);
//	return 0;
//}

//����2
//#include<stdio.h>
//int main()
//{
//	int month;
//	printf("���� �Է��ϼ���: ");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1:printf("January"); break;
//	case 2:printf("February"); break;
//	case 3:printf("March"); break;
//	case 4:printf("April"); break;
//	case 5:printf("May"); break;
//	case 6:printf("June"); break;
//	case 7:printf("July"); break;
//	case 8:printf("August"); break;
//	case 9:printf("September"); break;
//	case 10:printf("October"); break;
//	case 11:printf("November"); break;
//	case 12:printf("Decemebr"); break;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char command;
	printf("<, a ���� �̵�\n");
	printf(">, d ������ �̵�\n");

}