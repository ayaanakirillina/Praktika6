#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int main() {
	string s;
	string a[5];
	getline(cin, s);
	int k = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != 'u')
			a[k] += s[i];
		else
			k++;
	}
		for (int i = 0; i < 5; i++) {
			for (int j = a[i].length() - 1; j >= 0; j--) {
				cout << a[i][j];
			}
			//cout << "u";
	}
	cout << endl;

	system("pause");
	return 0;
}