//#include <iostream> 
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	double a = 2, b = 7, h, x1, y1, x2, y2, s = 0;
//	h = (b - a) / 200; // находим высоту маленьких трапеций
//	//Находим х1 и у1
//	x1 = a;
//	y1 = pow(sin(x1), 2) + 1;
//	//Перебираем все возможные значения х и нахадим сумму трапеций
//	while (x1 <= b - h) {
//		x2 = x1 + h;
//		y2 = pow(sin(x2), 2)+1;
//		s += h * (y1 + y2) / 2; // суммируем площади маленьких трапеций
//		x1 = x2;
//		y1 = y2;
//	}
//	cout << "Площадь трапеции = " << s;
//}

//#include <iostream> 
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	double s = 0, x1, y1, h, a = 2, b = 7, s1 = 0, s2 = 0, i = 1;
//	h = (b - a) / (200 * 2); // находим высоту маленьких трапеций
//	x1 = a + 2 * h; //находим х1
//	//Перебираем числа 
//	while (i < 200) {
//		y1 = pow(sin(x1), 2) + 1;
//		s2 += y1;
//		x1 += h;
//		y1 = pow(sin(x1), 2) + 1;
//		s1 += y1;
//		x1 += h;
//		i += 1;
//	}
//	//Считаем площадь исрользуя метод парабол
//	s = (h / 3) * (pow(sin(a), 2) + 1) + 4 * (pow(sin(a+h), 2) + 1) + 4 * s1 + 2 * s2 + (pow(sin(b), 2) + 1);
//	cout << "Площадь трапеции равна " << s << endl;
//}

#include <iostream> 
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double a=2, b=7, e = 0.0001, x, y1, y2;
	//Перебираем числа пока модуль из a и b больше чем 2*е
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		y1 = sin(x)+2+x; // значение функции от x
		y2 = sin(a) + 2 + a; // значение функции от a
		//Сравниваем занчение с нулём, чтобы понять, что является корнем
		if (y1 * y2 <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << x; 
}
