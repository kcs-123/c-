//문제1
//#include<stdio.h>
//int main()
//{
//	for (float conversion = 0; conversion < 2; conversion += 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number;
//	for (;;)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int for_flag = 1;  //1
//	int number = 0;    //2
//	while (for_flag)  //3
//	{
//		printf("number=%d\n", number); //4 //8
//		while (number++) {   //5 //9
//			printf(">number=%d\n", number); //10 
//			if (number == 3) { //11
//				for_flag = 0; //12
//				break; //13
//			}
//		}
//		number++; //6 //14
//		printf(">>number=%d\n", number); //7 //15
//	}
//	printf("%d %d\n", for_flag, number); //16
//		return 0; //17
//}

//02234

//number는 0에서 시작하여 3이되면 while(number++)문을 탈출> for_flag=0
//이후 1이 더해진후 마지막에 출력


//#include<stdio.h>
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	for (;for_flag;)
//	{
//		printf("number=%d\n", number); 
//		for (;number+=1;) {   
//			printf(">number=%d\n", number);
//			if (number == 3) { 
//				for_flag = 0;
//				break; 
//			}
//		}
//		number++; 
//		printf(">>number=%d\n", number);
//	}
//		printf("%d %d\n", for_flag, number); 
//		return 0; 
//}

//#include<stdio.h>
//int  suyel(int n)
//{
//	int sum = 0;
//	for (int x = 0; x <= n; x++)
//	{
//		sum += x;
//	}
//	return sum;
//}
//int main()
//{
//	int result = suyel(10);
//+	printf("%d\n", result);
//	return 0;
//}\

//#include<stdio.h>
//void function_test1()
//{
//	printf("function_test1()");
//	printf("함수안에서 실행\n");
//}
//int main()
//{
//	printf("실행전\n");
//	function_test1();
//	printf("실행후\n");
//	return 0;
//}
//#include<stdio.h>
//void eatFood()
//{
//	printf("밥먹기\n");
//}
//void goSleep()
//{
//	printf("잠자기\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); goSleep();
//	goSleep(); goSleep();
//
//	return 0;
//}

//#include<stdio.h>
//void person_A()
//{
//	int money = 10000;
//	printf("A:주머니에");
//	printf("%d원\n", money);
//}
//void person_B()
//{
//	int money = 5000;
//	printf("B:주머니에");
//	printf("%d원\n", money);
//}
//int main()
//{
//	person_A();
//	person_B();
//	return 0;
//}

//#include<stdio.h>
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//int main()
//{
//	int getNumber;
//	getNumber = function_test2(); //5룰 return값으로 가져옴
//	printf("function_test2()");
//	printf("에서 가져온 값:");
//	printf("%d\n", getNumber);
//	return 0;
//}

//#include<stdio.h>
//void sayHi() {
//	printf("hi");
//	return;
//}
//char getA()
//{
//	return 'A';
//}
//int get5()
//{
//	return 5;
//}
//double set1get5(int one)
//{
//	return one + 4.0;
//}
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}

//#include<stdio.h>
//void sayHi();
//char getA();
//int get5();
//double set1get5(int one);
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//void sayHi() {
//	printf("hi");
//	return;
//}
//char getA()
//{
//	return 'A';
//}
//int get5()
//{
//	return 5;
//}
//double set1get5(int one)
//{
//	return one + 4.0;
//}
//#include<stdio.h>
//float sendCard();
//int main()
//{
//	float result = sendCard();
//	printf("%f만원 받음\n", result);
//	return 0;
//}
//float sendCard()
//{
//	printf("<크리스마스 카드>\n");
//	printf("비용:0.7만원\n");
//	printf("돈내기(단위:만원):");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}

//#include<stdio.h>
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main()
//{
//	printf("사과를 영어로?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(),getL(),getE());
//	return 0;
//}

//#include<stdio.h>
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//
//int main()
//{
//	printf("왼쪽을 영어로?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//	return 0;
//}

//#include<stdio.h>
//void makeHamburger(int count)
//{
//	printf("햄버거 %d개 나왔습니다.\n", count);
//}
//int main()
//{
//	int ham_count;
//	printf("햄버거 몇 개 주문하시겠습니다?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_count);
//	return 0;
//}

//#include<stdio.h>
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_characterX(char X);
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_characterX('X');
//	return 0;
//}
//void print_Number() {
//	printf("Number\n");
//}
//void print_Number2(int num)
//{
//	printf("Number: %d\n",num);
//}
//void print_Number4_charB(int num, char b) {
//	printf("Number:%d.character:%c\n", num, b);
//}
//void print_characterX(char X)
//{
//	printf("character:%c\n", X);
//}


//#include<stdio.h>
//char rightType(char type) {
//	if (type != 'A' && type != 'B') {
//		printf("주문할 수 없는 햄버거입니다.\n");
//		return 'C';
//	}
//	return type;
//}
//void makeHamburger(char type, int count) {
//	if (type == 'A') {
//		printf("A타입 햄버거");
//	}
//	else {
//		printf("B타입 햄버거");
//	}
//	printf("%d개 나왔습니다.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("어느타입 햄버거를 ");
//	printf("주문하시겠습니다?(AorB)\n");
//	scanf(" %c", &ham_type);
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("햄버거 몇개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburger(ham_type, ham_count);
//	return 0;
//}


//#include<stdio.h>
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int sub_number(int num1, int num2)
//{
//	int sub = num1 - num2;
//	return sub;
//}
//
//int multi_number(int num1, int num2)
//{
//	int multi = num1 * num2;
//	return multi;
//}
//
//float div_number(int num1, int num2)
//{
//	float div = (float)num1 / (float)num2;
//	return div;
//}
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("결과: %d\n", data1);
//	int data2 = sub_number(a, b);
//	printf("결과: %d\n", data2);
//	int data3 = multi_number(a, b);
//	printf("결과: %d\n", data3);
//	float data4 = div_number(a, b);
//	printf("결과: %f\n", data4);
//	return 0;
//}

//#include<stdio.h>
//int minus(int n)
//{
//	if (n <= 1) return-1;
//	return minus(n - 1) - 3;
//}
//int main()
//{
//	int n; scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}

//#include<stdio.h>
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printf("%d", n);
//	printNumber(n - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//	return 0;
//}

//#include<stdio.h>
//int fibonacci(int n)
//{
//	printf("%d", n);
//	if (n <= 2) return 1;
//	printf("%d\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//	return 0;
//}
//#include<stdio.h>
//int add(int n)
//{
//	if (n <= 1) return 1;
//	return add(n - 1) + n;
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	printf("%d", add(num));
//}

//#include<stdio.h>
//struct BYTE
//{
//	char a;
//	char b;
//};
//void main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}

#include<stdio.h>
struct student
{
	int id;
	char *name;
	float aver;
};
void main()
{
	struct student s = { 1,(char*)"이 샘",90.5 };
	printf("아이디:%d\n", s.id);
	printf("이름:%s\n", s.name);
	printf("백분율:%1f\n", s.aver);
}