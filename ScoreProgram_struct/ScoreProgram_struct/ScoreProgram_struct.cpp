#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//국어, 수학, 영어, 과학, 한국사
typedef struct score
{
	char name[20];
	int score_KR = -1; //국어점수
	int score_MAT = -1; //수학점수
	int score_EN = -1; //영어점수
	int score_SI = -1; //과학점수
	int score_HIS = -1; //역사점수

} SCORE;

void inputInfo(int);  //정보입력
void averKR();
void averMAT();
void averEN();
void averSI();
void averHIS();
void averTotal();
void Oneaver(int);
void averALL(); //각 과목 평균과 전체 평균을 구합니다.

SCORE student[10];

int main()
{
	int person;
	printf("몇명의 점수를 입력할 것인가요? (최대 10명까지 가능) : ");
	scanf("%d", &person);
	for (int i = 0; i < person; i++)
		inputInfo(i);

	averALL();
	Oneaver(2); //3번째 사람의 평균

	return 0;
}

void inputInfo(int index)

{
	char temp[1024] = "\0";   // 임시 저장
	int len = 0;                     // 문자열 길이

	do
	{
		printf("이름을 입력하세요 : ");
		scanf("%s", temp);
		len = strlen(temp) + 1;
		if (len > sizeof(student[index].name))

			printf("이름이 너무 깁니다.\n 짧게 적어주세요\n");

		else

			strcpy(student[index].name, temp);

	} while (len > sizeof(student[index].name));



	printf("국어점수를 입력하세요 : ");
	scanf("%d", &student[index].score_KR);

	printf("수학점수를 입력하세요 : ");
	scanf("%d", &student[index].score_MAT);

	printf("영어점수를 입력하세요 : ");
	scanf("%d", &student[index].score_EN);

	printf("과학점수를 입력하세요 : ");
	scanf("%d", &student[index].score_SI);

	printf("역사점수를 입력하세요 : ");
	scanf("%d", &student[index].score_HIS);

	getchar();

}

void averKR()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index].score_KR > 0)
	{
		total += student[index].score_KR;
		index++;
	}

	aver = (double)total / (double)index;

	printf("%d명의 국어 평균은 %.2f입니다.\n", index, aver);
}

void averMAT()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index].score_MAT > 0)
	{
		total += student[index].score_MAT;
		index++;
	}

	aver = (double)total / (double)index;

	printf("%d명의 수학 평균은 %.2f입니다.\n", index, aver);
}

void averSI()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index].score_SI > 0)
	{
		total += student[index].score_SI;
		index++;
	}

	aver = (double)total / (double)index;

	printf("과학 평균은 %.2f입니다.\n", aver);
}

void averHIS()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index].score_HIS > 0)
	{
		total += student[index].score_HIS;
		index++;
	}

	aver = (double)total / (double)index;

	printf("역사 평균은 %.2f입니다.\n", aver);
}

void averEN()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index].score_EN > 0)
	{
		total += student[index].score_EN;
		index++;
	}

	aver = (double)total / (double)index;

	printf("영어 평균은 %.2f입니다.\n", aver);
}

void averTotal()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index].score_KR > 0)
	{
		total += (student[index].score_KR + student[index].score_MAT + student[index].score_SI + student[index].score_EN + student[index].score_HIS);
		index++;
	}

	aver = (double)total / ((double)index * 5);

	printf("%d명의 평균은 %.2f입니다.\n", index, aver);
}

void Oneaver(int index)
{
	int total = 0;
	if (student[index].score_KR > 0)
	{
		total += (student[index].score_KR + student[index].score_MAT + student[index].score_SI + student[index].score_EN + student[index].score_HIS);
		printf("%s의 평균은 %.2f입니다.\n", student[index].name, (double)total / 5);
	}
	else
		printf("여기에는 데이터가 없습니다.\n");

}

void averALL()
{
	averKR(); averMAT(); averEN(); averSI(); averHIS(); averTotal();
}