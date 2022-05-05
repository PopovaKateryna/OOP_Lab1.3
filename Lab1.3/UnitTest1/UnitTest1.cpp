#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\KATERYNA\Desktop\OOP\Lab1.3\Lab1.3\Lab1.3\BitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString a, b;
			a.SetFirst(0);
			a.SetSecond(4);

			b.SetFirst(0);
			b.SetSecond(2);

			Assert::AreEqual(Xor(a, b).GetSecond(), 16L);
		}
	};
}
