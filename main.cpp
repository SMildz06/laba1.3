// №1.3
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");

	//создали матрицу
	int matrix_array[3][3];
	cout << "Заполните 9 элементов массива матрицы: " << endl;
	//заполнили матрицу
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix_array[i][j];
		}
	}
	//нашли определитель и вывели
    int opred_mt = matrix_array[0][0] * matrix_array[1][1] * matrix_array[2][2] + matrix_array[2][0] * matrix_array[0][1]
		* matrix_array[1][2] + matrix_array[1][0] * matrix_array[2][1] * matrix_array[0][2] - matrix_array[2][0] 
		* matrix_array[1][1] * matrix_array[0][2] - matrix_array[0][0] * matrix_array[2][1] * matrix_array[1][2] 
		- matrix_array[1][0] * matrix_array[0][1] * matrix_array[2][2];

	cout << "Определитель матрицы: " << opred_mt; // вывод определителя матрицы



	return 0;
}