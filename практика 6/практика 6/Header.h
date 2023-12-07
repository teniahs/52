#pragma once
#include <iostream>
#include "..\\практика 6\"
#include <iomanip>
using namespace std;

//a - b пределы интегрирования, I - решенный интеграл
double a, b;
// n - число отрезков разбиения, k - число символов после запятой в ответе
int n, k;

double f(double x) {	//решение подынтегрального выражения
	return 1 / (x*log(x));
}

double reshenie(double a, double b, int n) {		
	double I;//решение интеграла
	double s = (f(a) + f(b)) / 2;
	double h = (b - a) / n;
	for (int i = 1; i <= n - 1; i++)
	{
		s += f(a + i * h);
	}
	I = h * s;
	return I;
}

int main() {
	setlocale(LC_ALL, "ru");
	cin.exceptions(istream::failbit | istream::failbit);	//обработка исключений и ввод данных 
	cout << "Решение определенного интеграла dx/x*ln(x) методом левых прямоугольников\n" << "\nВведите пределы интегрирования:\n" << "a = ";
	try
	{
		cin >> a;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "b = ";
	try
	{
		cin >> b;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\nВведите число отрезков разбиения:\n";
	try
	{
		cin >> n;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\nВведите число сиволов после запятой в ответе:\n";
	try
	{
		cin >> k;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\nОтвет:\n";
	cout << setprecision(k) << reshenie(a, b, n) << endl; //вывод ответа
	return 0;
}
