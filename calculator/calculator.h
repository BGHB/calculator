#pragma once
#include "stdafx.h"
#include "parse.h"

class Calculator
{
public:
	Calculator();
	~Calculator();
	/**
	* @brief ִ�к��������ݽ�����Ľṹ�壬ѡ����㷽ʽ
	* @param usrInput    ����1 ������Ľṹ��
	*
	* @return ������
	*/
	int run(Input usrInput);
	
private:
	/**
	* @brief �ӷ�����ʵ���������
	* @param usrInput    ����1 ������
	* @param usrInput    ����2 ����
	*
	* @return ��
	*/
	int add(int a, int b) const;
	/**
	* @brief ��������ʵ���������
	* @param usrInput    ����1 ������
	* @param usrInput    ����2 ����
	*
	* @return ��
	*/
	int sub(int a, int b) const;
	/**
	* @brief �˷�����ʵ���������
	* @param usrInput    ����1 ������
	* @param usrInput    ����2 ����
	*
	* @return ��
	*/
	int mul(int a, int b) const;
	/**
	* @brief ��������ʵ���������
	* @param usrInput    ����1 ������
	* @param usrInput    ����2 ����
	*
	* @return ��
	*/
	int div(int a, int b) const;
};
