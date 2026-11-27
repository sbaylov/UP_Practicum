#include <iostream>
using std::cout;
using std::cin;

int const COLS3 = 3;
int const COLS4 = 4;

void write3colMatrix(int matrix[][COLS3], int rows) {
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

bool is3colMatrixTriangular(int matrix[][COLS3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS3; j++) {
			if (j < i && matrix[i][j] != 0) {
				return false; // Not triangular
			}
		}
	}
	return true;
}

int productOfElementsOutside2ndDiagonal(int matrix[][COLS3], int rows, int s) {
	int product = 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS3; j++) {
			if (j != rows - i - 1) {
				product *= matrix[i][j];
			}
		}
	}
	return product;
}

// функция която проверява дали число е просто
bool isPrime(int num) {
	if (num <= 1) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

bool isPrimeInUpperTriangle(int matrix[][COLS3], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = i + 1; j < COLS3; j++) {
			if (i < j && isPrime(matrix[i][j])) {
				return true;
			}
		}
	}
	return false;
}

bool isMagicSquare(int matrix[][COLS3], int rows) {
	int magicSum = 0;
	for (int j = 0; j < COLS3; j++) {
		magicSum += matrix[0][j];
	}
	// Check rows
	for (int i = 1; i < rows; i++) {
		int rowSum = 0;
		for (int j = 0; j < COLS3; j++) {
			rowSum += matrix[i][j];
		}
		if (rowSum != magicSum) return false;
	}
	// Check columns
	for (int j = 0; j < COLS3; j++) {
		int colSum = 0;
		for (int i = 0; i < rows; i++) {
			colSum += matrix[i][j];
		}
		if (colSum != magicSum) return false;
	}
	// Check main diagonal
	int diagSum1 = 0;
	for (int i = 0; i < rows; i++) {
		diagSum1 += matrix[i][i];
	}
	if (diagSum1 != magicSum) return false;
	// Check secondary diagonal
	int diagSum2 = 0;
	for (int i = 0; i < rows; i++) {
		diagSum2 += matrix[i][rows - 1 - i];
	}
	if (diagSum2 != magicSum) return false;
	return true;
}

int const MAX_SIZE = 100;

void readMaxMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
}
void printMaxMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
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
	//int matrix6[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix6, 3);
	//writet3colMatrix(matrix6, 3);

	//if (is3colMatrixSymmetric(matrix6, 3)) {
	//	cout << "true - the matrix is symmetric\n";
	//} else {
	//	cout << "false - the matrix is not symmetric\n";
	//}


	// --------------------------------------------------------------------------------
	// Задача 7 - Да се напише програма, която проверява дали квадратна матрица от
	//int matrix7[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix7, 3);
	//writet3colMatrix(matrix7, 3);

	//if (is3colMatrixTriangular(matrix7, 3)) {
	//	cout << "true - the matrix is triangular\n";
	//}
	//else {
	//	cout << "false - the matrix is not triangular\n";
	//}


	// --------------------------------------------------------------------------------
	// Задача 8 - Дадена е квадратна реална матрица А с размерност КxК.Да се състави програма, 
	// която намира произведението от елементите извън вторичния главен диагонал.
	//int matrix8[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix8, 3);
	//writet3colMatrix(matrix8, 3);

	//cout << "The product of elements outside the secondary diagonal is: "
	//	 << productOfElementsOutside2ndDiagonal(matrix8, 3, 3) << "\n";


	// --------------------------------------------------------------------------------
	// Задача 9 - Да се напише програма, която проверява дали в частта над главния диагонал 
	// на квадратна матрица от естествени числа съществува просто число.
	//int matrix9[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix9, 3);
	//writet3colMatrix(matrix9, 3);

	//if (isPrimeInUpperTriangle(matrix9, 3)) {
	//	cout << "true - there is a prime number in the upper triangle\n";
	//} else {
	//	cout << "false - there is no prime number in the upper triangle\n";
	//}


	// --------------------------------------------------------------------------------
	// Задача 10 - Една квадратна матрица от числа се нарича магически квадрат, когато всички суми, 
	// получени поотделно от сбора на елементите по всеки ред / всеки стълб / всеки от двата диагонала са равни.
	//int matrix10[3][COLS3];
	//cout << "Enter elements for a 3x3 matrix:\n";
	//read3colMatrix(matrix10, 3);
	//writet3colMatrix(matrix10, 3);

	//if (isMagicSquare(matrix10, 3)) {
	//	cout << "true - the matrix is a magic square\n";
	//}
	//else {
	//	cout << "false - the matrix is not a magic square\n";
	//}

	// --------------------------------------------------------------------------------
	//int matrix10[3][COLS3] = { 
	//	{ 8, 1, 6 },
	//	{ 3, 5, 7 },
	//	{ 4, 9, 2 } };
	//int matrix11[4][COLS3] = { 
	//	{ 1, 2, 3 },
	//	{ 4, 5, 6 },
	//	{ 7, 8, 9 },
	//	{ 1, 4, 7 } };
	//cout << "Matrix10(3x3): \n";
	//write3colMatrix(matrix10, 3);
	//cout << "Matrix11(4x3): \n";
	//write3colMatrix(matrix11, 4);

	// --------------------------------------------------------------------------------
	int size;
	cout << "Enter the size of the square matrix: ";
	cin >> size;
	int max_matrix[MAX_SIZE][MAX_SIZE];
	readMaxMatrix(max_matrix, size, size);

	printMaxMatrix(max_matrix, size, size);

}
