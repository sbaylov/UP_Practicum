#include <iostream>
#include <conio.h>

int main()
{
	int key;
	do {

		//Задача 1: Да се напише програма, която приема поток от числа.Числата се събират, докато не срещне числото 0.
		//Тогава трябва да се отпечата акумулираният резултат и програмата да приключи.
		//std::cout << "------ TASK 1 ------\n";
		//std::cout << "Enter numbers (0 to stop): ";
		//int sum = 0;
		//int number;

		//do {
		//	std::cin >> number;
		//	sum += number;
		//} while (number != 0);

		//std::cout << "Sum: " << sum << "\n";


		//Задача 2 : Да се напише програма, която приема цяло положително число, обръща го и го увеличава с 1.
		//Вход : 123; Изход: 322
		//Вход : 24689; Изход:98643

		//std::cout << "\n------ TASK 2 ------\n";
		//std::cout << "Enter a positive integer: ";
		//int positiveNum;
		//std::cin >> positiveNum;

		//int reversed = 0;
		//int intDivisionResult = positiveNum;
		//
		//while (intDivisionResult > 0)
		//{
		//	reversed = reversed * 10 + intDivisionResult % 10;
		//	intDivisionResult = intDivisionResult / 10;

		//	std::cout << "    reversed: " << reversed << ", intDivisionResult: " << intDivisionResult << "\n";

		//}

		//std::cout << "Result: " << reversed + 1 << "\n";



		//Задача 3 : Напишете програма, която приема цяло число и връща най - често срещаната цифра.Ако има няколко най - често срещани, то да се отпечата най - малката.
		//Вход : 2881, Изход : 8
		//Вход : 456, Изход : 4
		//std::cout << "Enter an integer: ";
		//long num;
		//std::cin >> num;

		//int mostFrequentDigit = 0;
		//int maxCount = 0;

		//for (int digit = 0; digit <= 9; digit++)
		//{
		//	long tempNum = num;
		//	int count = 0;

		//	while (tempNum > 0)
		//	{
		//		if (tempNum % 10 == digit)
		//		{
		//			count++;
		//		}

		//		tempNum /= 10;
		//	}

		//	std::cout << "  digit: " << digit << " -> " << "repeats (count) : " << count; 

		//	if (count > maxCount)
		//	{
		//		maxCount = count;
		//		mostFrequentDigit = digit;
		//		std::cout << ", " << " -> we set mostFrequentDigit = digit = " << mostFrequentDigit << ", maxCount = count = " << maxCount;
		//	}
		//	std::cout << "\n";
		//}

		//std::cout << "RESULT: most frequent minimal digit (mostFrequentDigit) is " << mostFrequentDigit << " and it repeats (maxCount) " << maxCount << " times \n";


		//-----------------------------------------------------------------------------------------------------

		//Задача 4 : Напишете програма, която приема две естествени числа и връща най - големият им общ делител.
		//Вход : 16 24; Изход: 8

		// АЛГОРИТЪМ: 
		//  - Докато числата са различни:
		//  - ако a > b → a = a - b
		//  - иначе       b = b - a
		//  - Когато станат равни, това е НОД.
		//std::cout << "\n------ TASK 4 ------\n";
		//std::cout << "Enter two natural numbers: ";
		//unsigned int firstNumber;
		//unsigned int secondNumber;
		//std::cin >> firstNumber >> secondNumber;

		//int a = firstNumber;
		//int b = secondNumber;

		//while (a != b)
		//{
		//	if (a > b) {
		//		a = a -b;
		//	} else {
		//		b = b - a;
		//	}
		//}
		//std::cout << "Greatest common divisor is: " << a << "\n";



		//Задача 5 : Напишете програма, която приема две естествени числа и връща най - малкото им общо кратно.
		// АЛГОРИТЪМ: 
		//  Least-common-multiple(a, b) = (a * b) / greatest-common-divisor(a, b)

		//std::cout << "\n------ TASK 5 ------\n";
		//std::cout << "Enter two natural numbers: ";
		//int first;
		//int second;
		//std::cin >> first >> second;

		//int x = first;
		//int y = second;

		//while (x != y)
		//{
		//	if (x > y) {
		//		x = x - y;
		//	}
		//	else {
		//		y = y - x;
		//	}
		//}
		//int gcd = x;
		//int lcm = (first / gcd) * second;
		//std::cout << "Least common multiple is: " << lcm << "\n";



		//Задача 6 : Напишете програма, която приема естествено число и връща дали числото е просто.
		//Вход: 17; Изход: Prime
		//Вход : 25; Изход: not prime
		std::cout << "\n------ TASK 6 ------\n";
		std::cout << "Enter a natural number: ";
		int naturalNumber;
		std::cin >> naturalNumber;

		bool isPrime = naturalNumber >= 2;
		int divisor = 2;

		while (divisor * divisor <= naturalNumber && isPrime)
		{
			if (naturalNumber % divisor == 0)
			{
				isPrime = false;
			}
			divisor++;
		}

		if (isPrime)
		{
			std::cout << "Prime\n";
		}
		else
		{
			std::cout << "Not prime\n";
		}




		//---------------------------------------------------------------------------------------------------
		std::cout << "\n--------------------\n";
		std::cout << "Press Esc to exit, or any other key to continue: ";
		key = _getch();
		std::cout << "\n";
	} while (key != 27);





	//Задача 7 : Напишете програма, която приема естествено число и отпечатва разбиването му на прости множители, сортирани низходящо.

	//Вход : 50; Изход: 5 ^ 2 2 ^ 1


}