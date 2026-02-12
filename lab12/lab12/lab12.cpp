//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 10, * pa, b = 20, * pb;
//	pa = &a;
//	cout << &a << " " << a << endl;
//	cout << pa << " " << *pa << endl;
//	pb = &b;
//	cout << pb << " " << *pb << endl;
//	*pa = *pb;
//	cout << &a << " " << a << endl;
//}

//#include <iostream>
//void main()
//{
//	using namespace std;
//	float a, * pa, s = 0; int i;
//	pa = &a;
//	for (i = 1; i <= 4; i++)
//	{
//		cout << "a=";
//		cin >> a;
//		s += *pa;
//	}
//	cout << "s=" << s << endl;
//}

//#include <iostream>
//void main()
//{
//    int a = 99;
//    const int* pa = &a;
//    std::cout << pa << std::endl; // ошибка (нельзя менять содержимое переменной а)
//    int b = 44;
//    pa = &b; // ошибка (константный указатель на константу менять нельзя)
//    std::cout << pa;
//}

//#include <iostream>
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	int i, k, sz = 5;
//	float A[] = { 5, -4, 17.1, 9, 1 };
//	cout << "Введите номер элемента (от 0 до 4) " << endl;
//	cin >> k;
//	cout << endl;
//	for (i = k; i < sz - 1; i++)
//		*(A + i) = *(A + i + 1);
//	sz--;
//	for (i = 0; i < sz; i++)
//		cout << *(A + i) << endl;
//}

//#include <iostream>
//void main()
//{
//	int val = 1;
//	std::cout << "value = " << val;
//	int& rv = val;
//	rv = 5;
//	std::cout << " value = " << val;
//}

#include <iostream>
void main()
{
	int val = 1;
	std::cout << "value = " << val;
	int& rv = val;
	rv = 5;
	int* pval = &rv;
	std::cout << " value = " << *pval;
}

