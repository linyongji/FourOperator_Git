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
		char str[50][10] = { 0 };//����ini�ļ���  �ڵ�����
		int count = CalcCount(50, str);//����ini�ļ��� �ڵĸ���
		unsigned short i;
		
		TEST_METHOD(TestMethode1)
		{
			int nReal;//����������
			CString na, nb, nExpect;	//b���治ͬ�ļ�ֵ
			for (j = 0; j < count; j++)//ѭ����ȡ�ڣ���ֵ�������Աȡ�
			{
				GetPrivateProfileString(str[j], "na", " ", na.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString(str[j], "nb", " ", nb.GetBuffer(20), 20, FilePath);
				GetPrivateProfileString(str[j], "nExpect", " ", nExpect.GetBuffer(20), 20, FilePath);
				nReal = sub(_ttoi(na), _ttoi(nb));	//_ttoi��CStringתΪ����
				Assert::AreEqual(nReal, _ttoi(nExpect));
			}

		}
	};
}
