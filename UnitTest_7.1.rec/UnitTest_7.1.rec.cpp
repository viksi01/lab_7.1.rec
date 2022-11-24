#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.1.рек/lab_7.1.рек.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71rec
{
	TEST_CLASS(UnitTest71rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int count = 0;
            int s = 0;
            int k;
            int result;
            const int rowCOUNT = 4;
            const int colCOUNT = 4;
            int a[rowCOUNT][colCOUNT] = {
              {1, 5, 8, 10},
              {2, 15, 7, 9},
              {-1, -2, 4, 0},
              {-3, 4, 6, 9}
            };
            int* pa[4] = { a[0], a[1], a[2], a[3] };
            Calc(pa, rowCOUNT, colCOUNT, s, k, 0, 0);
            result = count;
            Assert::AreEqual(0, result);

		}
	};
}
