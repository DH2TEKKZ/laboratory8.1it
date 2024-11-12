#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory8.1iter/laboratory8.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab81it
{
	TEST_CLASS(lab81it)
	{
	public:


		TEST_METHOD(TestCount)
		{
			char str1[] = "vlad, is, student, year";
			int result1 = Count(str1);
			Assert::AreEqual(17, result1);

			char str2[100] = "no,commas,here";
			int result2 = Count(str2);
			Assert::AreEqual(-1, result2);
		}
	};
}