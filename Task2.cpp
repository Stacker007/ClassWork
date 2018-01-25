/* Контрольная работа 25.01.2018 Вариант 2 Задание 2
Массив из 5x4
найти последний макс,
найти срзнач строки, в которой макс
*/

#include <iostream>
#include <ctime>
#define ROW 5
#define COL 4

using namespace std;
// ФУНКЦИЯ ДЛЯ ВЫВОДА МАССИВА :
void printOurArr(int a[][COL], int row);
void randOurArr(int a[][COL], int row);

void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[ROW][COL];
	randOurArr(ourArr, ROW);
	cout << "Исходный массив:\n" ;
	printOurArr(ourArr, ROW);
	int max = ourArr[0][0];
	int rowMax;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			if (ourArr[i][j] >= max)
			{
				max = ourArr[i][j];
				rowMax = i;
			}
	cout << "Максимальный элемент: " << max << endl;
	cout << "Строка с максимальным элементом: " << rowMax+1 << endl;
	double average = 0;
	for (int j = 0; j < COL; j++) average += ourArr[rowMax][j];
	average = average / COL;
	cout << "Среднее арифметическое элементов строки " << average << endl;
	system("pause");
}
void printOurArr(int a[][COL], int row) 
{
	for (int i = 0; i < row; i++) {
		printf("Строка № %d: ", i + 1);
		for (int j = 0; j < COL; j++)
			printf("%2d ", a[i][j]);
		printf("\n");
	}
}
void randOurArr(int a[][COL], int row)
{
	for (int i = 0; i < row; i++) 
		for (int j = 0; j < COL; j++)
			a[i][j] = rand() % 51;
}

