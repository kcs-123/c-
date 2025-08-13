//#define _CRT_SECURE_NO_WANIGNS
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	FILE* rfp, * wfp;
//	char str1[200], str2[200];
//	int size, i;
//	rfp = fopen("c:\\temp\\in.txt", "r");
//	wfp = fopen("c:\\temp\\out.txt", "w");
//	while (1)
//	{
//		fgets(str1, 200, rfp);
//		if (feof(rfp))
//		{
//			break;
//		}
//		size = strlen(str1);
//		for (i = size - 1;i >= 0;i--)
//			str2[size - 1 - i] = str1[i - 1];
//		str2[size - 1] = '\0';
//		fputs(str2,wfp);
//		fputs("\n", wfp);
//	}
//	fclose(rfp);
//	fclose(wfp);
//}

//#define _CRT_SECURE_NO_WANIGNS
//#include<stdio.h>
//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//	struct student s;
//	struct student* p;
//	p = &s;
//	printf("이름 입력 : ");
//	scanf("%s", p->name);
//	printf("국어 점수 : ");
//	scanf("%d", &p->kor);
//	printf("영어 점수 : ");
//	scanf("%d", &p->eng);
//	p->avg = (p->kor + p->eng);
//	p->avg = (p->kor + p->eng) / 2.0f;
//	
//	printf("\n--구조체 포인터 활용--\n");
//	printf("학생 이름==>%s\n", p->name);
//	printf("국어 점수==>%d\n", p->kor);
//	printf("영어 점수==>%d\n", p->eng);
//	printf("평균 점수==>%5.1f\n", p->avg);
//
//}