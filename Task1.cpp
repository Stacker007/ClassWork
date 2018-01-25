/*
Массив из 5 элементов
найти мин, макс,
если мин>0 найти произведение
иначе - сумму
сортировка методом пузырька
*/

#include <iostream>
#include <ctime>
#define SIZE 5

using namespace std;
// ФУНКЦИЯ ДЛЯ ВЫВОДА МАССИВА :
void printOurArr(int a[SIZE]);

void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "a[" << i << "]= ";
		cin >> ourArr[i];
	}
	cout << "Исходный массив:\n";
	printOurArr(ourArr);
	int max = ourArr[0];
	int iMax = 0;
	int min = ourArr[0];
	int iMin = 0;
	for (int i = 0; i < SIZE - 1; i++)
	{
		if (ourArr[i] < min) {
			min = ourArr[i];
			iMin = i;
			continue;
		}
		if (ourArr[i] > max) {
			max = ourArr[i];
			iMax = i;
		}
	}
	cout << "Минимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;


	cout << "Итоговый массив:\n";
	printOurArr(ourArr); // Вызов функции вывода массива
	system("pause");
}
void printOurArr(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}
