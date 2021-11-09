/*В данной действительной квадратной матрице порядка n найти max по модулю
элемент. Получить квадратную матрицу порядка n-1 путем выбрасывания из
исходной какой-либо строки и столбца, на пересечении которых расположен элемент с
найденным значением.*/
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
void main() {
	srand(time(NULL));
	int n;
	cin >> n;
	int a[100][100];
	int row = 0;
	int col = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] =rand() % 20 - 10;
			if (abs(a[i][j]) > abs(a[row][col])) {
				row = i;
				col = j;
			}
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
	for (; row < n - 1; row++) {
		for (int j = 0; j < n; j++) {
			a[row][j] = a[row + 1][j];
		}
	}
	for (; col < n - 1; col++) {
		for (int i = 0; i < n; i++) {
			a[i][col] = a[i][col + 1];
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}