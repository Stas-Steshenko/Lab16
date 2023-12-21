#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введіть кількість рядків: ";
    int r;
    cin >> r;
    
    cout << "Введіть кількість стовпців: ";
    int k;
    cin >> k;

    int** matrix = new int* [r];
    for (int i = 0; i < r; ++i) {
        matrix[i] = new int[k];
    }

    int c = 1;

    for (int i = 0; i < r; ++i) {

        if (i % 2 == 0) {
            for (int j = 0; j < k; ++j) {
                matrix[i][j] = c++;
            }
        }
        else {
            for (int j = k - 1; j >= 0; --j) {
                matrix[i][j] = c++;
            }
        }
    }
    cout << "Матриця 'змійка':" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    delete[] matrix;
    return 0;
}