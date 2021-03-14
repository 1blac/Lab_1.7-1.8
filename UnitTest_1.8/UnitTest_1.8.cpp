#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_1.8/PAYMENT.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest18
{
	TEST_CLASS(UnitTest18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PAYMENT R;
			R.SetSeniority(2000);
			int C = R.GetSeniority();
			Assert::AreEqual(C, 2000);
		}
	};
}
