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
            matrix[i][j] = rand() % 21 - 10;
        }
    }
    cout << "Матриця:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    int f = 0;
    for (int i = 0; i < r; ++i) {
        bool n = false;

        for (int j = 0; j < k; ++j) {
            if (matrix[i][j] <= 0) {
                n = true;
                break;
            }
        }

        if (n == false) {
            f = i + 1;
            break;
        }
    }
    if (f > 0) {
        cout << "Перший рядок із тільки додатними елементами: " << f << endl;
    }
    else {
        cout << "Немає рядків із тільки додатними елементами" << endl;
    }
    return 0;
}