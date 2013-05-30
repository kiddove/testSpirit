// testSpirit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define  BOOST_SPIRIT_NO_REGEX_LIB

#include "boost/regex.h"
// 旧的声明，会有警告
//#include "boost/spirit.hpp"
//#include "boost/spirit/actor.hpp"
//using namespace boost::spirit;
#include "boost/spirit/include/classic.hpp"
#include "boost/spirit/include/classic_actor.hpp"
using namespace boost::spirit::classic;
using namespace std;

// list1
const string input = "This Hello World program using Spirit counts the number of Hello World occurrences in the input";

int _tmain(int argc, _TCHAR* argv[])
{
	int count = 0;
	parse_info<> pf = parse(input.c_str(), *(str_p("Hello World")[increment_a(count)] | anychar_p));
	cout << count << endl;
	string str = "o2YGcLQYD6z3COflFm7H3mkDKjP?/ziuq/moc.oaboat.deu//:ptth";
	//str.reserve();
	std::reverse(str.begin(), str.end());
	return 0;
}

//// list2
//const string input = "Alex 8 9.2 Jim 91 5.6";
//
//typedef struct {
//	string name;
//	int    idcode;
//	float  rating;
//} Employee;
//
//int main ()
//{
//	string name;
//	int idcode;
//	float rating;
//
//	//int status = parse (input.c_str(),
//	//	*((+alpha_p) [assign_a(name)] >> ' ' >> 
//	//	int_p[assign_a(idcode)] >> ' ' >>
//	//	real_p[assign_a(rating)] >>  !blank_p)
//	//	).full;
//
//	int status = parse(input.c_str(), *((+alpha_p) >> ' ' >> int_p >> ' ' >> real_p) >> !blank_p).full; 
//	cout << status << endl;
//	return 0;
//}