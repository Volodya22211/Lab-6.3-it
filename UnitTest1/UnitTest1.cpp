﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3 it/Lab 6.3 it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { -78, 2, 98, 100, 70, 80, 4, 56, 59, 61 };
			int c = FindBiggestElement(a, 10, INT_MIN);
			Assert::AreEqual(c, 100);
		}
	};
}
