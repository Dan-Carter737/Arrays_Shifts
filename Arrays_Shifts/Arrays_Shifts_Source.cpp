#include <iostream>
using namespace std;
using std::cout;

//void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);

const int n = 10;
int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//int arr[n];

void main()
{
	setlocale(LC_ALL, "");

	//arr[2] = 123; // обращение к эелементу массива на запись
	//cout << arr[2] << endl; //обращение к эелементу массива на чтение

	int Sum_arr = 0, Mid_arr = 0;
	//cout << "Введите элементы массива: ";
	//FillRand(arr, n);
	cout << endl << "Вы ввелли следующие значения массива: ";
	Print(arr, n);
	cout << endl << endl;;
	Sum(arr, n);
	cout << "Сумма всех элементов массива равна:  " << Sum(arr, n) << endl << endl;
	cout << "Среднее арифмтическое значение элементов массива равно: " << Avg(arr, n) << endl << endl;

	cout << "Максимальное значение элемента массива равно: " << maxValueIn(arr, n) << endl << endl;

	cout << "Минималбное значение элемента массива равно: " << minValueIn(arr, n) << endl << endl;
	//cout << "Массив сдвинутый влево: " << shiftLeft(arr, n) << endl;
	int number_of_shifts;
	cout << "Введите количество шагов, для сдвига элементов массива влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}
int Sum(const int arr[], const int n)
{
	int Sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
	return Sum_arr;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	return min;
}
int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}

}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}

}