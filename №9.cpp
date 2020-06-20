//9.Напишите программу, которая удаляет символы из предложения, встречающиеся более одного раза

#include <iostream>
#include <string>
#include <Windows.h> //Для SetConsoleCP() и SetConsoleOutputCP()

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str, std;
	cout << "Vvedite predlozhenie: ";
	getline(cin, str);
	int n, m;
	for (n = 0; n < str.length(); n++) {
		if (str[n] == str[n + 1]) {
			str.erase(n, 1);
		}
	}
	std = str;
	for (n = 0; n < str.length(); n++) {
		for (m = n + 1; m < std.length() + 1; m++) {
			if (str[n] == std[m]) {
				std.erase(m, 1);
			}
		}
	}
	cout << "--> " << std << endl;
	system("pause");
}

//У функций SetConsoleCP() и SetConsoleOutputCP() есть небольшой недостаток — они работают только со шрифтом Lucida Console.