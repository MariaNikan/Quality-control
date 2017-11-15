#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stdlib.h>
#include <iomanip>

using namespace std;

string TypeOfTriangle(double a, double b, double c)
{
	string output = "";
	if ((a == b)&&(a == c)&&(b == c))
	{
		output = "Равносторонний";
	}
	else if ((a == b)||(a == c)||(b == c))
	{
		output = "Равнобедренный";
	}
	else
	{
		output = "Обычный";
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
		output = "Не треугольник";
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
		cout << "Введено неверно";
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
	setlocale(LC_ALL, "Rus");
	if (arg_c != 4)
	{
		cout << "Укажите длины сторон в качестве параметров. Вводный формат: triangle.exe a b c";
		return 1;
	}
	char* a = arg_v[1];
	char* b = arg_v[2];
	char* c = arg_v[3];
	DetermineTheShape(a, b, c);
	return 0;
}