#include "stdafx.h"
#include "parse.h"

using namespace std;

Input praseStr(string str)
{
	cout << "shuru: " << str << endl;
	int i = 0;
	int j;
	string front="";
	string backgroud="";
	string op = "";
	string::size_type position;
	if (str.find('+')<str.length())
	{
		position = str.find('+');
	}
	else if (str.find('-')<str.length())
	{
		position = str.find('-');
	}
	else if(str.find('*')<str.length())
	{
		position = str.find('*');
	}
	else if (str.find('/')<str.length())
	{
		position = str.find('/');
	}
	else
	{
		cout << "����������ַ���û�в�����"  << endl;
	}
	front = str.substr(0, position);
	backgroud = str.substr(position+1, str.length());
	op = str.substr(position);
	cout << "������ǰ����Ϊ��" << front << endl;
	cout << "������������Ϊ��" << backgroud << endl;
	Input result;
	result.a = atoi(front.c_str());
	result.b = atoi(backgroud.c_str());
	result.op = op[0];
	cout << "ǰ����Ϊ��" << result.a << endl;
	cout << "������Ϊ��" << result.b << endl;	
	return result;
}
