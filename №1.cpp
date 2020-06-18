//1.Дан текст. Посчитать, сколько раз среди символов текста встречается буква "p".

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string s;
	string a[100];
	int k = 0;
	ifstream f1;
	ofstream f2;
	f1.open("input.txt", ios_base::in);
	f2.open("output.txt", ios_base::out);
	getline(f1, s);
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'p')
			k += 1;
	f2 << k << endl;

	f1.close();
	f2.close();

	system("pause");
}
