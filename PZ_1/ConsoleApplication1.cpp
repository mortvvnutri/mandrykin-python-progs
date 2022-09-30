#include <iostream>
#include <fstream>

using namespace std;
char fname[64];
char ch;


int main()
{
	setlocale(LC_CTYPE, "rus");
	cout << "Привет, введите название файла!\n";
	cin >> fname;
	ifstream fin;
	fin.open(fname);

	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла!";
	}
	else
	{
		cout << "Файл открыт\n";
		while (fin.get(ch))
		{
			
			if (ch == 59)
			{
				cout << "\n\t";
			}
			else
			{
				cout << ch;
			}
		}
	}
	fin.close();
	return 0;
}	