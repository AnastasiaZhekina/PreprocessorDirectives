#include <iostream>
using namespace std;
#define MODE 1

#ifndef MODE
#error "Необходимо определить MODE"
#endif

double add(double c, double s) {
	return c + s;
}
int main() {
	int a, b;
	setlocale(LC_ALL, "rus");
#if MODE == 0 
	cout << "Работаю в режиме тренировки";
#elif MODE == 1
	cout << "Работаю в боевом режиме" << endl << 
		"Введите число 1: ";
	cin >> a;
	cout << "Введите число 2: ";
	cin >> b;
	cout << "Результат сложения : " << add(a, b);
#else 
	cout << "Неизвестный режим. Завершение работы";
#endif
}