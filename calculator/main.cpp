// calculator.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "calculator.h"
using namespace std;
//����ʵ��һ���򵥵ļ��������ܹ�ѭ�������� 5*6��3+4 ��

int main()
{
	Calculator hCalculator;
	string str;
	string inputstr;
	//cout << "������㹫ʽ" << endl;
	//cin >> str;
	do
	{
		cout << "��������㹫ʽ" << endl;
		cin >> str;
		Input usrInput = praseStr(str);
		int result = hCalculator.run(usrInput);
		cout << str << "=" << result << endl;
		cout << "�Ƿ�������㣿yes or no ?" << endl;
		cin >> inputstr;
	} while (inputstr == "yes");
	system("pause");
    return 0;
}


