#include <iostream> 
#include <string> 
using namespace std;
void sim(char x) {
	do {
		cout << "Ввидете символ" << endl;
		cin >> x;
	} while (!isalpha(x));
}
void str(string y, char x) {
	do {
		cout << "Введите строку" << endl;
	} while (getline(cin, b));
	for (int i = 0; i < y[i] != '\0'; i++) {
		if (y[i] == x) {
			cout << "Символ " << x << " стоит на - " << i + 1 << "месте";
		}
	}
}
int main()
{
	char x = '1';
	string(y);
	setlocale(LC_ALL, "RU");
	sim(x);
	str(y, x);
	return 0;
	system("pause");
}
