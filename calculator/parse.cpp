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
		cout << "您所输入的字符中没有操作符"  << endl;
	}
	front = str.substr(0, position);
	backgroud = str.substr(position+1, str.length());
	op = str.substr(position);
	cout << "操作符前数字为：" << front << endl;
	cout << "操作符后数字为：" << backgroud << endl;
	Input result;
	result.a = atoi(front.c_str());
	result.b = atoi(backgroud.c_str());
	result.op = op[0];
	cout << "前数字为：" << result.a << endl;
	cout << "后数字为：" << result.b << endl;	
	return result;
}
