#include <iostream>
#include <cstring>
#include <ctime>
#include <Windows.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");

	bool result;
	srand(time(NULL));
	int a = rand();
	a = rand() % 100;

	char Str[500] = "";
	cout << "Введите вопрос на да/нет" << endl;

	cin.getline(Str, 500);

	/*cout << strlen(Str) << endl;
	cout << a << endl;*/


	if ((strlen(Str) % 2 == 0) && (a % 2 == 0))
	{
		cout << "yes" << endl;

	}
	else if ((strlen(Str) % 2 != 0) && (a % 2 != 0))
		cout << "yes" << endl;

	else
		cout << "no" << endl;
	return 0;
}