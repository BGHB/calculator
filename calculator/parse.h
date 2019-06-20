#pragma once
#include "stdafx.h"
/**
* @brief 解析用户输入后的结构体
*/
typedef struct 
{
	int a;		 //第一个数字
	char op;     //操作符
	int b;		 //第二个数字
}Input;

/**
 * @brief 解析用户输入
 * @param str    参数1 用户输入的字符串
 * 
 * @return 解析后的结构体
 */
Input praseStr(std::string str) ;