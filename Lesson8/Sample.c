#include <stdio.h>
#include <Windows.h>

// Объединения

void main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

    // Вариант 1

    union Ints
    {
        unsigned short int a;
        unsigned int b;
        unsigned long int c;
    };

    union Ints ints = { 105 };

    printf("Объединение ints:\n\n");
    printf("Значение a: %d\nЗначение b: %d\nЗначение c: %d\n", ints.a, ints.b, ints.c);

    union Ints ints2;
    ints2.b = 10010;

    printf("\nОбъединение ints2:\n\n");
    printf("Значение a: %d\nЗначение b: %d\nЗначение c: %d\n", ints2.a, ints2.b, ints2.c);
}