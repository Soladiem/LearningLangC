#include <stdio.h>
#include <Windows.h>
#include <stdint.h>

// Целочисленные типы данных

void main(void) {
	// Назначаем кодировку UTF8 для ввода и вывода кирилицы (подключаем Windows.h)
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// В стандарте C99 предусмотрены типы данных, которые являются более короткими 
	// и понятными аналогами стандартных типов данных (подключаем stdint.h)

	int8_t c1;	// от -127 до 127
	uint8_t c2; // от 0 до 255

	int16_t i1;		// от -32767 до 32767 
	uint16_t i2;	// от 0 до 65535

	int16_t i3;		// от -32767 до 32767
	uint16_t i4;	// от 0 до 65 535

	int32_t i5;		// от -2147483647 до 2147483647
	uint32_t i6;	// от 0 до 4294967295 

	int64_t i7;		// от -9223372036854775807 до 9223372036854775807 
	uint64_t i8;	// от 0 до 18446744073709551615


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