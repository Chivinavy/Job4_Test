#include "pch.h"
#include "CppUnitTest.h"
#include "..\Job4\Product.h"
#include "..\Job4\Product.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Job4Test
{
	TEST_CLASS(Job4Test)
	{
	public:
		
		TEST_METHOD(ConstuctorTest)
		{
			Product p1(100, "locale1", 110.0);
			Assert::IsTrue((p1.id == 100) && (p1.name == "locale1") && (p1.price == 110.0));
		}

		
		TEST_METHOD(AssignmentTest)
		{
			Product p1(100, "locale1", 100);
			Product p2(200, "locale2", 200);
			p1 = p1;
			Assert::IsTrue((p1.id == 100) && (p1.name == "locale1") && (p1.price == 100));
			p1 = p2;
			Assert::IsTrue((p1.id == 200) && (p1.name == "locale2") && (p1.price == 200));
		}

		
		TEST_METHOD(IncreaseTest)
		{
			Product p1(100, "locale1", 100);
			p1 = p1 + 50;
			Assert::IsTrue(p1.price == 150);
		}

		
		TEST_METHOD(DecreaseTest)
		{
			Product p1(100, "locale1", 100);
			p1 = p1 - 50;
			Assert::IsTrue(p1.price == 50);
		}

		TEST_METHOD(ÑomparisonTest)
		{
			Product p1(100, "locale1", 100);
			Product p2(200, "locale2", 200);
			Assert::IsTrue((p1 < p2) && (p2 > p1));
			Assert::IsTrue((p1 <= p2) && (p2 >= p1));
			Assert::IsFalse((p1 == p2) || (p2 == p1));
			p2 = p1;
			Assert::IsFalse((p1 < p2) || (p1 > p2) || (p2 < p1) || (p2 > p1));
			Assert::IsTrue((p1 <= p2) && (p1 >= p2));
			Assert::IsTrue(p1 == p2);
		}
	};
}