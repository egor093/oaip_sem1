//#include <iostream> 
//void main()
//{
//	const int ci = 3;
//	const int cj = 2;
//	int a[ci][cj] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	for (int i = 0; i < ci; i++)
//		for (int j = 0; j < cj; j++)
//			std::cout << "\n a[" << i << "," << j << "] =" << a[i][j];
//}

//#include <iostream>
//void main()
//{
//	const int n = 3;
//	const int m = 2;
//	int h = 0;
//	int A[n][m] = { 0, 1, 2, 3, 4, 5 };
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			h += A[i][j];
//	std::cout << h;
//}

//#include <iostream>
//void main()
//{
//	const int n = 3;
//	const int m = 2;
//	int h = 0;
//	int C[n][m] = { 0, 1, 2, 3, 4, 5 };
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			h += *(*(C + i) + j);
//	std::cout << h;
//}

//#include <iostream>
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	const int n = 2;
//	const int m = 4;
//	int B[n][m];
//	int i, j, row = 0, column = 0;
//	cout << "Введите элементы массива" << endl;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			cin >> B[i][j];
//	int min = B[0][0];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			if (min > B[i][j])
//			{
//				min = B[i][j];
//				column = i;
//				row = j;
//			}
//	cout << " Исходный массив:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "\n";
//		for (int j = 0; j < m; j++)
//			cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
//	}
//	cout << endl;
//	cout << "Минимальный элемент B[" << column << "," << row << "] =" << min << endl;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    const int n = 3;
//    int matrix[n][n];
//
//    cout << "Введите элементы матрицы: " << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    int minElement = 999;
//    int minIndex = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (matrix[i][i] < minElement) {
//            minElement = matrix[i][i];
//            minIndex = i;
//        }
//    }
//
//    cout << "Наименьший элемент главной диагонали: " << minElement << endl;
//    cout << "Столбец, в котором находится наименьший элемент: " << endl;
//
//    for (int i = 0; i < n; i++) {
//        cout << matrix[i][minIndex] << endl;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    const int n = 3;
//    const int m = 4;
//
//    int matrix[n][m];
//    cout << "Введите элементы матрицы: " << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//    int count = 0;
//    for (int j = 0; j < m; j++) {  // Для каждого столбца
//        for (int i = 0; i < n; i++) {  // Для каждой строки в текущем столбце
//            int sum = 0;
//            // Считаем сумму всех элементов столбца, кроме текущего
//            for (int k = 0; k < n; k++) {
//                if (k != i) {
//                    sum += matrix[k][j];
//                }
//            }
//
//            if (matrix[i][j] > sum) {
//                count++;
//            }
//        }
//    }
//    cout << "Количество элементов, которые больше суммы остальных элементов своего столбца: " << count;
//    return 0;
//}

