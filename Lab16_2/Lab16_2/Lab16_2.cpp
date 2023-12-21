#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));

    const int r = 5;
    const int k = 5;

    int matrix[r][k];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            matrix[i][j] = rand() % 100;
        }
    }
    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    cout << "Масив з найбільших значень елементів рядків матриці: " << endl;
    for (int i = 0; i < r; ++i) {
        int max = 0;
        for (int j = 1; j < k; ++j) {
            if (matrix[i][j] > matrix[i][max]) {
                max = j;
            }
        }
        cout << matrix[i][max] << '\t';
    }
    return 0;
}