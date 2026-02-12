//#include <stdio.h>
//void main()
//{
//	float y, x = 0;
//	while (x < 7)
//	{
//		if (x < 4)
//			y = x;
//		else
//			if (x > 4)
//				y = x * x;
//			else
//				y = 1;
//		printf("x=%f\t", x);
//		printf("y=%5.2f\n", y);
//		x = x + 2;
//	}
//}

//task6
//#include <iostream>
//void main()
//{
//	using namespace std;
//	double t,x, b = 3, c = 6e-4, a = 6;
//	for (int i = 8; i <= 24; i = i + 4) {
//		t = a * i / (a * a - b) * exp(-a);
//		if (t > 5 * c) {
//			x = 4.8e-3 + i * a;
//			cout << "x = " << x << endl;
//		}
//		else {
//			x = a * i * i * t;
//			cout << "x = " << x << endl;
//		}
//	}
//	cout << "t = " << t << endl;
//}

//task7
//#include <iostream>
//void main()
//{
//	using namespace std;
//	int y = 1,x = 0;
//	do {
//		y = y + 1;
//		if (y % 3 == 0 && y % 5 == 0) {
//			x = x + 1;
//			cout << y << endl;
//	}
//	} while (x <= 6);
//}

//task8
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
//	bool t = false; 
//	for (int i = 10; i < 32; i++) 
//	{
//		t = false;
//		for (int j = 2; j <= sqrt(i); j++) { 
//			if (i % j == 0) { t = true; break; }
//		}
//		if (t == false) { 
//			int a, b, c;
//			a = i * i;
//			b = a % 10;
//			a = a / 10;
//			c = a % 10;
//			a = a / 10;
//			if (a < c and c < b) { cout << i * i << endl; }
//		}
//	}
//}


//3
//#include <iostream>
//void main()
//{
//	setlocale(LC_ALL, "Russian");
//	using namespace std;
//	float c1, c2;
//	cout << "Введите с1: ";
//	cin >> c1;
//	cout << "Введите с2: ";
//	cin >> c2;
//	for (int n = 0; n < 12; n++) {
//		if (n % 2 == 0) {
//		c1 = c1 / 2;
//		c2 = c2 + c1;
//		}
//		else
//		{
//			c2 = c2 / 2;
//			c1 = c1 + c2;
//		}
//	}
//	cout << "c1 = " << c1 << endl;
//	cout << "c2 = " << c2;
//}

//4
#include <iostream> 
#include <iomanip>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 2, j;
	while (i < 10)
	{
		for (j = 1; j < 10; j++)
		{
			if ((30 - i * 2) % j == 0 and (30 - i * 2) / j == 2) {
				int s; 
				s = i * 1000 + j * 100 + j * 10 + i;
				if (s % 2 == 0 and s % 7 == 0 and s % 11 == 0) {
					cout << s << endl;
				}
				s = j * 1000 + j * 100 + i * 10 + i;
				if (s % 2 == 0 and s % 7 == 0 and s % 11 == 0) {
					cout << s << endl;
				}
			}
		}
		i = i + 2;
	}
}
