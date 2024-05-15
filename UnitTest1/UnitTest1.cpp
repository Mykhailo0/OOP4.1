#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP4.1/Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest37
{
	TEST_CLASS(UnitTest37)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rectangle r(2, 3);
			Assert::AreEqual(6.0, r.area());
			Assert::AreEqual(10.0, r.perimeter());
		}
	};
}