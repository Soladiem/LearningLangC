#include <stdio.h>
#include <Windows.h>

// Вещественные числа

void main() {
	// Назначаем кодировку UTF8 для ввода и вывода кирилицы (подключаем Windows.h)
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	float f;		// от 3.4e-38 до 3.4e+38
	double d1;		// от 1.7e-308 до 1.7C+308
	long double d2;	// от 3.4e-4932 до 3.4e+4932

	f = 0.12;
	d1 = 0.17181920212223;
	d2 = 0.23999999999999999111821580299874767661094665527344;

	printf("Число одинарной точноcти	: %.2f\n", f);
	printf("Число двойной точноcти		: %.14f\n", d1);
	printf("Число двойной точноcти (64 бит)	: %.50f\n", d2);
}