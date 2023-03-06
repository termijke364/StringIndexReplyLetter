#include<iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	setlocale(0, "");

	const int size = 30;

	cout << "Введите текст: " << endl;
	char buffer[size]{};
	gets_s(buffer);

	cout << "Укажите букву, позиции которых нужно найти в тексте: " << endl;
	char letter{};
	cin >> letter;

	for (int i = 0; i < size; i++)
	{
		if (*(buffer + i) == letter)
		{
			cout << "Символ обнаружен в индексе: " << i + 1 << endl;
		}
	}

	return 0;
}