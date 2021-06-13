#include <stdio.h>
#include <Windows.h>

#define Length 100
#define Weight 0.35

// Константы

void main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	const char Letter = 'A';
	const char StrHello[12] = "Hello World";
	const float PI = 3.14;

	printf("Длина: %d\n", Length);
	printf("Вес: %.2f\n", Weight);
	printf("Символ: %c\n", Letter);
	printf("Приветствие: %s\n", StrHello);
	printf("Число Пи: %.2f\n", PI);
}