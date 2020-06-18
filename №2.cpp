//2. Дан текст. Удалить из текста символ "a".

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string s;
	string a[100];
	string b;
	int k = 0;
	ifstream f1;
	f1.open("input.txt", ios_base::in);
	ofstream f2;
	f2.open("output.txt", ios_base::out);
	getline(f1, s);
	for (int i = 0; i < s.length(); i++)
		if (s[i] != 'a')
			b += s[i];
	f2 << b << endl;

	f1.close();
	f2.close();

	system("pause");
}
