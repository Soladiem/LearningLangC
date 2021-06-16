#include <stdio.h>
#include <locale.h>

// Циклы

void main(void) {
	setlocale(LC_ALL, "ru-RU.UTF-8");

	// Вариант 1

	printf("Параметрический цикл\n");

	int numbers[7] = { 1, 3, 5, 7, 9, 11, 13 };

	printf("   Нечетные числа: ");

	for (int i = 0; i < 6; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n\n");

	// Вариант 2

	printf("Цикл с предусловием\n");

	int j = 0;

	printf("   Нечетные числа: ");

	while(j < 3) {
		printf("%d ", numbers[j]);
		++j;
	}
	printf("\n\n");

	// Вариант 3

	printf("Цикл с постусловием\n");

	int k = 0;

	printf("   Нечетные числа: ");

	do {
		printf("%d ", numbers[k]);
		++k;
	} while (k < 3);

	printf("\n\n");
}