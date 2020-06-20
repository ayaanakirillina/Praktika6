//9.Напишите программу, которая удаляет символы из предложения, встречающиеся более одного раза

#include <iostream>
#include <string>
#include <Windows.h> //Для SetConsoleCP() и SetConsoleOutputCP()


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Vvedite predlozhenie: ";
	string s;
	getline(cin, s);
	int k = 0, x = 0;
	while (k < s.length())
	{
		x = k + 1;
		while (x < s.length())
		{
			if (s[k] == s[x])
				s.erase(x, 1);
			x++;
		}
		k++;
	}
	cout << "--> " << s << endl;

	system("pause");
}