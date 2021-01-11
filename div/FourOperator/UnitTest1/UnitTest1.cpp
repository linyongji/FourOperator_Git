#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include"../FourOperator/dev.h"
#include<Windows.h>
#include <atlstr.h>
#include <stdio.h>

#define FilePath "..//ex1.ini"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
	
#if 1		
		int j = 0;
		char str[50][10] = { 0 };//保存ini文件里  节的名字
		int count = CalcCount(50, str);//保存ini文件里 节的个数
		unsigned short i;
		TEST_METHOD(TestMethode1)
		{
			int nReal;//保存运算结果
			CString na, nb, nExpect;	//b保存不同的键值
			for (j = 0; j < count; j++)
			{
				GetPrivateProfileString(str[j], "na", " ", na.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString(str[j], "nb", " ", nb.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString(str[j], "nExpect", " ", nExpect.GetBuffer(20), 20, FilePath);
				nReal = dev(_ttoi(na), _ttoi(nb));	//_ttoi是CString转为整型
				Assert::AreEqual(nReal, _ttoi(nExpect));
			}
			
		}
		
	};
}

#endif			



















#if 0		
			TEST_METHOD(a)
			{
				int nReal;
				CString na, nb, nExpect;
				//这一段程序是往 ex1.ini 文件中写入测试样例
				//WritePrivateProfileString(_T("a"), _T("na"), _T("6"), _T("../ex1.ini"));
				//WritePrivateProfileString(_T("a"), _T("nb"), _T("2"), _T("../ex1.ini"));
				//WritePrivateProfileString(_T("a"), _T("QExpect"), _T("3"), _T("../ex1.ini"));
				//这一段程序是从 ex1.ini 文件读取测试样例
				GetPrivateProfileString(_T("a"), _T("na"), _T(" "), na.GetBuffer(20), 20, _T(FilePath));
				GetPrivateProfileString(_T("a"), _T("nb"), _T(" "), nb.GetBuffer(20), 20, _T(FilePath));
				GetPrivateProfileString(_T("a"), _T("nExpect"), _T(" "), nExpect.GetBuffer(20), 20, _T(FilePath));
				nReal = dev(_ttoi(na), _ttoi(nb));
				Assert::AreEqual(nReal, _ttoi(nExpect));
			}
			TEST_METHOD(b)
			{
				int nReal;
				CString na, nb, nExpect;

				GetPrivateProfileString(_T("b"), _T("na"), _T(" "), na.GetBuffer(20), 20, _T(FilePath));
				GetPrivateProfileString(_T("b"), _T("nb"), _T(" "), nb.GetBuffer(20), 20, _T(FilePath));
				GetPrivateProfileString(_T("b"), _T("nExpect"), _T(" "), nExpect.GetBuffer(20), 20, _T(FilePath));
				nReal = dev(_ttoi(na), _ttoi(nb));
				Assert::AreEqual(nReal, _ttoi(nExpect));
			}
			TEST_METHOD(c)
			{
				int nReal;
				CString na, nb, nExpect;

				GetPrivateProfileString(_T("c"), _T("na"), _T(" "), na.GetBuffer(20), 20, _T(FilePath));
				GetPrivateProfileString(_T("c"), _T("nb"), _T(" "), nb.GetBuffer(20), 20, _T(FilePath));
				GetPrivateProfileString(_T("c"), _T("nExpect"), _T(" "), nExpect.GetBuffer(20), 20, _T(FilePath));
				nReal = dev(_ttoi(na), _ttoi(nb));
				Assert::AreEqual(nReal, _ttoi(nExpect));
			}
			TEST_METHOD(TestMethod3)
			{
				int nReal;
				CString na, nb, nExpect;

				GetPrivateProfileString("d", "na", " ", na.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString("d", "nb", " ", nb.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString("d", "nExpect", " ", nExpect.GetBuffer(20), 20, FilePath);
				nReal = dev(_ttoi(na), _ttoi(nb));
				Assert::AreEqual(nReal, _ttoi(nExpect));
			}
#endif
		





























