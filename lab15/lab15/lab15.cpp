#include <stdio.h>	
#include <stdlib.h>

void main()
{
	int* ptr, i, n, max;
	printf_s("Input size of massiv, n<30 \n");
	scanf_s("%d", &n);

	if (!(ptr = (int*)malloc(n * sizeof(int))))   //выделение памяти и проверка, 
	{	                                      //достаточно ли для нее места
		puts("Not enough memory");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf_s("Input element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);
	}
	printf_s("\nMassiv: \n", i + 1);
	for (i = 0; i < n; i++)
		printf_s("%d ", *(ptr + i));
	max = *ptr;
	for (i = 0; i < n; i++) {
		if (abs(*(ptr + i)) > abs(max))
			max = *(ptr + i);
	}
	printf_s("\nMax by modul: %d\n", max);
	free(ptr);     //освобождение динамической памяти

}
//
//#include <ctime>
//#include <iostream>
//using namespace std;
//void main()
//{
//	int size, mult = 1, sum = 0, ** A;
//	cout << "Enter size ";
//	cin >> size;
//	srand(time(0));
//	A = new int* [size];    //выделение динам.памяти
//	for (int i = 0; i < size; i++)
//		A[i] = new int[size];
//	for(int i = 0; i < size; i++)
//	for (int j = 0; j < size; j++)
//		A[i][j] = 1 + rand() % 10;
//	for (int** ptr = A; ptr != A + size; ++ptr)
//	{
//		for (int* it = *ptr; it != *ptr + size; ++it)
//		{
//			cout << "\t" << *it;
//			if (*it % 2 == 0)
//			{
//				mult *= *it;
//				sum += *it;
//			}
//		}
//		cout << endl;
//	}
//	cout << "sum: " << sum << endl;
//	cout << "mult: " << mult << endl;
//	for (int k = 0; k < size; k++) //освобождение памяти
//		delete[] A[k];
//	delete[] A;
//}

//#include <iostream>
//using namespace std;
//void main() {
//	setlocale(LC_ALL, "rus");
//	char* pStr;
//	char c, * pc;
//	int j, lenght, count = 0;
//	cout << "Введите размер строки ";
//	cin >> lenght;
//	pStr = new char[lenght + 1];
//	cout << "Введите строку ";
//	cin >> pStr;
//	cout << "Введите символ ";
//	cin >> c;
//	pc = &c;
//	for (j = 0; j < lenght; j++)
//		if (pStr[j] == *pc)
//			count++;
//	cout << count << " повторений символа " << c << endl;
//	delete[] pStr;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() { 
//    int n;
//    printf_s("Input size of massiv \n");
//    scanf_s("%d", &n);
//    double* arr = (double*)malloc(n * sizeof(double));
//    printf_s("Input massiv \n");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%lf", &arr[i]);
//    }
//    double sumOddIndexes = 0;
//    double sumBetweenNegatives = 0;
//    int firstNegativeIndex = -1;
//    int lastNegativeIndex = -1;
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 1) {
//            sumOddIndexes += arr[i];
//        }
//        // Находим первый и последний отрицательные элементы
//        if (arr[i] < 0) {
//            if (firstNegativeIndex == -1) {
//                firstNegativeIndex = i;
//            }
//            lastNegativeIndex = i;
//        }
//    }
//    // Если найдены хотя бы два отрицательных элемента, считаем сумму между ними
//    if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && firstNegativeIndex <= lastNegativeIndex) {
//        for (int i = firstNegativeIndex; i <= lastNegativeIndex; i++) {
//            sumBetweenNegatives += arr[i];
//        }
//    }
//    printf_s("Sum with odd numder: %.2lf\n", sumOddIndexes);
//    printf_s("Sum betwen first end last negative numder: %.2lf\n", sumBetweenNegatives);
//    free(arr);
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main() {
//    setlocale(LC_ALL, "rus");
//    int m, n;
//    cout << "Введите количество строк матрицы: ";
//    cin >> m;
//    cout << "Введите количество столбцов матрицы: ";
//    cin >> n;
//    int** matrix = new int* [m];
//    for (int i = 0; i < m; i++) {
//        matrix[i] = new int[n];
//    }
//    cout << "Введите элементы матрицы:" << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//     Ищем первую строку, все элементы которой равны нулю
//    int rowIndex = -1; // Индекс строки с нулями
//    for (int i = 0; i < m; i++) {
//        bool allZero = true;
//        for (int j = 0; j < n; j++) {
//            if (matrix[i][j] != 0) {
//                allZero = false;
//                break;
//            }
//        }
//        if (allZero) {
//            rowIndex = i;
//            break;
//        }
//    }
//    if (rowIndex != -1) {
//        for (int i = 0; i < m; i++) {
//            matrix[i][rowIndex] /= 2;
//        }
//        cout << "Номер строки со всеми нулями: " << rowIndex + 1 << endl;
//        cout << "Матрица после изменения:" << endl;
//    }
//    else {
//        cout << "Строка, состоящая только из нулей, не найдена." << endl;
//    }
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//    for (int i = 0; i < m; i++) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//    return 0;
//}
