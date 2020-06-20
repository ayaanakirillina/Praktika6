//3. Определить количество слов в тексте
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main()
{
	string s;
	string a[100];
	int k = 0;
	ifstream myfile1;
	ofstream myfile2;
	myfile1.open("input.txt", ios_base::in);
	myfile2.open("output.txt", ios_base::out);
	getline(myfile1, s);
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i + 1] == ' ' || s[i + 1] == '\0') && s[i] != ' ')
		k++;
	}
	myfile2 << "Kolichestvo slov: ";
	myfile2 << k;

	myfile1.close();
	myfile2.close();

	system("pause");
}