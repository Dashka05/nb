#include<iostream>
#include<cmath>
#include<cassert>
using namespace std;

void sumdiag() {
	setlocale(LC_ALL, "rus");
	int n, k;
	cout << "Введите размер: ";
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n; i++) {
			a[i][j] = rand() % 41 - 20;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; i < n; i++) {
			k += a[i][j];
		}
	}
	cout << "Сумма элементов: " << k;
}
int main() {
	sumdiag();
	return 0;
}
