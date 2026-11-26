#include <iostream>
#include <string>
using std::cout;
using std::cin;

// UP PRACTICUM WEEK 6 - МАСИВИ

void bubbleSort(int arr[], int size);
void readArray(int arr[], int size);
void writeArray(int arr[], int size);
void sumArray(int arr1[], int arr2[], int res[], int size);
void prodArray(int arr1[], int arr2[], int res[], int size);
void copyArray(int source[], int dest[], int size);
void findElement(int arr[], int size, int index);
void findMinMaxInArray(int arr[], int size);
void compareArrays(int arr1[], int arr2[], int size); 
void concat(int arr1[], int arr2[], int res[], int size); 
void remove(int arr[], int size, int target);
void removeChar(char arr[], int size, char target);
double average(double arr[], int size); 
int aboveAverageCount(double arr[], int size); 
int findFreeSpace(int arr[], int size, int required);
int countFreeSpaces(int arr[], int size);
bool park(int arr[], int size, int space); 
bool exit(int arr[], int size, int space); 

int main() {
	// ТЕОРИЯ
	
	// деклариране на масив от 4 цели числа
	//int arr5[4];

	//// 5. sizeof() функция - ни връща размера на типа данни и съответно при масивите ни връща дължината на масива * sizeof(типа на масива)
	//cout << "Array size in bytes: " << sizeof(arr5) << "\n"; // -> 16 bytes = 4 * 4 bytes (int)
	//cout << "Array size in ints: " << sizeof(arr5) / sizeof(int) << "\n"; // -> 4 ints

	// 6. Четене на масив от конзолата + bonus сортиране на масива чрез bubble sort
	//cout << "Enter 4 integers: ";
	//int arr6[4];
	//for (int i = 0; i < 4; i++) {
	//	cin >> arr6[i];
	//}

	//// Подаване на масиви като параметър на функция
	//bubbleSort(arr6, 4);

	//// обхождане на масив
	//for (int i = 0; i < 4; i++) {
	//	cout << arr6[i] << " ";
	//}

	// -------------------------------------------------------------------------------
	// Задача 1. Имате два масива с дължна 10. Напишете следните три функции
	// - void readArray(int arr[], int size), който прочита масива от конозолата
	// - void sumArray(int arr1[], int arr2[], int res[]), сумиращ масивите по индекси
	// - void prodArray(int arr1[], int arr2[], int res[]), смятащ произведението на масивите по индекси
	//cout << "TASK 1: \n";
	//int arr11[3], arr12[3], sumRes[3], prodRes[3];
	//cout << "Enter 3 integers for the array 1: ";
	//readArray(arr11, 3);
	//cout << "Enter 3 integers for the array 2: ";
	//readArray(arr12, 3);
	//sumArray(arr11, arr12, sumRes, 3);
	//prodArray(arr11, arr12, prodRes, 3);

	//cout << "Sum of arrays: ";
	//writeArray(sumRes, 3);
	//cout << "Product of arrays: ";
	//writeArray(prodRes, 3);


	// -------------------------------------------------------------------------------
	// Задача 2. Напишете функция void copyArray(int source[], int dest[]), която копира масив в друг масив
	//cout << "TASK 2: \n";
	//cout << "Enter 3 integers for the source array: ";
	//int source[3], dest[3];
	//readArray(source, 3);
	//copyArray(source, dest, 3);
	//cout << "Coppied array: ";
	//writeArray(dest, 3);


	// -------------------------------------------------------------------------------
	// Задача 3: Реализирайте функция, която намира подаден елемент от конзолата
	//cout << "TASK 3: \n";
	//int x, arr31[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//writeArray(arr31, 10);
	//cout << "Enter element to search: ";
	//cin >> x;
	//findElement(arr31, 10, x);

	// -------------------------------------------------------------------------------
	// Задача 4: Реализирайте функция, която намира минимален и максимален елемент в масив
	//cout << "TASK 4: \n";
	//int arr41[10];
	//cout << "Enter 10 integers for the array: ";
	//readArray(arr41, 10);
	//writeArray(arr41, 10);
	//findMinMaxInArray(arr41, 10);

	// -------------------------------------------------------------------------------
	// Задача 5: Реализирайте функция, която сравнява два масива
	//cout << "TASK 5: \n";
	//int arr51[5], arr52[5];
	//cout << "Enter Array 1 (size 5): ";
	//readArray(arr51, 5);
	//cout << "Enter Array 2 (size 5): ";
	//readArray(arr52, 5);
	//compareArrays(arr51, arr52, 5);

	// -------------------------------------------------------------------------------
	// Задача 6. Напишете фунцкия void concat(int arr1[], int arr2[], int res[]), 
	// която добавя в res всички елементи от array1 и след това всички елементи от array2
	//cout << "TASK 6: \n";
	//int arr61[3], arr62[3], res6[6];
	//cout << "Enter Array 1 (size 3): ";
	//readArray(arr61, 3);
	//cout << "Enter Array 2 (size 3): ";
	//readArray(arr62, 3);
	//concat(arr61, arr62, res6, 3);
	//writeArray(res6, 6);

	// -------------------------------------------------------------------------------
	// Задача 7. Напишете фунцкия, която приема масив и число, намира числото в масива и след това го премахва като запазва последователността на числата
	//int arr7[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//remove(arr7, 10, 3); // -> {1,2,4,5,6,7,8,9,10}

	// -------------------------------------------------------------------------------
	// 8. Напишете същата функция като в 7, но приемете, че вместо числа имаме букви 
	// и няма значение в масива дали е малка или голяма
	//char arr[7] = { 'a', 'B', 'c', 'D', 'E', 'f', 'g' };
	//removeChar(arr, 7, 'a'); // {'B', 'c', 'D', 'E', 'f', 'g', 'h'}
	//removeChar(arr, 6, 'd'); // {'B', 'c', 'E', 'f', 'g', 'h'}

	// -------------------------------------------------------------------------------
	// Задача 9. Реализирайте функция, която пресмята средния успех на даден клас. 
	// Класът се състои от 26 човека и техните оценки се четат от конзолата. 
	// Оценките са във формата x,xx (5,04). Да се напише и функция, която намира колко от 
	// студентите имат оценка по-висока от средната 
	//double arr9[6]; 
	//cout << "Enter 6 doubles for the array: ";
	//for (int i = 0; i < 6; i++) {
	//	cin >> arr9[i];
	//}
	//double avg = average(arr9, 6);
	//cout << "Average rate: " << avg << "\n";
	//int countAboveAvg = aboveAverageCount(arr9, 6);
	//cout << "Number of elements above average: " << countAboveAvg << "\n";

	// -------------------------------------------------------------------------------
	// Задача 10. Дадени са два сортирани масива с 10 елемента. Напишете функция, 
	// която създава трети масив, който съдържа всички елементи сортирани
	//int  arr101[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	//int  arr102[10] = { 2, 4, 5, 8, 10, 12, 14, 16, 18, 20 };
	//int  arr103[20];
	//int size = 10; 

	//writeArray(arr101, size);
	//writeArray(arr102, size);

	//concat(arr101, arr102, arr103, size); 
	//cout << "Concatenated array: ";
	//writeArray(arr103, 2 * size);

	//bubbleSort(arr103, 2 * size);
	//cout << "Sorted concatenated array: ";
	//writeArray(arr103, 2 * size);

	// 11. трябва да реализирате система за паркинг, която поддръжа следните фунцкции: Паркингът е една дълга улица със 
	// 100 места.Можете да представите паркоместатa като свободни или заети(помислете как ще го напишете като код)
	// - countFreeSpaces(arr, size), която връша броя свободни места
	// - findFreeSpace(arr, size, required), която ви връща първия индекс, от който има required брой свободни поредни места
	// - park(arr, size, space)
	// - exit(arr, size, space)
	int arr11[10] = {1, 0, 1, 0, 0, 1, 0, 0, 0, 1 };
	int size = 10;
	cout << "Parking places: ";
	writeArray(arr11, size);
	
	int count = countFreeSpaces(arr11, size);
	cout << "Number of free parking places: " << count << "\n";
	
	int required = 3;
	int foundAtIndex = findFreeSpace(arr11, size, required);
	cout << required << " Free parking places - ";
	if (foundAtIndex == 0) {
		cout << "not found\n";
	}
	else {
		cout << "found at index: " << foundAtIndex << "\n";
	}
	
	int tryAtPlace = 3;
	cout << "Trying to park at index " << tryAtPlace << ": ";
	park(arr11, size, tryAtPlace) ? cout << "Success\n" : cout << "Failed\n";

	cout << "Trying to exit at index " << tryAtPlace << ": ";
	exit(arr11, size, tryAtPlace) ? cout << "Success\n" : cout << "Failed\n";
	
}
// ----end: Main ---------------------------------------------------------------------------

bool park(int arr[], int size, int space) {
	if (space < 0 || space >= size) {
		return false;
	}
	if (arr[space] == 1) {
		return false; // Space is already occupied
	}
	else {
		arr[space] = 1; // Mark the space as occupied
		return true; 
	}
}

bool exit(int arr[], int size, int space) {
	if (space < 0 || space >= size) {
		return false;
	}
	if (arr[space] == 0) {
		return false; // Space is already free
	}
	else {
		arr[space] = 0; // Mark the space as free
		return true;
	}
}

int countFreeSpaces(int arr[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) {
			count++;
		}
	}	
	return count;
}

int findFreeSpace(int arr[], int size, int required) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) {
			count++;
			if (count == required) {
				return i - required + 1;
			}
		}
		else {
			count = 0; // reset the count if a taken place is found
		}
	}
	return 0;
}

void eliBubbleSort(int arr[], int size) {
	// to be done 
}

int aboveAverageCount(double arr[], int size) {
	int count = 0;
	double avg = average(arr, size);
	for (int i = 0; i < size; i++) {
		if (arr[i] > avg) {
			count++;
		}
	}
	return count;
}

double average(double arr[], int size) {
	double sum = 0, avg;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	avg = sum / size;
	return avg;
}

void removeChar(char arr[], int size, char target) {
	int index = -1;
	for (int i = 0; i < size; ++i) {
		if (tolower(arr[i]) == tolower(target)) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << "Element " << target << " not found\n";
		return;
	}
	for (int i = index; i < size - 1; ++i) {
		if (i >= index) {
			arr[i] = arr[i + 1];
		}
	}
	cout << "Array after removing " << target << ": ";
	for (int i = 0; i < size - 1; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void remove(int arr[], int size, int target) {
	int index = -1;
	for (int i = 0; i < size; ++i) {
		if (arr[i] == target) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << "Element " << target << " not found\n";
		return;
	}
	for (int i = index; i < size - 1; ++i) {
		if (i >= index) {
			arr[i] = arr[i + 1];
		}
	}
	cout << "Array after removing " << target << ": ";
	for (int i = 0; i < size - 1; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void concat(int arr1[], int arr2[], int res[], int size) {
	for (int i = 0; i < size; i++) {
		res[i] = arr1[i];
	}
	for (int i = 0; i < size; i++) {
		res[size + i] = arr2[i];
	}
}

void compareArrays(int arr1[], int arr2[], int size) {
	
	for (int i = 0; i < size; i++) {
		if (arr1[i] != arr2[i]) {
			cout << "Arrays are not equal\n";
			return;
		}
	}
	cout << "Arrays are equal\n";
}

void findMinMaxInArray(int arr[], int size) {
	int min = arr[0], max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Min: " << min << ", Max: " << max << "\n";
}

void findElement(int arr[], int size, int target) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] == target) {
			cout << "Element " << target << " found at index: " << i << "\n";
			return;
		}
	}
	cout << "Element " << target << " not found\n";
}

void writeArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void copyArray(int source[], int dest[], int size) {
	for (int i = 0; i < size; i++) {
		dest[i] = source[i];
	}
}


void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void readArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void sumArray(int arr1[], int arr2[], int res[], int size) {
	//int size = sizeof(arr1) / sizeof(int); // This will not work as expected because arr1 decays to a pointer when passed to the function.
	// You should pass the size as an additional parameter.
	for (int i = 0; i < size; i++) {
		res[i] = arr1[i] + arr2[i];
	}
}

void prodArray(int arr1[], int arr2[], int res[], int size) {
	for (int i = 0; i < size; i++) {
		res[i] = arr1[i] * arr2[i];
	}
}

