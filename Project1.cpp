﻿#include <tchar.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int _tmain(int argc, wchar_t argv[]) // функция для поддержки всех символов кода юникода и нет
{
	srand(time(NULL)); // возможность генерации псевдослучайных чисел основываясь на показатели даты 
	setlocale(LC_ALL, "Russian"); // включение возможности работы с русскими символами
	int arr[30];
	for (int i = 1; i < 31; i++)
	{
		arr[i] = rand() % 100;
		cout << " " << arr[i]; // заполнение и вывод массива с рандомными числами от 0 до 100 
	}
	int s = 0;
	cout << endl;
	cout << "Введите число для проверки";
	cout << endl;
	cin >> s; // запись введенного пользователем числа  
	int r = 32;
	for (int i = 30; i >= 1; i--) // перебор массива начиная с последних элементов для поиска такого же значения как ввел пользователь
	if (arr[i] == s)
	{
		r = i; // при нахождении нужного элемента массива вывод его номера
	}
	if (r == 32){
		cout << endl;
		cout << "Массив не содержит данного числа";
	}
	else { cout << "Номер первого элемента, содержащего данное число " << r; }

	cin.get(); // окончание работы с потоками
	cin.get();
	return 0;
}