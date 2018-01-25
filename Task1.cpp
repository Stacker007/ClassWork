/* Контрольная работа 25.01.2018 Вариант 2 Задание 1
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
void printOurArr(int a[], int size);

void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "a[" << i << "]= ";
		cin >> ourArr[i];
	}
	cout << "Исходный массив:\n";
	printOurArr(ourArr, SIZE);
	int max = ourArr[0];
	int iMax = 0;
	int min = ourArr[0];
	int iMin = 0;
	for (int i = 1; i < SIZE; i++)
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
	cout << "\nМинимальное значение: " << min << endl;
	cout << "Максимальное значение: " << max << endl;
	int tmp = ourArr[iMax];
	ourArr[iMax] = ourArr[iMin];
	ourArr[iMin] = tmp;
	cout << "Массив с перестановкой максимальногои минимального значений:\n";
	printOurArr(ourArr, SIZE);
	if (min > 0) {
		int sum = 0;
		for (int i = 0; i < SIZE; i++) sum += ourArr[i];
		cout << "Сумма элементов равна: " << sum << endl;
	}
	else {
		int product = 1;
		for (int i = 0; i < SIZE; i++) product *= ourArr[i];
		cout << "Произведение элементов равно: " << product << endl;
	}
	int k = SIZE - 1;
	
	while (k > 0 )
	{
		int endI = -1;		
		for (int i = 0; i < k; i++)
			if (ourArr[i] > ourArr[i + 1]) {
				int tmp = ourArr[i];
				ourArr[i] = ourArr[i + 1];
				ourArr[i + 1] = tmp;				
				endI = i;
			}
		k = endI;
	}
	cout << "Итоговый массив:\n";
	printOurArr(ourArr, SIZE); // Вызов функции вывода массива
	system("pause");
}
void printOurArr(int a[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}

