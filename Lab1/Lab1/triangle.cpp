#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stdlib.h>
#include <iomanip>

using namespace std;

/*void TranslateToDouble(string side)
{
	double number;
	char* integer = "";
	string afteInteger = "";
	auto pos = side.find(".");
	for (size_t i = 0; i < side.size(); i++)
	{
		if (i < pos)
		{
			integer.push_back(side[i]);
		}
		else if (i > pos)
		{
			afteInteger.push_back(side[i]);
		}
	}
	int first = atoi(integer);
}*/

string TypeOfTriangle(double a, double b, double c)
{
	string output = "";
	if ((a == b)&&(a == c)&&(b == c))
	{
		output = "Equilateral";
	}
	else if ((a == b)||(a == c)||(b == c))
	{
		output = "Isosceles";
	}
	else
	{
		output = "Normal";
	}
	return output;
}

void KindOfShape(double a, double b, double c)
{
	string output = "";
	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
	{
		output = TypeOfTriangle(a, b, c);
	}
	else
	{
		output = "Not triangle";
	}
	cout << output;
}

void S(double a, double b, double c)
{
	if ((a > 0) && (b > 0) && (c > 0))
	{
		KindOfShape(a, b, c);
	}
	else
	{
		cout << "Enter not";
	}
}

void DetermineTheShape(char* a, char* b, char* c)
{
	double firstNum = strtod(a, NULL);
	double secondNum = strtod(b, NULL);
	double thirdNum = strtod(c, NULL);
	S(firstNum, secondNum, thirdNum);
}

int main(int arg_c, char * arg_v[])
{
	if (arg_c != 4)
	{
		cout << "Specify the lengths of the sides as parameters. The input format: triangle.exe a b c";
		return 1;
	}
	char* a = arg_v[1];
	char* b = arg_v[2];
	char* c = arg_v[3];
	DetermineTheShape(a, b, c);
	return 0;
}