//Íàéòè ñàìîå äëèííîå ñëîâî
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>


using namespace std;

int main() {
	string MAX = "", string, buf;
	int l;
	ifstream file1("input.txt");

	while (getline(file1,string)) {
		string += " ";
		for (int i = 0, l = string.length(); i < l; i++) {
			if (string[i] >= 'a' && string[i] <= 'z')
				buf += string[i];
			else {
				if (MAX.length() < buf.length())
					MAX = buf;
				buf.clear();
			}
		}
		for (int i = 0, l = string.length(); i < l; i++) {
			if (string[i] >= 'A' && string[i] <= 'Z')
				buf += string[i];
			else {
				if (MAX.length() < buf.length())
					MAX = buf;
				buf.clear();
			}
		}
	}
	ofstream file2("output.txt");
	file2 << MAX;


	system("pause");
	return 0;
}
