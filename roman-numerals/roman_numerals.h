#ifndef ROMAN_H_
#define ROMAN_H_

#include <string>

using namespace std;

namespace roman
{
	/*
	static const map<int, string> thousands { {1, "M"}, {2, "MM"}, {3, "MMM"} };
	static const map<int, string> hundreds { {1, "C"}, {2, "CC"}, {3, "CCC"}, {4, "CD"}, {5, "D"},
												{6, "DC"}, {7, "DCC"}, {8, "DCCC"}, {9, "CM"} };
	static const map<int, string> tens { {1, ""} };
	static const map<int, string> units { {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"}, {5, "V"},
											{6, "VI"}, {7, "VII"}, {8, "VIII"}, {9, "IX"} };
	*/
	static string thousands[3] { "M", "MM", "MMM" };
	static string hundreds[9] = { "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	static string tens[9] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	static string units[9] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
	string convert(int num);
}

#endif