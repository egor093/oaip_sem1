//#include <stdio.h>
//#include <stdlib.h>
//
//#define OFFSET 5000  // Смещение для работы с отрицательными числами
//#define MAX_NUM (10000 + OFFSET)  // Максимальное возможное число с учетом смещения
//
//void processFile(const char* inputFile, const char* outputFile) {
//    FILE* input = fopen(inputFile, "r");
//    if (input == NULL) {
//        perror("Ошибка при открытии файла для чтения");
//        return;
//    }
//
//    // Массив для подсчета количества вхождений чисел
//    int count[MAX_NUM] = { 0 };  // Массив для подсчета чисел от -OFFSET до MAX_NUM-OFFSET
//
//    int num;
//    // Чтение чисел из файла и подсчет их вхождений
//    while (fscanf(input, "%d", &num) != EOF) {
//        // Проверяем, что число находится в допустимом диапазоне
//        if (num + OFFSET >= 0 && num + OFFSET < MAX_NUM) {
//            count[num + OFFSET]++;
//        }
//        else {
//            // Если число выходит за допустимый диапазон, выводим предупреждение
//            fprintf(stderr, "Предупреждение: число %d выходит за пределы диапазона.\n", num);
//        }
//    }
//
//    fclose(input);
//
//    // Открываем файл для записи результата
//    FILE* output = fopen(outputFile, "w");
//    if (output == NULL) {
//        perror("Ошибка при открытии файла для записи");
//        return;
//    }
//
//    // Запись чисел, которые встречаются более двух раз
//    for (int i = 0; i < MAX_NUM; i++) {
//        if (count[i] > 2) {
//            fprintf(output, "%d\n", i - OFFSET);  // Восстановление исходного числа
//        }
//    }
//
//    fclose(output);
//    printf("Результат записан в файл %s\n", outputFile);
//}
//
//int main() {
//    // Ввод и вывод файлов
//    const char* inputFile = "fileA.txt";
//    const char* outputFile = "fileB.txt";
//
//    processFile(inputFile, outputFile);
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 10000  // Максимальное значение числа, которое мы будем обрабатывать

// Функция для обработки файла и записи уникальных чисел в новый файл
void processFile(const char* inputFile, const char* outputFile) {
    FILE* input = fopen(inputFile, "r");
    if (input == NULL) {
        perror("Ошибка при открытии файла для чтения");
        return;
    }

    // Массив для проверки, встречалось ли число
    int seen[MAX_NUM] = { 0 };  // Массив для отслеживания чисел (0 - не встречалось, 1 - встречалось)

    FILE* output = fopen(outputFile, "w");
    if (output == NULL) {
        perror("Ошибка при открытии файла для записи");
        fclose(input);
        return;
    }

    int num;
    // Чтение чисел из файла и запись уникальных чисел в новый файл
    while (fscanf(input, "%d", &num) != EOF) {
        // Проверка, встречалось ли это число ранее
        if (num >= 0 && num < MAX_NUM && !seen[num]) {
            seen[num] = 1;  // Отмечаем число как встреченное
            fprintf(output, "%d\n", num);  // Записываем уникальное число в файл
        }
    }

    fclose(input);
    fclose(output);
    printf("Уникальные числа записаны в файл %s\n", outputFile);
}

int main() {
    // Ввод и вывод файлов
    const char* inputFile = "f.txt";
    const char* outputFile = "g.txt";

    processFile(inputFile, outputFile);

    return 0;
}
