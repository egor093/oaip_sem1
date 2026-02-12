//#include <iostream>
//#include <fstream>
//#include <unordered_map>
//#include <vector>
//
//using namespace std;
//void processFile(const string& inputFile, const string& outputFile) {
//    setlocale(LC_ALL, "rus");
//    ifstream input(inputFile);
//    if (!input) {
//        cerr << "Ошибка при открытии файла для чтения: " << inputFile << endl;
//        return;
//    }
//    unordered_map<int, int> countMap;
//    int number;
//    while (input >> number) {
//        countMap[number]++;
//    }
//    input.close();
//    ofstream output(outputFile);
//    if (!output) {
//        cerr << "Ошибка при открытии файла для записи: " << outputFile << endl;
//        return;
//    }
//    for (const auto& entry : countMap) {
//        if (entry.second > 2) {
//            output << entry.first << endl;
//        }
//    }
//    output.close();
//    cout << "Результат записан в файл: " << outputFile << endl;
//}
//int main() {
//    const string inputFile = "fileA.txt";
//    const string outputFile = "fileB.txt";
//    processFile(inputFile, outputFile);
//    return 0;
//}
#include <iostream>
#include <fstream>
#include <unordered_set>

using namespace std;
void processFile(const string& inputFile, const string& outputFile) {
    setlocale(LC_ALL, "rus");
    ifstream input(inputFile);
    if (!input) {
        cerr << "Ошибка при открытии файла для чтения: " << inputFile << endl;
        return;
    }
    unordered_set<int> uniqueNumbers;  
    int number;
    while (input >> number) {
        uniqueNumbers.insert(number);
    }
    input.close();
    ofstream output(outputFile);
    if (!output) {
        cerr << "Ошибка при открытии файла для записи: " << outputFile << endl;
        return;
    }
    for (const auto& num : uniqueNumbers) {
        output << num << endl;
    }
    output.close();
    cout << "Уникальные числа записаны в файл: " << outputFile << endl;
}
int main() {
    const string inputFile = "f.txt";
    const string outputFile = "g.txt";
    processFile(inputFile, outputFile);
    return 0;
}
