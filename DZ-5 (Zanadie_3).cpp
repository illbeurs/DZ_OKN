#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void initials(char str[], const int n, char* null) {
	char* x = strtok_s(str, " ", &null);
	char* c = x;
	x = strtok_s(NULL, " ", &null);
	char a[] = { x[0],'.', '\0' };
	x = strtok_s(NULL, " ", &null);
	char b[] = { x[0],'.','\0' };
	cout << a << b << " " << c;
}
int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 50;
	char str[n];
	char* o = NULL;
	cout << "Введите ФИО: " << endl;
	cin.getline(str, n);
	initials(str, n, o);
}
