//문제4
//#include<stdio.h>
//int main()
//{
//	char initial;
//	printf("문자를 입력하세요");
//	scanf("%c", &initial);
//	if (initial >= 0x41 && initial <= 'Z')
//	{
//		printf("대문자");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("소문자");
//	}
//	else
//		printf("알파벳이 아닙니다");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else {
//		if (number < answer)
//		{
//			printf("숫자2가 숫자 1보다 큽니다.\n");
//		}
//		else {
//			printf("숫자1과 숫자2가 같습니다.\n");
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer) {
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else {
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//}  //숫자 2개를 입력받아서 조건문을 통해 대소를 비교해주는 코드

//#include<stdio.h>
//int main()
//{
//	int score = 95;
//	if (score > 90) {
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) {
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) {
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) {
//		printf("성적은 D등급입니다.\n");
//	}
//	else {
//		printf("성적은 F등급입니다.");
//	}
//	return 0;
//} //else if의 경우 위의 조건이 거짓일때만 실행되는 반면 if를 이용하면 독립적인 시행이 가능하다.
//#include<stdio.h>
//int main()
//{
//	int number = 12;
//	if (number > 0) {
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0) {
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0) {
//		printf("number는 짝수입니다.\n");
//	}
//	else {
//		printf("number는 홀수입니다.\n");
//	}
//}

//문제5
//#include<stdio.h>
//int main()
//{
//	char key;
//	printf("방향키를 입력하세요: ");
//	scanf("%c", &key);
//	if (key == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (key == 's') {
//		printf("아래 방향키를 입력하셨습니다.\n");
//	}
//	else if (key == 'a') {
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (key == 'd') {
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//	else
//		printf("올바른 방향키가 아닙니다.");
//	return 0;
//}
//문제6
//#include<stdio.h>
//int main()
//{
//	int gauge;
//	printf("gauge를 입력하세요: ");
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
////문제7
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력하세요: ");
//	scanf("%d",&input);
//	if (input % 3 == 0) {
//		printf("3의 배수입니다.\n");
//	}
//	else {
//		printf("3의 배수가 아닙니다.\n");
//	}
//	if (input % 6 == 0) {
//		printf("6의 배수입니다.\n");
//	}
//	else {
//		printf("6의 배수가 아닙니다.\n");
//	}
//	if (input % 9 == 0) {
//		printf("9의 배수입니다.\n");
//	}
//	else {
//		printf("9의 배수가 아닙니다.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력하세요: ");
//	scanf("%d", &input);
//	if (input % 3 == 0) {
//		printf("3의 배수입니다.\n");
//		if (input % 6 == 0) {
//			printf("6의 배수입니다.\n");
//		}
//		if (input % 9 == 0) {
//			printf("9의 배수입니다.\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command) //변수=command
//	{
//	case'i':  //command가 i일때 실행
//		printf("아이템창 오픈\n");
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
//		printf("아이템창 오픈\n"); //break;가 없기 때문에 case 'i'밑의 코드를 모두 실행한다.
//	case 'm':
//		printf("지도창 오픈\n");
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
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch(command) 
//	{
//	case'i': printf("아이템창 오픈\n");
//		break;
//	case'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case'i': printf("아이템창 오픈\n");
//			break;
//	case'm': printf("지도창 오픈\n");
//			break;
//	default: printf("지정된 기능이 없습니다.");
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
//문제1
//#include<stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자 2개를 입력하세요: ");
//	scanf("%d %d", &input1, &input2);
//	printf("+-*/%%중 하나를 입력하세요: ");
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

//문제2
//#include<stdio.h>
//int main()
//{
//	int month;
//	printf("월을 입력하세요: ");
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
	printf("<, a 왼쪽 이동\n");
	printf(">, d 오른쪽 이동\n");

}