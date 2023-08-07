//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

void square()
{
	printf("��������� ��� ���������� ����� �� ������ �������\n");
	int num;
	printf("������� ����� ���������� � �������:\n");
	scanf_s("%d", &num);
	printf("%d^2=%d", num, num * num);
}

void square_num()
{
	float a, b;
	printf("��������� ����������� ��������� ���� �����\n");
	printf("��������� �������\n");
	printf("������� ������ �����: ");
	scanf_s("%f", &a);
	printf("������� ������ �����: ");
	scanf_s("%f", &b);
	if (a * a == b) 
		printf("������ ����� %f ������� ������� %f\n", b, a);
	else if (b * b == a) 
		printf("������ ����� %f ������� ������� %f\n", a, b);
	else 
		printf("����� %f � %f �� �������� ����������\n", a, b);
}

void week()
{
	int num_week;
	char name_week[][15] = { "�����������",
		"�������", "�����",
		"�������", "�������",
		"�������", "�����������" };
	printf("������� ����� ��� ������: ");
	scanf_s("%d", &num_week);
	if (num_week > 0 && num_week <= 7)
		printf("�� ������ %d - ���� ������ %s\n",
			num_week, name_week[num_week - 1]);
	else
		printf("�� ���������� ����\n");
}

void progression()
{
	int n, i;
	printf("����� ������������������ �� -n �� n\n");
	printf("������� n(����� �����): ");
	scanf_s("%d", &n);
	if (n < 0) n = -n;
	i = -n;
	while (i<=n)
	{
		if (i % 10 == 0 && i != n) 
			printf("%4d\n", i);
		else if (i != n) 
			printf("%4d,", i);
		else 
			printf("%4d", i);
		i++;
	}
}

void chet()
{
	int n;
	printf("��������� ��� ������ ������ ����� �� 1 �� N\n");
	printf("������� N: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			if (i % 10 == 0)
				printf("%4d\n", i);
			else
				printf("%4d", i);
	}
}

void third_num()
{
	printf("��������� ��� ������ ������� ����� ��������� �����\n");
	printf("������� �����: ");
	int num, buf;
	scanf_s("%d", &num);
	if (num >= 100)
	{
		buf = (num % 1000) / 100;
		printf("������ ����� � ����� %d\n", buf);
		buf = num;
		while (buf > 999)
		{
			buf /= 10;
		}
		buf %= 10;
		printf("������ ����� � ���� %d\n", buf);
	}
	else
		printf("����� ������� �� ����� ��� ���� ����\n");
}

void palindrom()
{
	int num = 0, buf, count = 0, i = 0;
	boolean flag = 1;
	printf("��������� �������� �� ���������\n");
	printf("1. ������ �����\n");
	printf("2. ��������� �����\n");
	while (flag)
	{
		scanf_s("%d", &buf);
		switch (buf)
		{
		case 1:
			printf("������� �����: ");
			scanf_s("%d", &num);
			flag = 0;
			break;
		case 2:
			num = rand();
			flag = 0;
			break;
		default:
			printf("�� ���������� ����, ������� ����� 1 ��� 2\n");
			flag = 1;
			break;
		}
	}
	printf("��������� ����� %d\n", num);
	buf = num;
	while (buf > 0)
	{
		buf /= 10;
		count++;
	}
	int left_num, right_num;
	flag = 1;
	while (i < count / 2)
	{
		left_num = (num / (int)pow(10, count - 1 - i)) % 10;
		right_num = (num % (int)pow(10, i + 1)) / (int)pow(10, i);
		if (left_num != right_num)
		{
			flag = 0;
		}
		i++;
	}
	if (flag)
		printf("����� %d �������� �����������\n", num);
	else
		printf("����� %d �� �������� �����������\n", num);
}

/*
void data()
{
	int year, month, day;
	char buffer[128];
	//int count;
	//������� ���������������� �����, �������� 2013:12:12
	printf("������� ���� � ���� ����:��:�� = ");
	scanf_s("%d:%d:%d", &year, &month, &day);
	printf("year = %d\nmonth = %d, day = %d\n", year, month, day);
	//��������� ������, �� ����� 127 ��������. ��� ���������� � ������ ������ & �� ����,
	//��� ��� ������ ����������� ����������
	printf("Enter string = ");
	scanf_s("%127s", buffer, sizeof(buffer));
	printf("%s", buffer);
	//getch();
}
*/

int main()
{
	system("CLS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "");
	boolean Flag = 1;
	int choise = 1;
	while (Flag)
	{
		printf("==�������� ����� ��==\n");
		printf("1. ���������� � �������\n");
		printf("2. �������� �� ������� ������ ����� � �������\n");
		printf("3. ����� ��� ������ �� ������ ������\n");
		printf("4. ����� ������������������ �� -n �� n\n");
		printf("5. ����� ������ ����� �� 1 �� N\n");
		printf("6. ����� ������� ����� ��������� �����\n");
		printf("7. �������� �� ���������\n");
		printf("0. �����\n");
		scanf_s("%d", &choise);
		system("CLS");
		switch (choise)
		{
		case 1:
			square();
			break;
		case 2:
			square_num();
			break;
		case 3:
			week();
			break;
		case 4:
			progression();
			break;
		case 5:
			chet();
			break;
		case 6:
			third_num();
			break;
		case 7:
			palindrom();
			break;
		default:
			break;
		}
		Flag = (choise <= 7 && choise >= 1);
		if (Flag)
			system("PAUSE >> nul");
		system("CLS");
	}
	return 0;
}