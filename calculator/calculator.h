#pragma once
#include "stdafx.h"
#include "parse.h"

class Calculator
{
public:
	Calculator();
	~Calculator();
	/**
	* @brief 执行函数，根据解析后的结构体，选择计算方式
	* @param usrInput    参数1 解析后的结构体
	*
	* @return 计算结果
	*/
	int run(Input usrInput);
	
private:
	/**
	* @brief 加法器，实现整数相加
	* @param usrInput    参数1 被加数
	* @param usrInput    参数2 加数
	*
	* @return 和
	*/
	int add(int a, int b) const;
	/**
	* @brief 减法器，实现整数相减
	* @param usrInput    参数1 被减数
	* @param usrInput    参数2 减数
	*
	* @return 差
	*/
	int sub(int a, int b) const;
	/**
	* @brief 乘法器，实现整数相乘
	* @param usrInput    参数1 被乘数
	* @param usrInput    参数2 乘数
	*
	* @return 积
	*/
	int mul(int a, int b) const;
	/**
	* @brief 除法器，实现整数相除
	* @param usrInput    参数1 被除数
	* @param usrInput    参数2 除数
	*
	* @return 商
	*/
	int div(int a, int b) const;
};
