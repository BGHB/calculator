// calculator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "calculator.h"
using namespace std;
//任务：实现一个简单的计算器，能够循环计算如 5*6、3+4 等

int main()
{
	Calculator hCalculator;
	string str;
	string inputstr;
	//cout << "输入计算公式" << endl;
	//cin >> str;
	do
	{
		cout << "请输入计算公式" << endl;
		cin >> str;
		Input usrInput = praseStr(str);
		int result = hCalculator.run(usrInput);
		cout << str << "=" << result << endl;
		cout << "是否继续计算？yes or no ?" << endl;
		cin >> inputstr;
	} while (inputstr == "yes");
	system("pause");
    return 0;
}


