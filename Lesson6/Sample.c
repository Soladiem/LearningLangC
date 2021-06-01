#include <stdio.h>
#include <Windows.h>

// Массивы

void main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Вариант 1

	int arr[7] = { 2, 4, 6, 8, 10, 12, 14 };
	size_t n = sizeof(arr) / sizeof(arr[0]);

	printf("Элементы массива arr:\n\n");

	for (int i = 0; i < n; i++) {
		printf("Значение массива для элемента %d: %d\n", i, arr[i]);
	}

	// Вариант 2

	int arr2[3];	
	arr2[0] = 'a';
	arr2[1] = 'b';
	arr2[2] = 'c';
	size_t n2 = sizeof(arr2) / sizeof(arr2[0]);

	printf("\nЭлементы массива arr2:\n\n");

	for (int i = 0; i < n2; i++) {
		printf("Значение массива для элемента %d: %c\n", i, arr2[i]);
	}

	// Вариант 3
	int arr3[2][2] = { {1,1}, {2,2} };
	size_t n3 = sizeof(arr3) / sizeof(arr3[0]);

	printf("\nЭлементы массива arr3:\n\n");

	for (int i = 0; i < n3; i++) {
		for (int j = 0; j < n3; j++) {
			printf("Значение массива для строки %d стобца %d: %d\n", i+1, j+1, arr3[i][j]);
		}
	}	
}