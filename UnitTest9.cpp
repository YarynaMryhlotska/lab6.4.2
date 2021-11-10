#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\Yaryna visual studio\lab6.4.2\lab6.4.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest9
{
	TEST_CLASS(UnitTest9)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double S;
			S = 56;
			Assert::AreEqual(S, 56.0);
		}
	};
}
