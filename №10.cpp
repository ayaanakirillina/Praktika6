/*10.�������� ���������, ������� ��������� .cpp ���� �� ������������ ������������
�������� ������ {}. ���� �������� ������ ���������, �� ������� ����� ������.*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void fun(int* a, int& k, int &h)
{
	for (int i = h; i < k - 2; i++)
		a[i] = a[i + 2];
}

int main()
{
	setlocale(LC_ALL, "");
	string FileName = "Source.cpp";
	string str, text;
	ifstream file(FileName);

	while (!file.eof())                    //���������� ����
	{
		getline(file, str);
		text += "\n" + str;
	}
	text.erase(0, 1);

	int k = 0;
	for (int i = 0; i < text.length(); i++)
		if (text[i] == '{' || text[i] == '}')
			k++;

	string qui;
	int *a = new int[k];

	int l = 0, j = 1;                                 //���������� ������ � �� ������������
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '{' || text[i] == '}')
		{
			qui += text[i];
			*(a + l) = j;
			l++;

		}
		if (text[i] == '\n')
			j++;
	}

	int d = k / 2;                                  //��������� �������
	for (int i = 1; i <= d; i++)
	{
		for (int g = 0; g < qui.length(); g++)
		{
			if (qui[g] == '{' && qui[g + 1] == '}')
			{
				qui.erase(g, 2);                      //��������� ���� ���������
				fun(a, k, g);
				k -= 2;
			}
		}
	}


	if (qui.empty())
		cout << "��� ������ ��������� �� ����� ������" << endl;
	else
		for (int i = 0; i < k; i++)
			cout << "�� �������� ������ �: " << *(a + i) << " ������" << endl;


	cout << endl;
	delete[]a;
	file.close();

	system("pause");
}