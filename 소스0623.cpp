//#include<stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	return 0;
//}

//int main()
//{
//	printf("�ȳ��ϼ���");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n�ȳ��ϼ���\n�ȳ��ϼ���\n");
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	printf("�ȳ��ϼ���");
//	printf("�ȳ��ϼ���\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("��� 1��\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 1;  
//	printf("��� %d��\n", apple);  //%d��ġ�� apple�� �����Ѵ�.
//	return 0; 
//}

//#include<stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("Ű����: %d��\n", keyboard);
//	printf("���콺: %d��\n", mouse);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d+%d=%d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int A;
//	A = 'A';
//	printf("A=%c, A=%d\n", A, A); //���ڿ� ���� A���� �� ���� �Ҵ��� %d�� ��� A��� ���ڿ��� ���ڷ� ���? X %c�� ���ڿ��� ���
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double pi; //double�� ��� �Ǽ���(�Ҽ��� 16�ڸ�)
//	pi = 3.14;
//	float e = 2.718; //float�� ��� �Ǽ���(
//	printf("pi=%.2lf,e=%.5f..\n", pi, e);
//	return 0;
//}
//

//����1
//#include<stdio.h>
//int main()
//{
//	float pi = 3.14;
//	int radius = 5;
//	float width = radius * radius * pi;
//	float length = 2 * radius * pi;
//	printf("width=%f\nlength=%f", width, length);
//	return 0;
//}
//

//����2
//#include<stdio.h>
//int main()
//{
//	int up = 5;
//	int down = 3;
//	int high = 7;
//	float width = (up + down) * high / 2;
//	printf("width = %.3f //", width);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է�:");
//	scanf("%d", &k);  //&�� �� ������ �Ҵ�?
//	printf("�Է��� ���ڴ�:%d\n", k);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է�:");
//	scanf("%d %d", &y, &x);
//	printf("�� ���� ���� %d�Դϴ�.\n", y + x);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� 3�� �Է�:"); //�ܼ��� ���
//	scanf("%c%c%c", &a, &b, &c); //������ ���� �Է� �ޱ�
//	printf("���� ���:%c%c%c\n", a, b, c);
//	return 0;
//}

//����3
//#include<stdio.h>
//int main()
//{
//	float pi = 3.14;
//	int radius;
//	printf("���� ��������	 �Է��ϼ���");
//	scanf("%d", &radius); //���� ������ Ÿ�� ��ġ��Ű��!
//	float width = radius * radius * pi;
//	float length = 2 * pi * radius;
//	printf("width=%f\nlenghth=%f", width, length);
//}

//����4
//#include<stdio.h>
//int main()
//{
//	int W1, W2, H;
//	printf("��ٸ����� ����, �Ʒ���, ���̸� �Է��ϼ���");
//	scanf("%d%d%d", &W1, &W2, &H);
//	float width = (W1 + W2) * H / 2.0;//�ϳ��� �Ǽ����� �Ǽ� ��� ������� ����
//	printf("width=%f", width);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 15;
	int b = 3;
	printf("%d+%d=%d\n",a,b,a + b);
	printf("%d-%d=%d\n",a,b, a - b);
	printf("%d*%d=%d\n",a,b, a * b);
	printf("%d/%d=%d\n",a,b, a / b);
	printf("%d%%%d=%d\n",a,b, a % b);
	return 0;
}