#include <iostream>
#include <string>
#include "LongInOut.h"
using namespace std;
struct NUM
{
	NUM* next, * prev;
	short int a;
};

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "===============�������� ������=======================" << "\n"
		<< "1. ����������� ����� � �����."
		<< "2. ����� �����."
		<< "3. ������������ ����� (�����)."
		<< "4. ��������� � ������������� ������������."
		<< "=====================================================" << "\n";
	int choose;
	cin >> choose;
	cout << "\n";
	switch (choose)
	{
	case 1:
		NUM * N1;
		N1 = new NUM;
		
		input(N1);
		output(N1);
	}

	

}

