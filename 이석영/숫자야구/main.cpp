#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int duplicate_Check(int* P_N, int* C_N, int* count, bool* b1);
bool bool_check(int* P_N, int* C_N, bool* b1);
int main()
{
	int Com_num[3] = { 0 };// ��ǻ�� ����
	int Player_num[3] = { 0 }; //Player �Է�
	int count = 0;
	bool b1 = true;
	printf("���� 3���� �Է����ּ���.\n");
	printf("�ߺ�X, ����0~9���� ����\n");
	printf("���� ���� ������ ����ּ���.\n");
	printf("�Է¿���: 123(x) 1 2 3(o)\n");
	printf("���Ḧ ���Ͻø� 0 0 0 �Է����ּ���.\n");
start:
	do //���� ���� ����
	{
		Com_num[0] = rand() % 10;
		Com_num[1] = rand() % 10;
		Com_num[2] = rand() % 10;
	} while (Com_num[0] == Com_num[1] || Com_num[1] == Com_num[2] || Com_num[0] == Com_num[2]);
	//printf("ramdom:%d %d %d\n", Com_num[0], Com_num[1], Com_num[2]);//test
	while (b1)
	{
		count++;
		scanf_s("%d %d %d", &Player_num[0], &Player_num[1], &Player_num[2]);
		if (Player_num[0] == 0 && Player_num[1] == 0 && Player_num[2] == 0)
		{
			return 0;
		}
		printf("%d��° ����: %d %d %d\n", count, Player_num[0], Player_num[1], Player_num[2]);
		duplicate_Check(Player_num, Com_num, &count,&b1); //���� ����� �ԷµǾ����� üũ
		if (count == 9)
		{
			printf("�����Դϴ�.\n");
		}
	}
	goto start;
	
	//printf("�Լ���%d %d %d\n", Player_num[0], Player_num[1], Player_num[2]);//test
}

int duplicate_Check(int* P_N, int* C_N, int* count, bool* b1) //�ߺ� üũ
{
	int i = 0;
	
	for (int j = 0; j < 3; j++)//while�� �ٲٱ�
	{
		if (P_N[j] > 9)
		{
			printf("���ڴ� 0~9������ ���ڸ� �Է°����մϴ�.\n");
			*count -= 1;
			return 0;
		}
	}

	if (P_N[0] == P_N[i + 1] || P_N[i] == P_N[i + 2] || P_N[i + 1] == P_N[i + 2])
	{
		printf("���ڸ� �ٽ� �Է����ּ���. ���� �ߺ� �ȵ˴ϴ�.\n");
		*count -= 1;
		return 0;
	}
	bool_check(P_N, C_N,b1);
}

bool bool_check(int* P_N, int* C_N,bool *b1) //ball,out,strike ��� 
{
	int a = 0;
	int s_num = 0;

	for (int i = 0; i < 3; i++)
	{

		if (P_N[i] == C_N[i])
		{
			printf("Strike ");
			s_num += 1;
		}
		else if (P_N[i] != C_N[0] && P_N[i] != C_N[1] && P_N[i] != C_N[2])
		{
			printf("Out ");
		}
		else
			printf("Ball ");
	}
	printf("\n");
	if (s_num == 3) 
	{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("�����Դϴ�. ���ϵ帳�ϴ�.\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		*b1 = false;
		return *b1;
	}
	s_num = 0;
}

