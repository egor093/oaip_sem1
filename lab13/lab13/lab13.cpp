//
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cstring>
using namespace std;
//
//void remove_even_words(char *str) 
//{
//    char result[256] = ""; // Строка для результата
//    char temp[256];        // Временная строка для слова
//    int word_num = 1;      // Номер текущего слова
//    int j = 0;             // Индекс для записи слова
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (!isspace(str[i])) 
//        {
//            temp[j++] = str[i]; // Копируем символы в слово
//        }
//        else if (j > 0)
// {
//            temp[j] = '\0';     // Завершаем слово
//            if (word_num % 2 != 0)
//            { // Проверяем номер слова
//                strcat_s(result, temp);
//                strcat_s(result, " ");
//            }
//            word_num++;         // Увеличиваем номер слова
//            j = 0;              // Сбрасываем индекс для нового слова
//        }
//    }
//    if (j > 0)
//    { // Для последнего слова
//        temp[j] = '\0';
//        if (word_num % 2 != 0) 
//        {
//            strcat_s(result, temp);
//        }
//    }
//    strcpy(str, result); // Копируем результат обратно в исходную строку
//}
//int main()
//{
//    char str[256];
//    printf("Enter the string: ");
//    fgets(str, sizeof(str), stdin); // Ввод строки
//    str[strcspn(str, "\n")] = '\0'; // Удаляем символ новой строки
//    remove_even_words(str);
//    printf("Modified string: %s\n", str);
//    return 0;
//}

//void main()
//{
//	char t[3][20];
//	int i, n;
//	cout << "Input size (<=3): ";
//	cin >> n;
//	/*cin.ignore(cin.rdbuf()->in_avail());*/
//	for (i = 0; i < n; i++)
//	{
//		cout << "Input string: ";
//		gets_s(t[i]);
//	}
//	for (i = 0; i < n; i++)
//		puts(t[i]);
//}
