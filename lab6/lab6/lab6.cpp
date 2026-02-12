//task1
//#include <iostream>
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	float z, y, x, sd;
//	sd = 1.0 / 3.0;
//	for (int n = 0; n < 4; n++)
//	{
//		printf("Введите x ");
//		scanf_s("%f", &x);
//		z = 2 * pow(x, 2);
//		y = z + pow(x, sd);
//		printf("x = %5.2f\t", x);
//		printf("y = %5.2f\n", y);
//	}
//}

//task2
//#include <iostream>
//using namespace std;
//void main()
//{
//	float z, y, x = 3;
//	while (x < 4.1)
//	{
//		z = 2 * pow(x, 2);
//		y = z + pow(x, (float)1 / 3);
//		cout << "x=" << x << "\t";
//		cout << " y=" << y << endl;
//		x = x + 0.1;
//	}
//}

//task3
//#include <stdio.h>
//#include <cmath>
//
//void main()
//{
//	float z, y, x = 3;
//	do
//	{
//		z = 2 * pow(x, 2);
//		y = z + pow(x, (float)1 / 3);
//		printf("x=%5.2f\t", x);
//		printf("y=%5.2f\n", y);
//		x = x + 0.1;
//	} while (x < 4.1);
//}

//task4
//#include <stdio.h>
//void main()
//{
//	int n, i, j;
//	printf("Enter n: ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//			printf("%5d", i * j);
//		printf("\n");
//	}
//}

//task5
// 1
//#include <iostream> 
//#include <iomanip>
//#include <Windows.h>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	double a = 8, m = 6, b = 5e+3, d, c, k;
//	for (int j = 0; j < 3; j++) {
//		cout << "Введите значение k: " << endl;
//		cin >> k;
//		d = sin(k / a) / cos(m * b);
//		c = d / (d * d + 1) / (1 - exp(k));
//		cout << "Значение d: " << d << endl;
//		cout << "Значение c: " << c << endl;
//	}
//}

//2
//#include <iostream> 
//#include <iomanip>
//#include <Windows.h>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	double a = 8, m = 6, b = 5e+3, d, c, k = a;
//	do {
//		d = sin(k / a) / cos(m * b);
//		c = d / (d * d + 1) / (1 - exp(k));
//		cout << "Значение d: " << d << " ";
//		cout << "Значение c: " << c << endl;
//		k += -0.5;
//	} while (k > 3);
//}

//3
//#include <iostream> 
//#include <iomanip>
//#include <Windows.h>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	double a = 8, m = 6, b = 5e+3, d, c, k, i = 2;
//	do {
//		for (int j = 0; j < 3; j++) {
//			cout << "Введите k: " << endl;
//			cin >> k;
//			d = sin(k / a) / cos(m * b);
//			c = d / (d * d + 1) / (1 - exp(k));
//		cout << "Значение d: " << d << endl;
//		cout << "Значение c: " << c << endl;
//		}
//		i += 0.2;
//	} while (i < 2.8);
//}


//task6
//1
//#include <iostream>
//using namespace std;
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	float p,q,x = 0;
//	cout << "Введите начальную выручку ";
//	cin >> p;
//	cout << "Введите конечную выручку ";
//	cin >> q;
//	do
//	{
//		 p = p + p * 0.03;
//		 x += 1;
//	} 
//	while (p < q);
//	cout << "Количество дней: " << x;
//}

//2
//#include <iostream> 
//#include <iomanip>
//#include <Windows.h>
//#include <stdio.h>
//#include <conio.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	double a, b = 0;
//	bool t;
//	cin >> a;
//	if (a > 0) t = false;
//	else t = true;
//	while (a != 0) { 
//		cin >> a;
//		if (a == 0) break;
//		else {
//			if (a > 0 and t == true) {
//				t = false;
//				b += 1;
//			}
//			else if (a < 0 and t == false) {
//				t = true;
//				b += 1;
//			}
//		}
//	}
//	 cout << "Количество раз изменений знака: " << b; 
//	return 0;
//}

//3
//#include <iostream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int i = 0, a = 0, k;
//    cout << "Введите число: ";
//    cin >> k;
//    while (k > 0)
//    {
//        if (k % 10 != 3 && k % 10 != 6)
//        {
//            a *= 10;
//            a += k % 10;
//        }
//        k /= 10;
//    }
//    cout << "Полученное число: ";
//    while (a > 0)
//    {
//        cout << a % 10;
//        a /= 10;
//    }
//    cout << endl;
//    return 0;
//}
