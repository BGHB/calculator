#include "stdafx.h"
#include "calculator.h"

using namespace std;

Calculator::Calculator()
{
	cout << "计算器已就绪！" << endl;
}

Calculator::~Calculator()
{
	cout << "计算器已就绪！" << endl;
}

int Calculator::run(Input usrInput)
{
	switch (usrInput.op)
	{
	case '+':
		return add(usrInput.a, usrInput.b);
	case '-':
		return add(usrInput.a, usrInput.b);
	case '*':
		return add(usrInput.a, usrInput.b);
	case '/':
		return add(usrInput.a, usrInput.b);
	default:cout << "操作符输入错误！" << endl;
		break;
	}
	return 0;
}

int Calculator::add(int a, int b) const
{
	int c = a + b;
	return c;
}

int Calculator::sub(int a, int b) const
{
	int c = a - b;
	return c;
}

int Calculator::mul(int a, int b) const
{
	int c = a * b;
	return c;
}

int Calculator::div(int a, int b) const
{
	int c = a / b;
	return c;
}
