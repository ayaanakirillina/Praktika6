//9.�������� ���������, ������� ������� ������� �� �����������, ������������� ����� ������ ����

#include <iostream>
#include <string>
#include <Windows.h> //��� SetConsoleCP() � SetConsoleOutputCP()


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