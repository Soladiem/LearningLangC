#include <stdio.h>
#include <Windows.h>

// Структуры

void main(void) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	struct Man
	{
		char FirstName[35];
		char LastName[35];
		unsigned short int Age;
	} man = {"Иван", "Иванов", 18};

	printf("Структура с именем man:\n");
	printf("Имя	: %s\nФамилия	: %s\nВозраст	: %d\n\n", man.FirstName, man.LastName, man.Age);

	// Вариант 2

	struct Man man2 = { "Ivan", "Ivanov", 36 };

	printf("\nСтруктура с именем man2:\n");
	printf("Имя	: %s\nФамилия	: %s\nВозраст	: %d\n", man2.FirstName, man2.LastName, man2.Age);

	// Вариант 3 (не подходит для кирилицы, т.к. используется тип char)

	struct Man man3;

	man3.FirstName[0] = 'P';
	man3.FirstName[1] = 'e';
	man3.FirstName[2] = 't';
	man3.FirstName[3] = 'r';
	man3.FirstName[4] = '\0';

	man3.LastName[0] = 'P';
	man3.LastName[1] = 'e';
	man3.LastName[2] = 't';
	man3.LastName[3] = 'r';
	man3.LastName[4] = 'o';
	man3.LastName[5] = 'v';
	man3.LastName[6] = 'i';
	man3.LastName[7] = 'c';
	man3.LastName[8] = 'h';
	man3.LastName[9] = '\0';

	man3.Age = 27;

	printf("\nСтруктура с именем man3:\n");
	printf("Имя	: %s\nФамилия	: %s\nВозраст	: %d\n", man3.FirstName, man3.LastName, man3.Age);	
}