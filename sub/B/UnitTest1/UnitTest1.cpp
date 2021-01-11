#include "pch.h"
#include "CppUnitTest.h"
#include<Windows.h>
#include <atlstr.h>
#include "../B/sub.h"
#define FilePath "..//ex1.ini"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		int j = 0;
		char str[50][10] = { 0 };//保存ini文件里  节的名字
		int count = CalcCount(50, str);//保存ini文件里 节的个数
		unsigned short i;
		
		TEST_METHOD(TestMethode1)
		{
			int nReal;//保存运算结果
			CString na, nb, nExpect;	//b保存不同的键值
			for (j = 0; j < count; j++)//循环读取节，键值，并作对比。
			{
				GetPrivateProfileString(str[j], "na", " ", na.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString(str[j], "nb", " ", nb.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString(str[j], "nExpect", " ", nExpect.GetBuffer(20), 20, FilePath);
				nReal = sub(_ttoi(na), _ttoi(nb));	//_ttoi是CString转为整型
				Assert::AreEqual(nReal, _ttoi(nExpect));
			}

		}
	};
}
