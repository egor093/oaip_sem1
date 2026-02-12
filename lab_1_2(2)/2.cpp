#include <iostream>
#include <windows.h>
#include <cstdarg>

using namespace std;

int*** Arrays(int n,int* rows,int* cols) 
{

    int*** arrays = new int** [n];
   
    for (int i = 0; i < n; i++) 
    {
        cout << "Введите количество строк для массива " << i + 1 << ": ";
        cin >> rows[i];
        cout << "Введите количество столбцов для массива " << i + 1 << ": ";
        cin >> cols[i];

        arrays[i] = new int* [rows[i]];

        for (int j = 0; j < rows[i]; j++)

        {
            arrays[i][j] = new int[cols[i]];

        }

        cout << "Введите элементы для массива " << i + 1 << ":" << endl;

        for (int j = 0; j < rows[i]; j++) 
        {

            for (int k = 0; k < cols[i]; k++)
            {
                cout << "Элемент [" << j << "][" << k << "]: ";
                cin >> arrays[i][j][k];

            }

        }

        cout << "Массив " << i + 1 << ":" << endl;

        for (int j = 0; j < rows[i]; j++)
        {

            for (int k = 0; k < cols[i]; k++) 
            {
                cout << arrays[i][j][k] << " ";
            }

            cout << endl;

        }

    }

    return arrays;
}

int minimalValue(int*** arrays,int* rows,int* cols,int n)
{
    int minValue;
    for (size_t i = 0; i < n; i++)
    {
         minValue = arrays[i][0][0];
        
        for (int j = 0; j < cols[i]; j++)
            for (int g = 0; g < rows[i]; g++)
            {
                if (minValue > arrays[i][j][g])
                {
                    minValue = arrays[i][j][g];
                }
            }

        cout << "Минимальный элемент для массива, под номером " << i + 1 << " это: " << minValue << endl;
       
    }

    return minValue;

}

int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int n, idk;
    
    cout << "Введите количество двумерных массивов: ";
    cin >> n;
    cout << "Введите максимально возможное количество строк и столбцов матрицы , которые вам нужны: ";
    cin >> idk;
    int* rows = new int[idk];
    int* cols = new int[idk];

    int*** arrays = Arrays(n,rows,cols);
    minimalValue(arrays, rows, cols, n);

    return 0;
}
