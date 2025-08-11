//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	char s[20];
//	FILE* rfp;
//	rfp = fopen("c:\\temp\\data1.txt", "r");
//	fgets(s, 20, rfp);
//	printf("파일에서 읽은 문자열 : ");
//	puts(s);
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void main()
//{
//	FILE* rfp;
//	int hap = 0;
//	int in, i;
//	rfp = fopen("c:\\temp\\data2.txt", "r");
//	for (i = 0;i < 5;i++)
//	{
//		fscanf(rfp, "%d", &in);
//		hap = hap + in;
//	}
//	printf("합계==>%d\n", hap);
//	fclose(rfp);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	char s[20];
//	FILE* wfp;
//	wfp = fopen("c:\\temp\\data3.txt", "w");
//	printf("문자열을 입력(최대 19자) : ");
//	gets_s(s);
//	fputs(s, wfp);
//	fclose(wfp);
//}