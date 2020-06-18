//6.Преобразовать строку S, переставив слова в обратном порядке.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream myfile1;
	myfile1.open("input.txt", ios_base::in);
	ofstream myfile2;
	myfile2.open("output.txt", ios_base::out);
	string S;
	string a[100];
	getline(myfile1, S);
	int k = 0;
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ')
			a[k] += S[i];
		else
			k++;
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = a[i].length() - 1; j >= 0; j--)
			myfile2 << a[i][j];
		myfile2 << " ";
	}

	myfile1.close();
	myfile2.close();

	system("pause");
}