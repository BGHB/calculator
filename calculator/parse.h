#pragma once
#include "stdafx.h"
/**
* @brief �����û������Ľṹ��
*/
typedef struct 
{
	int a;		 //��һ������
	char op;     //������
	int b;		 //�ڶ�������
}Input;

/**
 * @brief �����û�����
 * @param str    ����1 �û�������ַ���
 * 
 * @return ������Ľṹ��
 */
Input praseStr(std::string str) ;