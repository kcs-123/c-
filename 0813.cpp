//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	FILE* fp;
//	fp = fopen("ex11.txt", "w");
//	srand((unsigned)time(NULL));
//	int a;
//	for (int i = 0; i < 5; i++)
//	{
//		a = rand() % 100 + 1;
//		printf("���� ����==>%d\n", a);
//		fprintf(fp, "���� ����==>%d\n", a);
//	}
// fclose(fp);
// return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[200];
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	int line = 1;
//	while (1)
//	{
//		fgets(str, 1024, rfp);
//		printf("%d : %s",line,str);
//		line += 1;
//		if (feof(rfp)!==0)
//			break;
//	}
//	fclose(rfp);
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#define MAXENERGY 10
//void printfenergy(int my)
//{
//	printf("�� ���: ");
//	for (int i = 0; i < my; i++)
//	{
//		printf("��");
//	}
//	for (int i = my; i < MAXENERGY; i++)
//	{
//		printf("��");
//	}
//	printf("\n");
//}
//
//char* getAnswer()
//{
//	FILE* fp = fopen("answer.TXT", "r");
//	srand((unsigned int)time(NULL));
//	int init;
//	fscanf(fp, "%d", &init);
//	int count = (rand() % init);
//	char ps[100] = {};
//	for (int i = 0; i <= count; i++)
//	{
//		fscanf(fp, "%s", ps);
//	}
//	fclose(fp);
//	char* ps2;
//	ps2 = (char*)malloc(strlen(ps) + 1);
//	strcpy(ps2, ps);
//	return ps2;
//}
//
//int main()
//{
//	char* Answer = getAnswer();
//	int len = strlen(Answer);
//	char* bar;
//	bar = (char*)malloc(len + 1);
//	memset(bar, '_', len);
//	bar[strlen(Answer)] = 0;
//	char assist[MAXENERGY] = {};
//	int energy = MAXENERGY;
//	char input;
//	int count = 0;
//	while (1)
//	{
//		printfenergy(energy);
//		if (!energy) {
//			printf("���� ����");
//			printf("���� : %s", Answer);
//			break;
//		}
//
//		printf("���� : %s\n\n", bar);
//		if (strcmp(Answer, bar) == 0)
//		{
//			printf("���� �¸�!\n");
//			break;
//		}
//		
//		printf("���ݱ��� Ʋ���ܾ�: ");
//		for (int i = 0; i < MAXENERGY; i++)
//		{
//			printf(" %c", assist[i]);
//		}
//		printf("\n�ܾ ���纸���� : ");
//		scanf(" %c", &input);
//		bool check = true;
//		for (int i = 0; i < strlen(Answer); i++)
//		{
//			if (Answer[i] == input) {
//				bar[i] = input;
//				check = false;
//			}
//		}
//		if (check) 
//		{
//			energy--;
//			assist[count] = input;
//			count += 1;
//		}
//	}
//	free(bar);
//	free(Answer);
//	return 0;
//}
	/*
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
	}*/
	
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define ERROR -1
//#define ROCK 0
//#define SCISSOR 1
//#define PAPER 2
//#define COMPUTER_WIN 0
//#define HUMAN_WIN 1
//#define DRAW 2
//#define SUCCESS 0
//int print_rsp(const char * who, int what)
//{
//	if (what == ROCK)
//	{
//		printf("%s : ����\n",who);
//	}
//	else if (what == SCISSOR)
//	{
//		printf("%s : ����\n",who);
//	}
//	else if (what == PAPER)
//	{
//		printf("%s : ��\n", who);
//	}
//	else
//	{
//		return ERROR;
//	}
//	return SUCCESS;
//}
//int compare_victory(int com, int me)
//{
//	print_rsp("��ǻ��", com);
//	if (com==me)
//		return DRAW;
//	else if (com-me ==1||com - me == -2 )
//		return COMPUTER_WIN;
//	else
//		return HUMAN_WIN;
//}
//
//void main()
//{
//	int com = 0;
//	int me = 0;
//	char ask_finish = 0;
//	int human = 0, computer = 0, draw = 0;
//	int tmp = 0;
//	srand(time(NULL));
//	FILE* rsp;
//	rsp = fopen("result.txt", "r");
//	if (rsp != NULL)
//	{
//		fscanf(rsp, "%d", &human);
//		fscanf(rsp, "%d", &computer);
//		fscanf(rsp, "%d", &draw);
//		fclose(rsp);
//	}
//	while (true)
//	{
//		com = rand() % 3;
//		printf("0: ����, 1: ����, 2: ��\n ����� �� ����? : ");
//		scanf("%d", &me);
//
//		/*if (me == 0) printf("���: ����\n");
//		else if(me==1) printf("���: ����\n");
//		 if (me != 0&&me!=1&&me!=2)
//			printf("\n��Ģ! �ٽ� �� �ּ���.\n\n");
//			continue;
//		}*/
//		if (print_rsp("���", me) == ERROR) {
//			printf("\n��Ģ! �ٽ� �� �ּ���.\n\n");
//			continue;
//		}
//
//		tmp = compare_victory(com, me);
//		if (tmp == COMPUTER_WIN)
//		{
//			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
//			computer++;
//		}
//		else if (tmp == HUMAN_WIN)
//		{
//			printf("����� �̰���ϴ�.\n");
//			human++;
//		}
//		else if (tmp == DRAW)
//		{
//			printf("�����ϴ�.\n");
//			draw++;
//		}
//		printf("\n����� �̱� Ƚ�� = %d, ", human);
//		printf("��ǻ�Ͱ� �̱� Ƚ�� = %d, ���� = %d\n\n", computer, draw);
//		printf("������ �ٽ� �Ͻðڽ��ϱ�?(y/n) : ");
//		do {
//			ask_finish = (char)getchar();
//		} while (ask_finish == '\n');
//		if (ask_finish == 'n')
//		{
//			break;
//		}
//		printf("\n");
//	}
//	rsp = fopen("result.txt", "w");
//	fprintf(rsp, "%d\n%d\n%d\n", human, computer, draw);
//	fclose(rsp);
//}

//#include<stdio.h>
//int main()
//{
//	int stack_buff[256];
//	int top = 0, value, choice;
//	bool while_flag = true;
//	while (while_flag)
//	{
//		printf("[stack]\n1. push\n2. pop\n:");
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			printf("stack�� ���� ���� �Է����ּ���: ");
//			scanf("%d", &value);
//			stack_buff[top++] = value;
//			break;
//		case 2:
//			if (top > 0)
//				printf("�������°�: %d\n", stack_buff[--top]);
//			else
//				printf("stack�� ����ֽ��ϴ�.\n");
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		printf("\n<stack ����>\n");
//		for (int i = 0; i < top; i++)
//		{
//			printf(" | %d ", stack_buff[i]);
//		}
//		printf("\n \n");
//		}
//}

#include<stdio.h>
//#define MAXSIZE 10
//int queue[MAXSIZE];
//int front, rear;
//void init_queue(void) {
//	front = rear = 0;
//	printf("QUEUE SIZE is %d\n\n", MAXSIZE);
//}
//void clear_queue(void) {
//	front = rear;
//}
//int enqueue(int val)
//{
//	if ((rear + 1) % MAXSIZE == front) {
//		printf("QUEUE Overflow, \n");
//		return -1;
//	}
//	queue[rear] = val;
//	rear = ++rear % MAXSIZE;
//	return val;
//}
//int dequeue(void) {
//	int i;
//	if (front == rear)
//	{
//		printf("Queue Oveflow, \n");
//		return -1;
//	}
//	i = queue[front];
//	front = ++front % MAXSIZE;
//	return i;
//}
//void print_queue(void) {
//	int i;
//	printf("Queue From Front---> To Rear \n");
//	for (i = front; i != rear; i = ++i % MAXSIZE) {
//		printf("%-6d", queue[i]);
//		printf("\n");
//	}
//}
//void main()
//{
//	int i;
//	init_queue();
//	printf("\n push 5, 4, 7, 8, 2, 1\n");
//	enqueue(5);
//	enqueue(4);
//	enqueue(7);
//	enqueue(8);
//	enqueue(2);
//	enqueue(1);
//	print_queue();
//	printf("\n pop");
//	i = dequeue();
//	print_queue();
//	printf(" pop value is %d\n", i);
//	printf("\n push 3,2,5,7");
//	enqueue(3);
//	enqueue(2);
//	enqueue(5);
//	enqueue(7);
//	print_queue();
//	printf("\n Now queue is full,push 3\n");
//	enqueue(3);
//	print_queue;
//	printf("\n Initialize Queue\n");
//	clear_queue();
//	print_queue();
//	printf("\n Now queue is empty, pop\n");
//	i = dequeue();
//	print_queue();
//	printf(" pop value is %d\n", i);
//}
