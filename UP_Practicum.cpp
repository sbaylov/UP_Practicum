#include <iostream>
#include <conio.h>

int main()
{
	//int key;
	//do {

	//Задача 1: Да се напише програма, която приема поток от числа.Числата се събират, докато не срещне числото 0.
	//         Тогава трябва да се отпечата акумулираният резултат и програмата да приключи.
	//std::cout << "------ TASK 1 ------\n";
	//std::cout << "Enter digit stream (0 to stop): ";

	//int number;
	//int sum = 0;

	//std::cin >> number;

	//while (number != 0)
	//{
	//	sum += number;
	//	std::cin >> number;
	//}

	//std::cout << "Sum = " << sum << std::endl;

	


	//Задача 2 : Да се напише програма, която приема цяло положително число, обръща го и го увеличава с 1.
	//Вход : 123; Изход: 322
	//Вход : 24689; Изход:98643

	std::cout << "\n------ TASK 2 (reverse an integer and increment it by 1) ------\n";
	std::cout << "Enter a positive integer: ";
	int positiveNum;
	std::cin >> positiveNum;

	int reversed = 0;
	int intDivisionResult = positiveNum;
		
	while (intDivisionResult > 0)
	{
		reversed = reversed * 10 + intDivisionResult % 10;
		intDivisionResult = intDivisionResult / 10;

		std::cout << "    reversed: " << reversed << ", intDivisionResult: " << intDivisionResult << "\n";

	}

	std::cout << "Result: " << reversed + 1 << "\n";


	//-----------------------------------------------------------------------------------------------------
	// Задача 3 : Напишете програма, която приема цяло число и връща най-често срещаната цифра.Ако има няколко най-често срещани, то да се отпечата най-малката.
	// Вход : 2881, Изход : 8
	// Вход : 456, Изход : 4
	std::cout << "\n------ TASK 2 ( find most frequent minimal digit) ------\n";
	std::cout << "Enter an integer: ";
	long num;
	std::cin >> num;

	int mostFrequentDigit = 0;
	int maxCount = 0;

	for (int digit = 0; digit <= 9; digit++)
	{
		long tempNum = num;
		int count = 0;

		while (tempNum > 0)
		{
			if (tempNum % 10 == digit)
			{
				count++;
			}

			tempNum /= 10;
		}

		if (count > maxCount)
		{
			maxCount = count;
			mostFrequentDigit = digit;
		}
	}
	std::cout << "RESULT: most frequent minimal digit is " << mostFrequentDigit << " and it repeats " << maxCount << " times \n";
		
	// Алгоритъмът работи така:
	//	1.	Прочита се цяло число num.
	//	2.	Подготвят се :
	//	  •	mostFrequentDigit = 0 (текущ най - чест кандидат),
	//	  •	maxCount = 0 (максимален брой срещания досега).
	//	3.	Обхождат се всички цифри от 0 до 9 (digit).
	//	4.	За всяка digit :
	//	  •	Копира се числото в tempNum.
	//	  •	count = 0.
	//	  •	Докато tempNum > 0:
	//	  •	взема се последната цифра с tempNum % 10;
	//	  •	ако е равна на digit, count++;
	//	  •	премахва се последната цифра с tempNum /= 10.
	//	5.	След броенето :
	//	  •	ако count > maxCount, обновява:
	//	  •	maxCount = count,
	//	  •	mostFrequentDigit = digit.
	//	6.	Накрая се отпечатва mostFrequentDigit и колко пъти се среща(maxCount).
	//	Защо връща най - малката при равенство :
	//	  •	Обхождането е от 0 към 9.
	//	  •	Смяна се прави само при count > maxCount(не при == ).
	//	  •	Значи при равни честоти остава по - малката цифра, намерена по - рано.



	//-----------------------------------------------------------------------------------------------------
	//Задача 4 : Напишете програма, която приема две естествени числа и връща най-големият им общ делител.
	//Вход : 16 24; Изход: 8

	// АЛГОРИТЪМ (Евклидов алгоритъм чрез изваждане): 
	//  - Докато числата са различни:
	//  - ако a > b → a = a - b
	//  - иначе       b = b - a
	//  - Когато станат равни, това е НОД (най-големият им общ делител).
		
	std::cout << "\n------ TASK 4 (find greatest common divisor) ------\n";
	std::cout << "Enter two natural numbers: ";
	unsigned int firstNumber;
	unsigned int secondNumber;
	std::cin >> firstNumber >> secondNumber;

	int a = firstNumber;
	int b = secondNumber;

	while (a != b)
	{
		if (a > b) {
			a = a -b;
		} else {
			b = b - a;
		}
	}
	std::cout << "Greatest common divisor is: " << a << "\n";



	//-----------------------------------------------------------------------------------------------------
	//Задача 5 : Напишете програма, която приема две естествени числа и връща най - малкото им общо кратно.
	// АЛГОРИТЪМ: 
	//  Least-common-multiple(a, b) = (a * b) / greatest-common-divisor(a, b)

	std::cout << "\n------ TASK 5 (find least common multiple) ------\n";
	std::cout << "Enter two natural numbers: ";
	int first;
	int second;
	std::cin >> first >> second;

	int x = first;
	int y = second;

	while (x != y)
	{
		if (x > y) {
			x = x - y;
		}
		else {
			y = y - x;
		}
	}
	int greatestCommonDivisor = x;
	int leastCommonMultiple = (first / greatestCommonDivisor) * second;
	std::cout << "Least common multiple is: " << leastCommonMultiple << "\n";



	// Задача 6 : Напишете програма, която приема естествено число и връща дали числото е просто.
	// Вход: 17; Изход: Prime
	// Вход: 25; Изход: not prime
	// Алгоритъм:
	//	1.	Чете се естествено число naturalNumber.
	//	2.	Инициализация:
	//	  •	isPrime = (naturalNumber >= 2)
	//		(числа под 2 не са прости),
	//	  •	divisor = 2.
	//	3.	Цикъл : проверяват се потенциални делители от 2 нагоре, докато :
	//	  •	divisor * divisor <= naturalNumber(достатъчно е до корен квадратен),
	//	  •	и isPrime е още true.
	//	4.	Във всяка итерация :
	//	  •	ако naturalNumber % divisor == 0, намерен е делител и isPrime = false.

	std::cout << "\n------ TASK 6 (check if number is prime) ------\n";
	std::cout << "Enter a natural number: ";
	int naturalNumber;
	std::cin >> naturalNumber;

	bool isPrime = naturalNumber >= 2;
	int divisor = 2;

	for (; divisor * divisor <= naturalNumber && isPrime; divisor++)
	{
		if (naturalNumber % divisor == 0)
		{
			isPrime = false;
		}
	}

	if (isPrime) {
		std::cout << "Prime\n";
	} else {
		std::cout << "Not prime\n";
	}



	//-----------------------------------------------------------------------------------------------------
	//Задача 7 : Напишете програма, която приема естествено число и отпечатва разбиването му на прости множители, сортирани низходящо.
	//Вход : 50; Изход: 5 ^ 2 2 ^ 1
	// алгоритъм:
	//	1.	Четем естествено число n0.
	//	2.	Ако n0 < 2 → няма проста факторизация.
	//	3.	Запазваме работно число n = n0.
	//	4.	Обхождаме candidate от n0 надолу до 2:
	//		•	Проверяваме дали candidate е просто :
	//			•	пробваме делители от 2 до sqrt(candidate);
	//				•	ако има делител → не е просто.
	//		•	Ако candidate е просто и n% candidate == 0:
	//			•	броим степента power, като делим :
	//			•	докато n% candidate == 0 : n /= candidate, power++
	//		•	отпечатваме candidate ^ power.
	std::cout << "\n------ TASK 7 (factor a natural number into prime factors, sorted in descending order) ------\n";
	std::cout << "Enter a natural number: ";
	int numberToFactor;
	std::cin >> numberToFactor;

	if (numberToFactor < 2)
	{
		std::cout << "No prime factorization\n";
	}
	else
	{
		int n = numberToFactor;
		bool isFirst = true;

		for (int candidate = numberToFactor; candidate >= 2; candidate--)
		{
			bool candidateIsPrime = true;
			for (int d = 2; d * d <= candidate; d++)
			{
				if (candidate % d == 0)
				{
					candidateIsPrime = false;
					break;
				}
			}

			if (!candidateIsPrime)
			{
				continue;
			}

			if (n % candidate == 0)
			{
				int power = 0;
				while (n % candidate == 0)
				{
					n /= candidate;
					power++;
				}

				if (!isFirst)
				{
					std::cout << " ";
				}
				std::cout << candidate << " ^ " << power;
				isFirst = false;
			}
		}
		std::cout << "\n";
	}

	//---------------------------------------------------------------------------------------------------
	//std::cout << "\n--------------------\n";
	//std::cout << "Press Esc to exit, or any other key to continue: ";
	//key = _getch();
	//std::cout << "\n";
	//} while (key != 27);
}
