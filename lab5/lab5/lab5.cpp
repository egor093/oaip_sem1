//#include <iostream>

//1 task
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	double b, z, x = 4.e-3, s = 1.1, j;
//	cout << "Введите j ";
//	cin >> j;
//	b = s + (5 * x + j);
//	if (b < 1.5)
//		z = sqrt(x + 0.3 * j) + b;
//	else
//		z = abs(x * j + b);
//	cout << "j=" << j << "  z=" << z << endl;
//}

//2task
//#include <iostream>
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	float x, y, z, mn, mx;
//	printf("Введите x "); scanf_s("%f", &x);
//	printf("Введите y "); scanf_s("%f", &y);
//	printf("Введите z "); scanf_s("%f", &z);
//	if ((x + y + z) < (x * y * z))
//		mx = (x * y * z);
//	else
//		mx = (x + y + z);
//	mn = x;
//	if (mn > y) mn = y;
//	if (mn > z) mn = z;
//	printf("max(x + y + z, xyz) * min(x, y, z) = %f \n", mn * mx);
//}
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	float x, y, z, mn, mx;
//	cout << "Введите x "; 
//	cin >> x;
//	cout << "Введите y ";
//	cin >> y;
//	cout << "Введите z ";
//	cin >> z;
//	if ((x + y + z) < (x * y * z))
//		mx = (x * y * z);
//	else
//		mx = (x + y + z);
//	mn = x;
//	if (mn > y) mn = y;
//	if (mn > z) mn = z;
//	cout << "max(x + y + z, xyz) * min(x, y, z) = " << mn * mx;
//}

//task3
//#include <iostream> 
//int main()
//{
//setlocale(LC_CTYPE, "Russian");
//int k;
//puts("Вы хотите купить автомобиль? (1-да, 2-нет)");
//std::cin >> k; 
//switch (k)
//{
//case 1: { puts("Какой? (1- Майбах, 2-Тойота, 3-Лада)"); 
//		std::cin >> k; 
//		switch (k)
//		{
//case 1: puts("Не слишком дорого?"); break;
//case 2: puts("Хороший выбор"); break;
//case 3: puts("Сомнительный выбор"); break;
//}
//break;
//}
//case 2: puts("Полезно ходить пешком"); break;
//default: puts("Некорректный вариант"); break;
//}
//return 0;
//}

//task4
//#include <iostream>
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	double a, b, c, d, x1, x2;
//	cout << "Введите a: ";
//	cin >> a;
//	cout << "Введите b: ";
//	cin >> b;
//	cout << "Введите c: ";
//	cin >> c;
//	d = b * b - 4 * a * c;
//	if (d < 0)
//		cout << "Корней нет";
//	else {
//		cout << "x1 = " << (x1 = -b + sqrt(d)) / 2 * a << endl;
//		cout << "x2 = " << (x2 = -b - sqrt(d)) / 2 * a;
//	}
//}

//task5
//#include <iostream> 
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	int K;
//	cout << "Введите количество грибов: ";
//	cin >> K;
//	if (K == 1)
//		cout << "Мы нашли " << K << " гриб";
//	if (K == 0 || K > 4)
//		cout << "Мы нашли " << K << " грибов";
//	if (K > 1 && K < 5)
//		cout << "Мы нашли " << K << " гриба";
//}

//task6
//#include <iostream> 
//int main()
//{
//setlocale(LC_CTYPE, "Russian");
//int k;
//puts("Вы хотите есть? (1-да, 2-нет)");
//std::cin >> k; 
//switch (k)
//{
//case 1: { puts("Что сделать? (1- Сходить в ресторан, 2-Заказать доставку, 3-Приготовить самому)"); 
//		std::cin >> k; 
//		switch (k)
//		{
//case 1: puts("Дорого, но вкусно"); break;
//case 2: puts("Не нужно ничего делать, и оптимальная стоимость"); break;
//case 3: puts("Дешевле всего, но нужно уметь готовить"); break;
//}
//break;
//}
//case 2: puts("Отлично"); break;
//default: puts("Некорректный вариант"); break;
//}
//return 0;
//}

//task7

// 1
//#include <iostream> 
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//    using namespace std;
//	int a, b, c, sum = 0;
//	cout << "Введите 3 числа: ";
//	cin >> a >> b >> c;
//	(a % 5 == 0) ? sum = sum + a : sum = sum;
//	(b % 5 == 0) ? sum = sum + b : sum = sum;
//    (c % 5 == 0) ? sum = sum + c : sum = sum;
//	cout << "Сумма: " << sum;
//	return 0;
//}

//2
//#include <iostream> 
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//    using namespace std;
//	int n, k, m, num, letter;
//	cout << "Введите букву клетки слона: ";
//	cin >> k;
//	cout << "Введите букву и цифру клетки фигуры: ";
//	cin >> m >> n;
//	num = n - 1;
//	letter = n - k;
//	(k > 0 && k < 9) ? (m > 0 && m < 9) ? (n > 0 && n < 9) ? (num > 0 && letter > 0) ? (num == letter) ?
//	cout << "Слон может бить" : cout << "Слон может бить" : cout << "Error" : cout << "Error" : cout << "Error" : cout << "Error";
//	return 0;
//}

//3
#include <iostream> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double p,q,r,l,x;
	cout << "Вежите диагонали ромба: ";
	cin >> p >> q;
	cout << "Введите радиус шара: ";
	cin >> r;
	l = pow(p, 2) + pow(q, 2);
	x = (q * p) / (2 * sqrt(l));
	(x >= r) ? cout << "Шара пройдет" : cout << "Шар не пройдет";
}