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
	cout << "������㹫ʽ" << endl;
	cin >> str;
	Input usrInput = praseStr(str);
	int result = hCalculator.run(usrInput);
	cout << str << "=" << result << endl;
	system("pause");
    return 0;
}


