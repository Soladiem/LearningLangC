#include <stdio.h>
#include <Windows.h>

// Тип размера и разности двух указателей

void main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	size_t st; // Результат оператора sizeof
	st = sizeof(int);

	printf("Размер типа int %zu байта\n", st);

	int arr[100];
	int *p1 = &arr[18], *p2 = &arr[23];
	ptrdiff_t pt = p2 - p1; // Результат вычитания двух указателей
	printf("Результат вычитания двух указателей (p2 и p1): %td\n", pt);
}