#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_1.7/MONEY.h"
#include "../Laboratory_1.7/PAYMENT.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest17
{
	TEST_CLASS(UnitTest17)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PAYMENT Y;
			Y.SetWorking_days(20);
			int C = Y.GetWorking_days();
			Assert::AreEqual(C, 20);
		}
	};
}
