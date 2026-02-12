////#include <iostream>
////using namespace std;
////int  square(int&);
////void main()
////{
////    for (int x = 1; x <= 10; x++)
////        cout << square(x) << ' ';
////}
////int square(int& y)
////{
////    return y * y;
////}
//
//   	// определение функции	
////int sum(int& x)
////{
////	int* p = &x, res = 0;
////	for (int i = 0; i < 5; i++)
////		res += p[i];
////	return res;
////}
////
////int main()
////{
////	int mas[5], i;
////	for (i = 0; i < 5; i++)
////	{
////		mas[i] = i * i;
////		cout << mas[i] << ' ';
////	}
////	cout << endl << "result=" << sum(*mas) << endl;
////}
//
////#include <iostream>
////using namespace std;
////
////int massiv(int* M, int); //прототип
////void matrix();            //прототип
////
////int main(void)
////{
////	setlocale(LC_CTYPE, "Russian");
////	int choice;
////	do
////	{
////		cout << "Выберите вариант работы" << endl;
////		cout << "1 - с одномерным массивом" << endl;
////		cout << "2 - с матрицей" << endl;
////		cout << "3 - выход" << endl;
////		cin >> choice;
////		switch (choice)
////		{
////		case 1:  int* M, size, i, av;
////			cout << "Введите размер массива ";
////			cin >> size;
////			M = new int[size];
////			for (i = 0; i < size; i++)
////			{
////				cout << "Введите " << i + 1 << " число ";
////				cin >> *(M + i);
////			}
////			av = massiv(M, size);
////			cout << "Результат=" << av << endl;
////			delete[] M;
////			break;
////		case 2:  matrix();
////			break;
////		case 3:  break;
////		}
////	} while (choice != 3);
////}
////int massiv(int* M, int size)
////{
////	int sum = 0, avar;
////	for (int i = 0; i < size; i++)
////		sum += *(M + i);
////	avar = sum / size;
////	return avar;
////}
////void matrix()
////{
////	int** A, row, col, i, j, m;
////	cout << "Введите число строк матрицы ";
////	cin >> row;
////	cout << "Введите чиcло столбцов ";
////	cin >> col;
////	A = new int* [row];
////	for (i = 0; i < row; i++)
////		A[i] = new int[col];
////	for (i = 0; i < row; i++)
////		for (j = 0; j < col; j++)
////		{
////			cout << "Введите A[" << i << "],[" << j << "]= ";
////			cin >> *(*(A + i) + j);
////		}
////	m = A[0][0];
////	for (i = 0; i < row; i++)
////		for (j = 0; j < col; j++)
////			if (*(*(A + i) + j) > m)
////				m = *(*(A + i) + j);
////	cout << "Результат=" << m << endl;
////	for (i = 0; i < row; i++)
////		delete A[i];
////	delete[] A;
////}
//
//#include <iostream>
//using namespace std;
//// Функция для обмена двух строк матрицы
//void swapRows(int** matrix, int n, int row1, int row2) {
//    for (int i = 0; i < n; ++i) {
//        swap(matrix[row1][i], matrix[row2][i]);
//    }
//}
//// Функция для поиска строки, содержащей элемент
//int findRowContainingElement(int** matrix, int k, int n, int element) {
//    for (int i = 0; i < k; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (matrix[i][j] == element) {
//                return i;  // Возвращаем индекс строки
//            }
//        }
//    }
//    return -1;  // Если элемент не найден, возвращаем -1
//}
//int main() {
//    setlocale(LC_ALL, "rus");
//    int k, n;
//    cout << "Введите количество строк (k <= 12): ";
//    cin >> k;
//    cout << "Введите количество столбцов (n <= 8): ";
//    cin >> n;
//    int** matrix = new int* [k];
//    for (int i = 0; i < k; ++i) {
//        matrix[i] = new int[n];
//    }
//    cout << "Введите элементы матрицы A[" << k << "][" << n << "]:\n";
//    for (int i = 0; i < k; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
//            cin >> matrix[i][j];
//        }
//    }
//    int a, b;
//    cout << "Введите элемент a: ";
//    cin >> a;
//    cout << "Введите элемент b: ";
//    cin >> b;
//    // Находим строки, содержащие элементы a и b
//    int rowA = findRowContainingElement(matrix, k, n, a);
//    int rowB = findRowContainingElement(matrix, k, n, b);
//    if (rowA != -1 && rowB != -1) {
//        // Обмен строками
//        swapRows(matrix, n, rowA, rowB);
//        cout << "Матрица после обмена строк:\n";
//        for (int i = 0; i < k; ++i) {
//            for (int j = 0; j < n; ++j) {
//                cout << matrix[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//    else {
//        cout << "Один или оба элемента не найдены в матрице.\n";
//    }
//    for (int i = 0; i < k; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//    return 0;
//}

#include <iostream>
#include <cstring>
using namespace std;

// Функция для проверки, заканчивается ли слово на "ая"
bool endsWithAya(const char* word) {
    int len = strlen(word);
    return len > 2 && word[len - 3] == 'а' && word[len - 2] == 'я';
}

// Функция для разбиения строки на слова и сохранения их в динамическом массиве
void splitIntoWords(const char* sentence, char**& words, int& wordCount) {
    const char* delimiters = " ";  // Разделители слов (пробел)
    wordCount = 0;
    int sentenceLength = strlen(sentence);
    int maxWords = 100;  // Максимальное количество слов

    // Выделяем память для массива указателей на слова
    words = new char* [maxWords];

    // Используем временную строку для выделения слов
    const char* start = sentence;
    for (int i = 0; i <= sentenceLength; ++i) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            int wordLength = i - (start - sentence);
            if (wordLength > 0) {
                words[wordCount] = new char[wordLength + 1];
                strncpy(words[wordCount], start, wordLength);
                words[wordCount][wordLength] = '\0';  // Закрываем строку
                ++wordCount;
            }
            start = sentence + i + 1;
        }
    }
}

// Основная программа
int main() {
    setlocale(LC_ALL, "rus");
    char* sentence = new char[1000];  // Выделение памяти для строки

    cout << "Введите предложение: ";
    cin.getline(sentence, 1000);  // Ввод строки

    char** words = nullptr;  // Указатель на динамический массив слов
    int wordCount = 0;

    // Разбиение строки на слова
    splitIntoWords(sentence, words, wordCount);

    // Вывод всех слов, оканчивающихся на "ая"
    bool found = false;
    cout << "Слова, оканчивающиеся на 'ая':\n";
    for (int i = 0; i < wordCount; ++i) {
        if (endsWithAya(words[i])) {
            cout << words[i] << endl;
            found = true;
        }
        delete[] words[i];  // Освобождаем память для слова
    }

    if (!found) {
        cout << "Нет слов, оканчивающихся на 'ая'.\n";
    }

    delete[] words;  // Освобождаем память для массива слов
    delete[] sentence;  // Освобождаем память для строки

    return 0;
}
