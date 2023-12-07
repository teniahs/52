#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 5;
			b = 10;
			n = 1000;
			Assert::AreEqual(0.358, round(reshenie(a, b, n) * 1000) / 1000)
		}
	};
}