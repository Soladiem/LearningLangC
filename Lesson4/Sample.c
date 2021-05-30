#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>

// Логический тип (стандарт C99)

void main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	bool b1, b2; // false или true

	b1 = false;
	b2 = true;

	printf("Значение ложь	: %s\n", b1 ? "true" : "false");
	printf("Значение истина	: %s\n", b2 ? "true" : "false");
}