#include <iostream>
using std::cout;
using std::cin;

int const COLS3 = 3;
int const COLS4 = 4;

void writet3colMatrix(int matrix[][COLS3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void read3colMatrix(int matrix[][COLS3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS3; j++) {
			//std::cout << "Enter element [" << i << "][" << j << "]: ";
			std::cin >> matrix[i][j];
		}
	}
}

int findMinIn3colMatrix(int matrix[][COLS3], int rows) {
	int min = matrix[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS3; j++) {
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}
	}
	return min;
}

void printSumOfRowsIn3colMatrix(int matrix[][COLS3], int rows) {
	for (int i = 0; i < rows; i++) {
		int sum = 0;
		for (int j = 0; j < COLS3; j++) {
			sum += matrix[i][j];
		}
		std::cout << "Sum of row " << i << ": " << sum << "\n";
	}
}

bool findElementIn3colMatrix(int matrix[][COLS3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS3; j++) {
			if (matrix[i][j] == i * j ) {
				return true;
			}
		}
	}
	return false;
}

int sumOfElementsWithIndexSum(int matrix[][COLS3], int rows, int s) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS3; j++) {
			if (i + j == s) {
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}

void printMainAndSecondaryDiagonals(int matrix[][COLS3], int rows) {
	cout << "Main diagonal: ";
	for (int i = 0; i < rows; i++) {
		cout << matrix[i][i] << " ";
	}
	cout << "\nSecondary diagonal: ";
	for (int i = 0; i < rows; i++) {
		cout << matrix[i][rows - 1 - i] << " ";
	}
	cout << "\n";
}

bool is3colMatrixSymmetric(int matrix[][COLS3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS3; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}

int main() {

	//int matrix[2][COLS3] = { {1, 2, 3}, {4, 5, 6} };
	//print3Matrix(matrix, 2);
	
	// -------------------------------------------------------------------------------
	// Задача 1 - Да се напише функция, която приема матрица и връща стойността на най-малкия й елемент.
	//int matrix1[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix1, 3);	
	//cout << "The minimum element is: " << findMinIn3colMatrix(matrix1, 3);


	//-------------------------------------------------------------------------------
	// Задача 2 - Да се състави програма, която намира и извежда сумата от всеки ред на двумерен целочислен масив.
	//int matrix2[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix2, 3);	
	//printSumOfRowsIn3colMatrix(matrix2, 3);


	// --------------------------------------------------------------------------------
	// Задача 3 - Да се напише програма, която в дадена правоъгълна целочислена матрица проверява дали 
	// съществува ред, в който за някой елемент е изпълнено, че Аij = i * j.
	//int matrix3[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix3, 3);	
	//
	//if (findElementIn3colMatrix(matrix3, 3)) {
	//	cout << "true\n";
	//} else {
	//	cout << "false\n";
	//}


	// --------------------------------------------------------------------------------
	// Задача 4 - Дадена е квадратна матрица Х с размерност К x К и цяло число s. Да се състави програма, 
	// която намира сумата от онези елементи на матрицата Х, сборът от индексите на които е равен на s.
	//int matrix4[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix4, 3);

	//int s = 2;	
	//cout << "The sum of elements with index sum " << s << " is: " 
	//	 << sumOfElementsWithIndexSum(matrix4, 3, s) << "\n";


	// --------------------------------------------------------------------------------
	// Задача 5 - Да се напише функция, която приема квадратна матрица с n на n елемента отпечатва 
	// главния диагонал, след това и второстепенния.
	//int matrix5[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix5, 3);
	//writet3colMatrix(matrix5, 3);

	//printMainAndSecondaryDiagonals(matrix5, 3);


	// --------------------------------------------------------------------------------
	// Задача 6 Да се напише програма, която проверява дали квадратна матрица от 
	// естествени числа е симетрична относно главния й диагонал.
	int matrix6[3][COLS3];
	cout << "Enter elements for a 3x3 matrix:\n";
	read3colMatrix(matrix6, 3);
	writet3colMatrix(matrix6, 3);

	if (is3colMatrixSymmetric(matrix6, 3)) {
		cout << "The matrix is symmetric\n";
	} else {
		cout << "The matrix is not symmetric\n";
	}
}

