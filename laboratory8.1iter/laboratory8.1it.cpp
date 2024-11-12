#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <iostream>
#include <string.h>

using namespace std;

int Count(char* str)
{
	int comaCount = 0;
	if (strlen(str) < 3)
		return 0;


	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == ',') {
			comaCount++;
			if (comaCount == 3) {
				return i;
			}
		}
	}
	return -1;
}
char* Change(char* str)
{
	size_t len = strlen(str);

	if (len < 3)
		return str;

	char* tmp = new char[len * 2];
	char* t = tmp;

	tmp[0] = '\0';

	size_t i = 0;

	while (str[i] != 0)
	{
		if (str[i] == ',') {
			*t++ = '*';
			*t++ = '*';
			i++;
		}
		else {
			*t++ = str[i++];
		}
	}

	*t = '\0';

	strcpy(str, tmp);

	delete[] tmp;

	return str;
}


int main()
{
	char str[101];

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	int s = Count(str);

	cout << "third coma index is " << s << endl;

	char* dest = new char[151];
	dest = Change(str);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
}