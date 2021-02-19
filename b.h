#include <iostream>
#include <string>
#include <sstream>

// 给定一个正整数n，请返回0到n(包括n)的数字中2出现了几次。

class A
{
public:
	A() { std::cout << 1 << "\n"; }
	A(int number)
	{
		mNumber = number;
	}
	A* operator/(const A a)
	{
		this->mNumber - a.mNumber;
		return this;
	}
	int mNumber;
};

class B: public A
{

};

int CountNumber(int n)
{
	int Count = 0;
	int Number;
	int b = 0;
	for (int i = 1; i <= n; i++)
	{
		Number = 10;
		do
		{
			std::string str;

			// int
			std::stringstream s;
			s << i;
			s >> str;

			if (str.back() == '2')
			{
				std::cout << "str::" << str << std::endl;
				Count++;
			}
			b = i / Number;

			Number *= 10;
		} while (b > 0);
	}
	return Count;
}

int main()
{
	
	A* a1 = (A*)malloc(100);
	//std::cout << sizeof(a1) << "\n";
	A* a2 = new A(1);
	A* a3 = new A(2);
	std::cout << a3->mNumber << std::endl;
	system("pause");
	return 0;
}