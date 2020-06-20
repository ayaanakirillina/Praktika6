//8.У вас есть одно слово. Замените в введенном из клавиатуры предложении одно из слов на ваше слово. Рекомендуется использовать рандом.

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	string str;
	cout << "Vvedite predlozhenie: ";
	getline(cin, str);
	int k = 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ' ')
			k++;
	if (str[str.length() - 1] != ' ')
		k++;
	string* str1 = new string[k];
	int p = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			str1[p] += str[i];
		else
			p++;
	}
	int j = rand() % k;
	str1[j].clear();
	cout << "Vvedite slovo: ";
	cin >> str1[j];
	str.erase();
	for (int i = 0; i < k; i++)
	{
		str.append(str1[i], 0, str1[i].length());
		str += ' ';
	}
	cout << "Replace: " << str << endl;
	delete[] str1;

	system("pause");
}