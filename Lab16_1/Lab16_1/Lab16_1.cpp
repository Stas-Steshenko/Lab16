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
    const int k = 10;

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
    for (int i = 0; i < r; ++i) {
        int min = 0;
        int max = 0;
        for (int j = 1; j < k; ++j) {
            if (matrix[i][j] < matrix[i][min]) {
                min = j;
            }
            if (matrix[i][j] > matrix[i][max]) {
                max = j;
            }
        }
        int temp = matrix[i][min];
        matrix[i][min] = matrix[i][max];
        matrix[i][max] = temp;
    }
    cout << "\nМатриця зі зміненими мінімальними та максимальними елементами у кожному рядку:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}