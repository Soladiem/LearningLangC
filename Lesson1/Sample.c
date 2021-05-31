#include <stdio.h>
#include <Windows.h>

// Целочисленные типы данных

void main(void) {
	// Назначаем кодировку UTF8 для ввода и вывода кирилицы (подключаем Windows.h)
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	signed char c1;		// от -127 до 127
	unsigned char c2;	// от 0 до 255

	short int i1;			// от -32767 до 32767 
	unsigned short int i2;	// от 0 до 65535

	int i3;				// от -32767 до 32767
	unsigned int i4;	// от 0 до 65 535

	long int i5;		// от -2147483647 до 2147483647
	unsigned int i6;	// от 0 до 4294967295 

	long long int i7;			// от -9223372036854775807 до 9223372036854775807 
	unsigned long long int i8;	// от 0 до 18446744073709551615

	c1 = 'A';
	c2 = 65;
	i1 = i3 = -13234;
	i2 = i4 = 13234;
	i5 = -1000001;
	i6 = 1000001;
	i7 = -4000111222333;
	i8 = 4000111222333;

	printf("Символьный тип (знаковый)		: %c\n", c1);
	printf("Символьный тип (беззнаковый)		: %c\n", c2);
	printf("Короткое целое число (со знаком)	: %d\n", i1);
	printf("Короткое целое число (без знака)	: %d\n", i2);
	printf("Основное целое число (со знаком)	: %d\n", i3);
	printf("Основное целое число (без знака)	: %d\n", i4);
	printf("Длинное целое число (со знаком)		: %d\n", i5);
	printf("Длинное целое число (без знака)		: %d\n", i6);
	printf("Двойное длинное целое число (со знаком)	: %lld\n", i7);
	printf("Двойное длинное целое число (без знака)	: %lld\n", i8);
}