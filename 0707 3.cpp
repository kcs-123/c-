//#include<stdio.h>
//int main()
//{
//	int num = 100;
//	if (num != 100)
//	{
//		printf("100 아니네요.\n");
//		printf("아쉽네요\n");
//	}
//	else
//		printf("100이네요!.\n");
//	printf("프로그램을 종료합니다\n");
//}
////if문
//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("A B C 키 중 하나를 누르고 Enter키를 누르세요:");
//	scanf(" %c", &ch);
//	switch (ch)
//	{
//	case 'a': case 'A': printf("A 키를 눌렀습니다.\n"); break;
//	case 'b': case 'B': printf("B 키를 눌렀습니다.\n"); break;
//	case 'c': case 'C': printf("C 키를 눌렀습니다.\n"); break;
//	default: printf("잘못 눌렀습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int first, last;
//	printf("시작값=>");
//	scanf("%d", &first);
//	printf("끝값=>");
//	scanf("%d", &last);
//	int k = first;
//	if (first > last)
//	{
//		first = last;
//		last = k;
//	}
//	while (first <= last)
//	{
//		if (first % 2 != 0)
//			printf("%d ", first);
//		first++;
//
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int num;
//	int k = 1; 
//	int count;
//	int h;
//	printf("숫자를 여러 개 입력 :");
//	scanf("%d", &num);
//	while (num / k != 0)
//	{
//		k *= 10;
//	}
//	count = k / 10;
//	while (count >= 1)
//	{
//		h = num / count;
//		while (h >= 1)
//		{
//			printf("\u2665\u2665");
//			h--;
//		}
//		printf("\n");
//		num %= count;
//		count /= 10;
//	}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int soccer = 0;
	int sleep = 0;
	int book = 0;

	do {
		printf("\n%d번째 날!\n", ++day);
		printf("오늘은 뭐 할까요?\n");
		printf("1.코딩 공부한다.\n");
		printf("2.축구 훈련한다.\n");
		printf("3.누워서 잔다.\n");
		printf("4.독서를 한다.\n");
		printf("그외. 끝낸다.\n>>");
		scanf("%d", &command);
		if (command == 1)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("기분이 좋네요.\n");
			case 3: printf("도서관에서 ");
				break;
			case 2: printf("기분이 나빠요.\n");
			case 4: printf("카페에서 ");
				break;
			case 5: printf("학원에서 ");
			}
			printf("코딩 공부합시다.\n");
			study++;
		}
		else if (command == 2)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("기분이 좋네요.\n");
			case 3: printf("운동장에서 ");
				break;
			case 2: printf("기분이 나빠요.\n");
			case 4: printf("실내 구장에서 ");
				break;
			case 5: printf("풋살장에서 ");
			}
			printf("축구를 연습합시다.\n");
			soccer++;
		}
		else if (command == 3)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("기분이 좋네요.\n");
			case 3: printf("매트 위에서 ");
				break;
			case 2: printf("기분이 나빠요.\n");
			case 4: printf("침대 위에서 ");
				break;
			case 5: printf("방바닥에서 ");
			}
			printf("잠을 잡시다.\n");
			sleep++;
		}
		else if (command == 4)
		{
			int randInt = rand() % 5 + 1;
			switch (randInt)
			{
			case 1: printf("기분이 좋네요.\n");
			case 3: printf("도서관에서 ");
				break;
			case 2: printf("기분이 나빠요.\n");
			case 4: printf("내 책상에 앉아서 ");
				break;
			case 5: printf("침대에 누워서 ");
			}
			printf("독서를 합시다.\n");
			book++;
		}
		else break;
	} while (1);
	{
		if (study > soccer && study > sleep && study > book)
		{
			if (day <= 3) {
				printf("그대로입니다...\n");
			}
			else {
				int level = study / 8;
				switch (level) {
				case 0: printf("코딩 새싹이 되었습니다.!\n");
					break;
				case 1: printf("프로그래머가 되었습니다.!\n");
					break;
				case 2: printf("FrontEnd 개발자가 되었습니다.!\n");
					break;
				case 3: printf("BackEnd개발자가 되었습니다.!\n");
					break;
				case 4: printf("풀스택 개발자가 되었습니다.!\n");
					break;
				}
			}
		}
		if (soccer > study && soccer > sleep && soccer > book)
		{
			if (day <= 3) {
				printf("그대로입니다...\n");
			}
			else {
				int level = soccer / 8;
				switch (level) {
				case 0: printf("축구 유망주가 되었습니다.!\n");
					break;
				case 1: printf("아마추어 선수가 되었습니다.!\n");
					break;
				case 2: printf("프로 선수가 되었습니다.!\n");
					break;
				case 3: printf("국가 대표 선수가 되었습니다.!\n");
					break;
				case 4: printf("프리미어리그 선수가 되었습니다.!\n");
					break;
				}
			}
		}
		if (soccer > study && soccer > sleep && soccer > book)
		{
			if (day <= 3) {
				printf("그대로입니다...\n");
			}
			else {
				int level = soccer / 8;
				switch (level) {
				case 0: printf("축구 유망주가 되었습니다.!\n");
					break;
				case 1: printf("아마추어 선수가 되었습니다.!\n");
					break;
				case 2: printf("프로 선수가 되었습니다.!\n");
					break;
				case 3: printf("국가 대표 선수가 되었습니다.!\n");
					break;
				case 4: printf("프리미어리그 선수가 되었습니다.!\n");
					break;
				}
			}
		}
		if (sleep > study && sleep > soccer && sleep > book)
		{
			if (day <= 3) {
				printf("그대로입니다...\n");
			}
			else {
				int level = sleep / 8;
				switch (level) {
				case 0: printf("피로가 회복되었습니다..!\n");
					break;
				case 1: printf("잠자는게 습관이 되었습니다.!\n");
					break;
				case 2: printf("삶이 피곤해졌습니다..!\n");
					break;
				case 3: printf("건강이 악화되었습니다.!\n");
					break;
				case 4: printf("백수가 되었습니다.!\n");
					break;
				}
			}
		}
		if (book > study && book > soccer && book > sleep)
		{
			if (day <= 3) {
				printf("그대로입니다...\n");
			}
			else {
				int level = book / 8;
				switch (level) {
				case 0: printf("독서하는 방법을 알게되었습니다.!\n");
					break;
				case 1: printf("독서에 흥미가 생겼습니다..!\n");
					break;
				case 2: printf("독서가 습관이 되었습니다..!\n");
					break;
				case 3: printf("국어성적이 올랐습니다.!\n");
					break;
				case 4: printf("독서평론가가 되었습니다..!\n");
					break;
				}
			}
		}
		return 0;
	}
}
		
		
		//study soccer sleep book