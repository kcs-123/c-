//#include<stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//void main()
//{
//	struct student s = { 1,(char*)"�� ��",90.5 };  //������� ���� �Ҵ�
//	printf("���̵�:%d\n", s.id);
//	printf("�̸�:%s\n", s.name);
//	printf("�����:%1f\n", s.aver);
//}

//#include<stdio.h>
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct GUN M416 = { "M416",5.56,true,true,true,true,true,30 };
//	printf("ȭ���:%s\n", M416.name);
//	printf("ź ����:%2f\n", M416.bullet_type);
//	printf("������ ����: %s", M416.scope ? "true" : "false"); 
//	return 0;
//}

//#include<stdio.h>
//struct _dummy_ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//int main()
//{
//	int sizedummy = sizeof(_dummy_);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("���� ũ��:%d\n", sizedummy);
//	printf("vip���� ũ��:%d\n", sizevip);
//
//	return 0;
//}

//#include<stdio.h>
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//
//int main()
//{
//	VIP_PERSON lee_sam;
//	printf("�� ����� �Է��ϼ���.\n");
//	while (true)
//	{
//		scanf(" %c",&lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("�� �ڵ带 �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("���ϸ����� �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %c %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}


////����1
//#include<stdio.h>
//struct dummy1 {
//	int data1;
//	char data2;
//};
//
//
//struct dummy2 {
//	int information1;
//	int information2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(dummy1));
//	printf("%d\n", sizeof(dummy2));
//	return 0;
//}
//
////����2
//#include<stdio.h>
//struct _dummy_ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//int main()
//{
//	_dummy_ ex;
//	printf("���� ����ü�� ���� �Է��ϼ���");
//	printf("data_0�� ��:");
//	scanf("%d", &ex.data_0);
//	printf("data_1�� ��:");
//	scanf(" %c", &ex.data_1);
//	printf("data_2�� ��:");
//	scanf("%f", &ex.data_2);
//	printf("���� ����ü�� �Է� �� ����: ");
//	printf("%d %c %f", ex.data_0, ex.data_1, ex.data_2);
//}

//#include<stdio.h>
//void main()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	printf("��:%hd\n", pt1);
//}

//#include<stdio.h>
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("��:%hd\n",pt);
//}

//#include<stdio.h>
//short getDefaultData();
//void printData(short pt2);
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("��:%hd\n", pt2);
//}

//#include<stdio.h>
//
//struct POINT { short x, y; };
//
//POINT getDefaultData();
//void printData(POINT pt2);
//POINT getData2(POINT pt3);
//void main()
//{
//	POINT pt1;
//	pt1 = getDefaultData();
//	printData(pt1);
//	pt1 = getData2(pt1);
//	printData(pt1);
//}
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	printf(">>");
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//
//void printData(POINT pt2)
//{
//	printf("��:%hd  %hd\n", pt2.x,pt2.y);
//}
//POINT getData2(POINT pt3)
//{
//	pt3.x += 5;
//	pt3.y += 5;
//	return pt3;
//}

//#include<stdio.h>
//void main()
//{
//	char arr[4];
//	printf("%d\n",sizeof(arr));
//}

//#include<stdio.h>
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include<stdio.h>
//void main()
//{
//	char alpah[4] = { 'a','b','c','d' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//}

//#include<stdio.h>
//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num�� �ȿ� ����ִ�");
//	printf("1��° ���ڴ�? %d\n", num[1]);  //�� num1�� ù��°?
//}

//#include<stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d��°�� %d ����\n",0, num[0]);
//	printf("%d��°�� %d ����\n",1, num[1]);
//	printf("%d��°�� %d ����\n",2, num[2]);
// return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d��°�� %d����\n", k, num[k]); k++; 
//	printf("%d��°�� %d����\n", k, num[k]); k++;
//	printf("%d��°�� %d����\n", k, num[k]); k++;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++)
//	{
//		printf("%d��°�� %d����\n", k, num[k]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

////����1
//#include<stdio.h>
//int main()
//{
//	int arr[5];
//	for (int i = 0; i <= 4; i++)
//	{
//		printf("%d��° ���� �Է�: ", i);
//		scanf("%d", &arr[i]);
//	}
//	printf("\n\n");
//	for (int i = 0; i <= 4; i++)
//	{
//		printf("arr[%d]: %d\n", i, arr[i]);
//	}
//	return 0;
//}

//����2
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int check;
//	char exist = 1;
//	for(int i = 0; i <= 9; i++)
//	{
//		printf("%d��° ���� �Է�: ", i);
//		scanf("%d", &arr[i]);
//	}
//	while (exist)
//	{
//		printf("���ڸ� �ϳ� �Է��ϼ���:");
//		scanf("%d", &check);
//		for (int i = 0; i <= 9; i++)
//		{
//			if (check == arr[i])
//			{
//				printf("exist");
//				exist = 0;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left=%d,", left);
//	printf("right=%d\n", right);
//}

//#include<stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	right = temp;
//	printf("left=%d, ", left);
//	printf("right=%d\n", right);
//}

//#include<stdio.h>
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0]=%d, ", num[0]);
//	printf("num[1]=%d\n", num[1]);
//}

//����1
//#include<stdio.h>
//void main()
//{
//	int arr[4] = { 4,3,1,2 };
//	int temp;
//	temp = arr[2];
//	arr[2] = arr[0];
//	arr[0] = temp;
//	//1342
//	temp = arr[3];
//	arr[3] = arr[1];
//	arr[1] = temp;
//	//1243
//	temp = arr[3];
//	arr[3] = arr[2];
//	arr[2] = temp;
//	//1234
//	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//}

//BUBBLE
//#include<stdio.h>
//int main()
//{
//	int arr[4];
//	for (int i = 0; i <= 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 2;
//	for (int j = 1; j <= 3; j++)
//	{
//		for (int i = 0; i <= k; i++)
//		{
//			int temp;
//			if (arr[i] > arr[i + 1])
//			{
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//		k--;
//	}
//	printf("%d %d %d %d", arr[0],arr[1], arr[2], arr[3]);
// return 0;
//}

//selection
//#include<stdio.h>
//int main()
//{
//	int arr[4];
//	for (int i = 0; i <= 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int idx;
//	int temp;
//	for (int j = 0; j <= 3; j++)
//	{
//		int idx = j;
//		for (int i = j+1; i <= 3; i++)
//		{
//			if (arr[i] < arr[idx])
//			{
//				idx = i;
//			}
//		}
//		temp = arr[j];
//		arr[j] = arr[idx];
//		arr[idx] = temp;
//	}
//	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//	if (one > two) max = one;
//	else
//	{
//		max = two;	
//	}
//	printf("max=%d\n", max);
//}

//#include<stdio.h>
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two) {
//		if (one > three) max = one;
//		else
//		{
//			max = three;
//		}
//	}
//	else {
//		if (two > three) max = two;
//		else
//		{
//			max = three;
//		}
//	}
//	printf("max=%d\n", max);
//}

//#include<stdio.h>
//void main()
//{
//	int a[3] = { 1,2,3 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max=%d\n", max);
//}

//p.20 ����1
#include<stdio.h>
void main()
{
	int a[5] = { 1,3,6,4,2 };
	int min = a[0];
	int max = a[0];
	int sum;
	int avg;
	

}