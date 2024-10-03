#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "C:\Users\admin\source\repos\Project_5.2\Project_5.2\lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestS)
        {
            double eps = 0.0001;
            int n = 0;
            double s = 0.0;  // ���������� ����� ��� ����
            S(2.0, eps, n, s);  // ��������� ������� S
            Assert::IsTrue(s > 0);  // ����������, �� ��������� ����� ����
        }

        TEST_METHOD(TestA)
        {
            double result = A(2.0, 1, 1.0);
            Assert::IsTrue(result > 0);  // ������� ����: �� ��������� ����� ����
        }
    };
}
