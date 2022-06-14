#include <iostream>
#include<cassert>
#include<math.h>
using namespace std;
void sum()
{
    setlocale(LC_ALL, "rus");
    int k, n = 0;
    cout << "Введите размерность: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 41 - 20;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            k += a[i];
        }
    }
    cout << "Сумма отрицательных чисел: " << k;
}
int main()
{
    sum();
    return 0;
}
