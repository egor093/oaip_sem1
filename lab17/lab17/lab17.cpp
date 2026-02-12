//#include <iostream>
//using namespace std;
//int sum(int**, int, int);
//int sum(int** x, int n, int m)
//{
//    int res = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            res += x[i][j];
//    return res;
//}
//
//int main()
//{
//    int i, j;
//    int** matr = new int* [5];
//    for (i = 0; i < 5; i++)
//        matr[i] = new int[4];
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            matr[i][j] = i + j;
//            cout << matr[i][j] << ' ';
//        }
//        cout << endl;
//    }
//    cout << "S=" << sum(matr, 5, 4) << endl;
//    for (int i = 0; i < 5; i++)
//        delete matr[i];
//    delete[] matr;
//}

//#include <iostream>
//int* pfmin(int* p, int n);
//void main()
//{
//	int masB[5] = { 4, 8, 2, 6, 4 };
//	(*pfmin(masB, 5))++;
//	for (int i = 0; i < 5; i++)
//		std::cout << masB[i] << ' ';
//}
//int* pfmin(int* p, int n)
//{
//	int* pmin;
//	for (pmin = p; n > 0; p++, n--)
//		if (*p < *pmin)
//			pmin = p;
//	return pmin;
//}

//#include <iostream>
//using namespace std;
//
//double& dmin(double A[], int size);
//
//void main()
//{
//	double s;
//	const int size = 5;
//	double A[] = { 5, 4.1, 3, 0.2, 11 };
//	s = dmin(A, size);
//	cout << s << endl;
//	for (int i = 0; i < size; i++)
//		cout << " " << A[i];
//	cout << endl;
//	dmin(A, size) = 1.0;       // изменение минимума на значение 1.0 
//	for (int i = 0; i < size; i++)
//		cout << " " << A[i];
//}
//
//double& dmin(double A[], int size)
//{
//	int i, j = 0;
//	for (i = 1; i < size; i++)
//		if (A[j] > A[i])
//			j = i;
//	return A[j];
//}

#include <iostream>
using namespace std;
bool is_elem(int* pA, int n, int iV);

void main()
{
	setlocale(LC_CTYPE, "Rus");
	bool t; int k;
	int A[] = { 5, 4, 3, 2, 11 };
	cout << "Введите число ";
	cin >> k;
	t = is_elem(A, sizeof(A) / sizeof(int), k);
	if (t == true)
		cout << "Число есть в массиве ";
	else
		cout << "Числа нет в массиве ";
}

bool is_elem(int* pA, int n, int iV)
{
	bool bf = false;
	for (int i = 0; i < n; i++)
		if (pA[i] == iV)
		{
			bf = true;
			break;
		}
	return bf;
}
