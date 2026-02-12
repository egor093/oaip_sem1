//#include <iostream>
//using namespace std;
//
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int i, k, size = 4;
//	float massivA[] = { 5, -4, 17.1, 9, 1 };
//	cout << "Введите номер элемента (от 0 до 4)";
//	cin >> k;
//	for (i = k; i <= size; i++)
//		massivA[i] = massivA[i + 1];
//	size--;
//	for (i = 0; i <= size; i++)
//		cout << massivA[i] << endl;
//}

//#include <stdio.h>
//void main()
//{
//	const int size = 5;
//	int masA[size], masB[size], masC[size * 2];
//	int k = 0, j = 0, i = 0;
//	printf("A:\n");
//	for (int n = 0; n < size; n++)
//		scanf_s("%d", &masA[n]);
//	printf("B:\n");
//	for (int n = 0; n < size; n++)
//		scanf_s("%d", &masB[n]);
//	do
//	{
//		if (masA[k] <= masB[j])
//			masC[i++] = masA[k++];
//		else
//			masC[i++] = masB[j++];
//		if (k == size)
//			for (; j < size; j++)
//				masC[i++] = masB[j];
//		if (j == size)
//			for (; k < size; k++)
//				masC[i++] = masA[k];
//	} while (i < size * 2);
//	printf("\n");
//	for (i = 0; i < size * 2; i++)
//		printf("%d ", masC[i]);
//	printf("\n");
//}

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	const int N = 100;
//	int i, sz,A[N], rmn = 0, rmx =99;
//	cout << "Введите размер массива: ";
//	cin >> sz;
//	cout << "Массив A: " << endl;
//	srand((unsigned)time(NULL));
//	for (i = 0;i < sz;i++)
//	{
//		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
//		/*cout << A[i] << " ";*/
//	}
//		for (i = 0;i < N;i++)
//		{
//			A[i] = A[i-1];
//			cout << A[i] << " ";
//		}
//}

//#include <iostream>
//#include <locale>
//using namespace std;
//
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int i, n, kmax = 30, a[99],b,n;
//	cout << "Введите размер массива(<30): ";
//	cin >> n;
//	if (n > 99) {
//		return;
//	}
//	srand((unsigned)time(NULL));
//	for (i = 0;i < n;i++)
//	{
//		a[i] = rand() % 99;
//		/*cout << a[i] << " ";*/
//	}
//	for (i = 0;i < n;i++)
//	{
//		a[i] += a[i-1];
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}

//#include <iostream>
//#include <cstdlib> 
//#include <ctime>   
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    int n;
//    const int N = 100;
//    using namespace std;
//    cout << "Введите размер массива: ";
//    cin >> n;
//    int A[N];
//    srand(time(0));
//
//    // Заполнение массива случайными числами и вывод исходного массива
//    std::cout << "Исходный массив: ";
//    for (int i = 0; i < n; ++i) {
//        A[i] = rand() % 100; 
//        cout << A[i] << " ";
//    }
//    cout << std::endl;
//
//    // Замена элементов массива (кроме первого) суммой всех предыдущих
//    for (int i = 1; i < n; ++i) {
//        A[i] += A[i - 1];
//    }
//
//    // Вывод измененного массива
//    cout << "Измененный массив: ";
//    for (int i = 0; i < n; ++i) {
//        cout << A[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}

//#include <iostream>
//#include <cstdlib> 
//#include <ctime>   
//
//int main() {
//    using namespace std;
//    setlocale(LC_ALL, "rus");
//    int n;
//    const int N = 26;
//    cout << "Введите размер массива: ";
//    cin >> n;
//    char arr[N];
//    srand(time(0));
//    // Заполнение массива случайными латинскими буквами
//    cout << "Символы массива: ";
//    for (int i = 0; i < n; ++i) {
//        arr[i] = 'a' + rand() % 26; // Случайный символ от 'a' до 'z'
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    const int ALPHABET_SIZE = 26;
//    int freq[ALPHABET_SIZE] = { 0 }; // Массив для подсчета частот
//
//    // Подсчет частот символов
//    for (int i = 0; i < n; ++i) {
//        freq[arr[i] - 'a']++;
//    }
//
//    // Вывод символов, которые встречаются ровно один раз
//    cout << "Символы, встречающиеся ровно один раз: ";
//    for (int i = 0; i < n; ++i) {
//        if (freq[arr[i] - 'a'] == 1) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	const int week = 7;
//	int n;
//	int res[week];
//	cout << "Введите результаты наблюдений за неделю: ";
//	//Вводим результаты исследования за неделю
//	for (int i = 0; i < 7; i++)
//	{
//		cin >> n;
//		res[i] = n;
//	}
//	//Находим max, подкдючая библиотеку algorithm
//	int* max = max_element(begin(res), end(res));
//	cout << "Максимальное значние осадков: " << *max;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a[500];
//	int k, s = 0;
//	cout << "Введите размер массива (<500)" << endl;
//	cin >> k;
//	cout << "Введите элементы массива: ";
//	for (int i = 0; i < k; i++) { // Вводим значение массива
//		cin >> a[i];
//	}
//	//Перебираем пары элеметов
//	for (int i = 1; i < k; i++) {
//		if (a[i - 1] == a[i]) {
//			s += 1;
//		}
//	}
//	cout << "Количество пар " << s << endl;
//}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a[500];
	int k;
	cout << "Введите размер массива (<500)" << endl;
	cin >> k;
	cout << "Введите элементы массива: ";
	for (int i = 0; i < k; i++) { // Вводим значение массива
		cin >> a[i];
	}
	int max = 1;
	int c = 0;
	//Цикл для проверки каждого элемента
	for (int i = 0; i < k - 1; i++) {
		if (a[i] == a[i + 1]) {
			c++;
			//Если эта последовательность чисел больше, то присваиваем максимуму данное значение последовательности
			if (c > max) max = c;
			else c = 1;
		}
	}
	cout << "Наибольшее кол-во равных последовательных чисел: " << max << endl;
}
