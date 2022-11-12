#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int student[10][5]; // 국어, 수학, 영어, 과학, 역사

void inItialation();
void inputinfo(int);
void averKR();
void averMAT();
void averEN();
void averSI();
void averHIS();
void averTotal();
void Oneaver(int);
void averALL();


int main()
{
	inItialation();  // 모든 점수를 -1로 초기화
	int person;
	printf("몇명의 점수를 입력할 것인가요? (최대 10명까지 가능) : ");
	scanf("%d", &person);
	for (int i = 0; i < person; i++)
		inputinfo(i);

	averALL();
	Oneaver(2); //3번 평균을 보여달라.

	return 0;
}

void inItialation()
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 5; j++)
		{
			student[i][j] = -1;
		}
}

void inputinfo(int index)
{
	printf("%d번\n", index + 1);
	printf("국어점수를 입력하세요 : ");
	scanf("%d", &student[index][0]);

	printf("수학점수를 입력하세요 : ");
	scanf("%d", &student[index][1]);

	printf("영어점수를 입력하세요 : ");
	scanf("%d", &student[index][2]);

	printf("과학점수를 입력하세요 : ");
	scanf("%d", &student[index][3]);

	printf("역사점수를 입력하세요 : ");
	scanf("%d", &student[index][4]);

}

void averKR()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index][0] > 0)
	{
		total += student[index][0];
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

	while (student[index][1] > 0)
	{
		total += student[index][1];
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

	while (student[index][3] > 0)
	{
		total += student[index][3];
		index++;
	}

	aver = (double)total / (double)index;

	printf("%d명의 과학 평균은 %.2f입니다.\n", index, aver);
}

void averHIS()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index][4] > 0)
	{
		total += student[index][4];
		index++;
	}

	aver = (double)total / (double)index;

	printf("%d명의 역사 평균은 %.2f입니다.\n", index, aver);
}

void averEN()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index][2] > 0)
	{
		total += student[index][2];
		index++;
	}

	aver = (double)total / (double)index;

	printf("%d명의 영어 평균은 %.2f입니다.\n", index, aver);
}

void averTotal()
{
	int index = 0;
	int total = 0;
	double aver = 0;

	while (student[index][0] > 0)
	{
		total += (student[index][0] + student[index][1] + student[index][3] + student[index][2] + student[index][4]);
		index++;
	}
	aver = (double)total / (index * 5);

	printf("%d명의 총 평균은 %.2f입니다.\n", index, aver);
}

void Oneaver(int index)
{
	int total = 0;
	double aver;
	if (student[index][0] > 0)
	{
		total += (student[index][0] + student[index][1] + student[index][3] + student[index][2] + student[index][4]);
		aver = (double)total / 5;
		printf("%d번의 평균은 %.2f입니다.\n", (index + 1), aver);
	}
	else
		printf("%d번에는 데이터가 없습니다.\n", index);
}

void averALL()
{
	averKR(); averMAT(); averEN(); averSI(); averHIS(); averTotal();
}
