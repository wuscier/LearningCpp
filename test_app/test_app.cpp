// test_app.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <regex>


using namespace std;

class class_a {
public:
	class_a() {}
	class_a(string str) :m_string{str} {}
	class_a(string str, double dbl) :m_string{ str }, m_double{ dbl } {}

double m_double;
string m_string;
};


class class_d {
public:
	float m_float;
	string m_string;
	wchar_t m_char;
};

class class_z {
public:
	class_z() {}
	class_z(string str) :m_string{ str } {}
	class_z(string str, double dbl) :class_z(str) { m_double = dbl; }

	double m_double{ 1.0 };

	string m_string{ m_double < 10.0 ? "alpha" : "beta" };
};


int main(int argc, char* argv[])
{


	class_z z{ "hello",2.0 };

	int y = 4;


	//initializer_list<int> ilist1{ 5,6,7 };
	//initializer_list<int> ilist2(ilist1);

	//if (ilist1.begin() == ilist2.begin())
	//{
	//	cout << "yes" << endl;
	//}

	//
	//vector<int> v1{ 2,3,4,5,5,5,5,5,5,5,5,5 };
	//map<int, string> m1{ {1,"a"},{2,"b"} };
	//string s{ 'a','b','c' };
	//regex rgx{ 'y','x','z' };


	//int a{ 12 };
	//double b{ 23.6 };
	//bool isp{ false };

	//class_a c1{};
	//class_a c1_1;

	//class_a c2{ "ww" };
	//class_a c2_1("xx");

	//class_a c3{ "yy", 4.4 };
	//class_a c3_1("zz", 5.5);

	//class_d d1{};
	//class_d d1_1{ 4.5 };
	//class_d d2{ 4.5,"string" };
	//class_d d3{ 4.5,"string",'c' };

	//class_d d4{ "string",'c' };
	//class_d d5{ "string", 'c', 2.0 };

	system("pause");

	return 0;
}

