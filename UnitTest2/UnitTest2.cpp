#include "pch.h"
#include "CppUnitTest.h"
#include "../АП-5.2/АП-5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2 
{
    TEST_CLASS(UnitTest2)
    {
    public:
        TEST_METHOD(TestArtan_S)
        {
            int n = 0.0;
            double eps = 0.0001;
            double s = 0.0;
            double x = 1.0;

            double expected_result = atan(x);

            double calculated_result = S(1.0, eps, n, s);
            Assert::AreEqual(expected_result, calculated_result, eps);
        }



        TEST_METHOD(TestArtan_A) {
            double x = 1.0;
            int n = 3.0;
            double a = 1.0;

            double calculated_result = A(1.0, n, a);
            double expected_result = -1.0 * 1.0 * (2 * n - 1) / (2 * n + 1);

            Assert::AreEqual(expected_result, calculated_result, 1e-6);
        }
    };
}