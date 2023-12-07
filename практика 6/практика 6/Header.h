#pragma once
#include <iostream>
#include "..\\�������� 6\"
#include <iomanip>
using namespace std;

//a - b ������� ��������������, I - �������� ��������
double a, b;
// n - ����� �������� ���������, k - ����� �������� ����� ������� � ������
int n, k;

double f(double x) {	//������� ���������������� ���������
	return 1 / (x*log(x));
}

double reshenie(double a, double b, int n) {		
	double I;//������� ���������
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
	cin.exceptions(istream::failbit | istream::failbit);	//��������� ���������� � ���� ������ 
	cout << "������� ������������� ��������� dx/x*ln(x) ������� ����� ���������������\n" << "\n������� ������� ��������������:\n" << "a = ";
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
	cout << "\n������� ����� �������� ���������:\n";
	try
	{
		cin >> n;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\n������� ����� ������� ����� ������� � ������:\n";
	try
	{
		cin >> k;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\n�����:\n";
	cout << setprecision(k) << reshenie(a, b, n) << endl; //����� ������
	return 0;
}
