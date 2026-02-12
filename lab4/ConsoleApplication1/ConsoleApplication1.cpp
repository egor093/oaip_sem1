#include <iostream>
#include <iomanip> 
#include <stdio.h> 
#include <conio.h> 

void main()
{
	setlocale(LC_CTYPE, "Russian");
    using namespace std;
	int t;
	float q;
	char w;
	double e;

	cout << "Введите t=";
	cin >> t;
    cout << "t=" << t << endl;
	cout << "Тип Размер в байтах" << endl;
    cout << "int: " << sizeof(int) << endl;

	cout << "Введите w=";
	cin >> w;
	cout << "w=" << w << endl;
	cout << "Тип Размер в байтах" << endl;
    cout << "char: " << sizeof(char) << endl;

	cout << "Введите q=";
	cin >> q;
	cout << "q=" << q << endl;
	cout << "Тип Размер в байтах" << endl;
   cout << "float: " << sizeof(float) << endl;

	cout << "Введите e=";
	cin >> e;
	cout << "e=" << e << endl;
	cout << "Тип Размер в байтах" << endl;
	cout << "double: " << sizeof(double) << endl;
}

//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	char c,x, probel; probel = ' ';
//	cout << "Введите первый символ: "; cin >> c;
//	cout << "Введите второй символ: "; cin >> x;
//	cout << setw(35) << setfill(probel) << probel;
//	cout << setw(10) << setfill(c) << c << endl;
//	cout << setw(34) << setfill(probel) << probel;
//	cout << setw(12) << setfill(c) << c << endl;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(14) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(16) << setfill(x) << x << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(18) << setfill(x) << x << endl;
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(20) << setfill(x) << x << endl;
//}

//#include <windows.h>
//void main()
//{ 
//	setlocale(LC_CTYPE, "Russian");
//	printf("\n\t Сибильков Егор Дмитриевич ФИТ-9\n");
//	printf("\n... Press key");
//_getch();
//}


//void main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	char name[60],work[60],activ[60];
//	puts("Как вас зовут? ");
//	gets_s(name);
//	printf("Привет, %s \n", name);
//	puts("Чем занимаетесь?");
//	gets_s(work);
//	printf("%s это хорошее занятие \n", work);
//	puts("Что интересного произошло за день?");
//	gets_s(activ);
//	printf("Удивительно вы %s", activ);
//}

//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	char c, probel; probel = ' ';
//	cout << "Введите символ "; cin >> c;
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << probel;
//	cout << setw(3) << setfill(c) << c << probel << endl;
//	cout << setw(29) << setfill(probel) << probel;
//	cout << setw(9) << setfill(c) << c << endl;
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(7) << setfill(c) << c << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(5) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//}

//#include <windows.h>
//#include <iostream>
//#include <iomanip> 
//#include <stdio.h> 
//#include <conio.h> 

//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	char c, probel; probel = ' ';
//	cout << "Введите символ "; cin >> c;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(5) << setfill(c) << c << endl;
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(7) << setfill(c) << c << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(5) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//}

//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	char c, probel; probel = ' ';
//	cout << "Введите символ "; cin >> c;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(2) << setfill(c) << c << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(4) << setfill(c) << c << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(2) << setfill(c) << c << endl;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//}

//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	char c, probel; probel = ' ';
//	cout << "Введите символ "; cin >> c;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(5) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//}

