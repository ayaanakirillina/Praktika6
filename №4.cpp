//4. Дан текст. Вставить пробел после каждой цифры.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string s;
	string a[100];
	ifstream f1;
	f1.open("input.txt", ios_base::in);
	ofstream f2;
	f2.open("output.txt", ios_base::out);
	getline(f1, s);
	int k = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] <= '9' && s[i] >= '0')
		{
			s.insert(s.begin() + ++i, ' ');//вставка пробела
		}
	}
	f2 << s;

	f1.close();
	f2.close();

	system("pause");
}
