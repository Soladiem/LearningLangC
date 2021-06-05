#include <stdio.h>
#include <Windows.h>

// Указатели

void hello(void)
{
	printf("Hello World!\n");
}

void main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Вариант 1

	int Weight = 99;
	int* pWeight = &Weight;
	int** pMyWeight = &pWeight;

	**pMyWeight = 52; // Заменили вес, поменяется также для переменной Weight


	printf("Вес тела:\n");
	printf("Вес: %d\nМой вес: %d\n", *pWeight, **pMyWeight);

	// Вариант 2

	char str[12] = "Hello World";
	char(*pStr)[12];
	pStr = &str;

	printf("\nСообщение:\n");
	printf("Пример сообщения: %s\n", *pStr);

	// Вариант 3

	void (*message) (void);

	printf("\nСообщения\n");
	message = hello;
	hello();
}