#include <stdio.h>
#include <Windows.h>

// Перечисления

void main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Вариант 1

	enum Color {
		CYAN,
		MAGENTA,
		YELLOW,
		KEY
	};

	printf("Палитра CMYK\n\n");
	printf("Голубой: %d\nПурпурный: %d\nЖёлтый: %d\nЧёрный: %d\n", CYAN, MAGENTA, YELLOW, KEY);

	// Вариант 2

	enum Rgb {
		RED = 170,
		GREEN = 187,
		BLUE = 204
	};

	printf("\nПалитра RGB\n\n");
	printf("Красный: %d\nЗелёный: %d\nСиний: %d", RED, GREEN, BLUE);
}