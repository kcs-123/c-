//문제4
//#include<stdio.h>
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while (1)
//	{
//		multi = multi*number;
//		if (multi >= 50000)
//		{
//			break;
//		}
//		number += 1;
//	}
//	printf("%d", number);
//	return 0;
//}

//문제5
//#include<stdio.h>
//int main()
//{
//	char alphabet = 'A';
//	while (alphabet <= 'Z')
//	{
//		if(alphabet=='F')
//		{
//			alphabet += 1;
//			continue;
//		}
//		printf("%c ", alphabet);
//		alphabet += 1;
//		
//	}
//	return 0;
//}

////문제6
//#include<stdio.h>
//int main()
//{
//	printf("베스킨라빈스 게임\n");
//	int total=0;
//	int number;
//	int player = 0;
//	while (total < 31)
//	{
//		printf("%c : ", 'A' + player);
//		scanf("%d",&number);
//		if (number > 3 || number < 0)
//		{
//				printf("다시입력해 주세요\n");
//				continue;
//			
//		}
//		total = total + number;
//		printf("=>%d\n", total);
//
//		player = !player; //player의 값이 0,1이 번갈아 나오도록 이용한다.
//		if(total>=31)
//		{
//			break;
//		}
//	}
//
//	printf("%c가 이겼습니다!", 'A' + player);
//}
//#include<stdio.h>
//int main()
//{
//	int temperature = 20;
//	do {
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//	return 0;	
//}  //while과 달리 do-while의 경우 처음 한번은 실행된다.

//#include<stdio.h>
//int main()
//{
//	int input;
//	enum{GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션(0:게임 종료)\n");
//		scanf("%d",&input);
//		switch (input) {
//		case NEWGAME:printf("새 게임 시작\n");
//			break;
//		case LOADGAME:printf("세이브 데이터 로드\n");
//			break;
//		case OPTION: printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

////문제5
//#include<stdio.h>
//int main()
//{
//	int select;
//	enum{LOGIN=1,SIGNIN,OPTION,PRODUCER};
//	do {
//		printf("실행을 선택하세요.\n 1.로그인 2.회원가입 3.옵션 4.만든 사람들");
//		scanf("%d",&select);
//		switch (select) {
//		case LOGIN: printf("로그인을 실행합니다.\n"); break;
//		case SIGNIN: printf("회원가입을 시작합니다.\n"); break;
//		case OPTION: printf("옵션 실행\n"); break;
//		case PRODUCER: printf("made by ~~~\n"); break;
//		default: break;
//		}
//	} while (select >= 1 && select <= 4);
//	printf("실행을 종료합니다.");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day=0;
	int study = 0;
	int soccer = 0;
	int sleep = 0;
	do {
		printf("\n%d번째 날!\n", ++day);
		printf("오늘은 뭐 할까요?\n");
		printf("1.코딩 공부한다.\n");
		printf("2.축구 훈련한다.\n");
		printf("3.누워서 잔다.\n");
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
		if (command == 2)
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
		if (command == 3)
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
	} while (1);
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
	}//가장 많이 한 행동에 대한 엔딩만 출력한다.
	return 0;
}