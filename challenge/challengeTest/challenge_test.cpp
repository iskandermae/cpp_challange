#include "pch.h"
#include "CppUnitTest.h"
#include "../challenge/swap.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace challenge_test
{
	TEST_CLASS(challenge_test)
	{
	public:
		
		TEST_METHOD(swap_integers)
		{
			int a = 1;
			int b = 2;

			my_swap<int>(a, b);

			Assert::AreEqual(2, a);
			Assert::AreEqual(1, b);
		}

		TEST_METHOD(swap_strings)
		{
			std::string a = "1";
			std::string b = "2";

			my_swap<std::string>(a, b);

			Assert::IsTrue("2" == a);
			Assert::IsTrue("1" == b);
		}
	};
}
