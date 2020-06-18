//7. Считайте с экрана предложение и выведите его слова в рандомном расположении

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	string str;
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


	for (int i = 0; i < k; i++)
	{
		swap(str1[i], str1[rand() % k]);
	}

	str.erase();
	for (int i = 0; i < k; i++)
	{
		str.append(str1[i], 0, str1[i].length());
		str += ' ';
	}

	cout << str;
	delete[] str1;

	system("pause");
}