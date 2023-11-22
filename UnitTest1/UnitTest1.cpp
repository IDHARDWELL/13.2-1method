#include "pch.h"
#include "CppUnitTest.h"
#include "../MN.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int patron = XPY(2, 4);
			Assert::AreEqual(6, patron);
		}
	};
}
