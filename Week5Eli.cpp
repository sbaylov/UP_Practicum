#include <iostream>

char changeCase(char symbol);
char intFromChar(char symbol);
char digitToChar(int number);
long long pow(int n, int k);
int getRemainder(int a, int b);
bool isTriangle(int a, int b, int c);
int arithmeticProgression(int a, int d, int n);
double geometricProgression(double a, double q, int n);
int reverse(int num);
long long concat(int first, int second);
int countDigits(int num);
long long countPermutations(int n);
long long countVariations(int n, int k);
long long countCombinations(int n, int k);
int isSuffix(int first, int second);
int isPrefix(int first, int second);
bool isInfix(int first, int second);
void cipher(int n);

int main_week5eli() {
	// Task 1: changeCase
	//std::cout << "--------- Task 1 (changeCase) ---------\n";
	//std::cout << "Enter a letter: ";
	//char letter;
	//std::cin >> letter;
	//char changedLetter = changeCase(letter);
	//std::cout << "Changed letter: " << changedLetter << "\n";


	// Task 2: char-to-int and int-to-char
	//std::cout << "\n--------- Task 2 (char-to-int and int-to-char) ---------\n";
	//std::cout << "Enter a digit character: ";
	//char digitChar;
	//std::cin >> digitChar;
	//int digitInt = intFromChar(digitChar);
	//std::cout << "Converted to int: " << digitInt << "\n";
	//std::cout << "Enter a digit (0-9): ";
	//int digit;
	//std::cin >> digit;
	//char digitCharConverted = digitToChar(digit);
	//std::cout << "Converted to char: " << digitCharConverted << "\n";


	// Задача 3: Напишете фунцкия pow(n, k), която приема две цели числа n и k и връща n повдигнато на степен k
	//std::cout << "\n--------- Task 3 (pow) ---------\n";
	//std::cout << "Enter two numbers: ";
	//int n, k;
	//std::cin >> n >> k;
	//std::cout << "Result: " << pow(n, k) << "\n";


	// Задача 4: Напишете фунцкия getRemainder(int a, int b), която приема две цели числа a b и връща остатъка от деление от a на b без да използвате оператор %
	//std::cout << "\n--------- Task 4 (getRemainder) ---------\n";
	//std::cout << "Enter two numbers: ";
	//int a, b;
	//std::cin >> a >> b;
	//std::cout << "Result: " << getRemainder(a, b) << "\n";

	// Задача 5: Напишете фунцкия isTriangle(a, b, c), която приема 3 цели числа и връща дали те могат да са страни на триъгълник
	//std::cout << "\n--------- Task 5 (isTriangle) ---------\n";
	//std::cout << "Enter three numbers: ";
	//int a5, b5, c5;
	//std::cin >> a5 >> b5 >> c5;
	//std::cout << "Result: " << (isTriangle(a5, b5, c5) ? "true" : "false") << "\n";
	


	// Задача 6: Напишете две функции :
	// - arithmeticProgression(a, d, n), която приема първия член и разликата на аритметична прогресия и число n
	// - geometricProgression(a, q, n), която приема първия член и частното на геометрична прогресия и число n
	// И двете функции трябва да пресмятат n - тия член на аритметичната / геометричната прогресия
	//std::cout << "\n--------- Task 6 (arithmeticProgression and geometricProgression) ---------\n";
	//std::cout << "Enter the first term, difference, and n for arithmetic progression: ";
	//int a6, d6, n6;
	//std::cin >> a6 >> d6 >> n6;
	//int nthTermArithmetic = arithmeticProgression(a6, d6, n6);
	//std::cout << "The " << n6 << "-th term of the arithmetic progression is: " << nthTermArithmetic << "\n";

	//std::cout << "Enter the first term, ratio, and n for geometric progression: ";
	//int a6g, q6, n6g;
	//std::cin >> a6g >> q6 >> n6g;
	//int nthTermGeometric = geometricProgression(a6g, q6, n6g);
	//std::cout << "The " << n6g << "-th term of the geometric progression is: " << nthTermGeometric << "\n";



	// Задача 7: Напишете фунцкия reverse(num), която приема цяло число и го връща с обърнат ред на цифирте му
	//std::cout << "\n--------- Task 7 (reverse) ---------\n";
	//std::cout << "Enter a number: ";
	//int num7;
	//std::cin >> num7;
	//int reversedNum = reverse(num7);
	//std::cout << "The reversed number is: " << reversedNum << "\n";



	// Задача 8: Напишете фунцкия concat(first, second), която приема две числа и ги конкатенира(залепва второто накрая на първото)
	//std::cout << "\n--------- Task 8 (concat) ---------\n";
	//std::cout << "Enter two numbers: ";
	//int first8, second8;
	//std::cin >> first8 >> second8;
	//int concatenatedNum = concat(first8, second8);
	//std::cout << "The concatenated number is: " << concatenatedNum << "\n";



	// Задача 9: Напишете фунцкия countDigits(num), която приема цяло число и връща броя на цифрите му
	//std::cout << "\n--------- Task 9 (countDigits) ---------\n";
	//std::cout << "Enter a number: ";
	//int num9;
	//std::cin >> num9;
	//int digitCount = countDigits(num9);
	//std::cout << "The number of digits is: " << digitCount << "\n";


	// Задача 10: Напишете три фунцкии :
	// - countPermutations(n), която връща броя на пермутациите на n елемента - смята се с n!
	// - countVariations(n, k), която връща броя на вариациите на n елемента, k - ти клас - смята се с n!/ (n - k)!
	// - countCombinations(n, k), която връща броя на комбинациите на n елемента, k - ти клас - смята се с n!/ ((n - k)!*k!)
	//std::cout << "\n--------- Task 10 (countPermutations, countVariations, countCombinations) ---------\n";
	//std::cout << "Enter n for permutations: ";
	//int n10p;
	//std::cin >> n10p;
	//int permutations = countPermutations(n10p);
	//std::cout << "The number of permutations is: " << permutations << "\n";
	//
	//std::cout << "Enter n and k for variations: ";
	//int n10v, k10v;
	//std::cin >> n10v >> k10v;
	//int variations = countVariations(n10v, k10v);
	//std::cout << "The number of variations is: " << variations << "\n";

	//std::cout << "Enter n and k for combinations: ";
	//int n10c, k10c;
	//std::cin >> n10c >> k10c;
	//int combinations = countCombinations(n10c, k10c);
	//std::cout << "The number of combinations is: " << combinations << "\n";



	// Задача 11: Напишете фунцкия isSuffix(first, second), която проверява дали второто число е суфикс на първото(т.е.първото завършва на второто)
	//std::cout << "\n--------- Task 11 (isSuffix) ---------\n";
	//std::cout << "Enter two numbers: ";
	//int first11, second11;
	//std::cin >> first11 >> second11;
	//int suffixResult = isSuffix(first11, second11);
	//if (suffixResult == 1) {
	//	std::cout <<  "true\n";
	//}
	//else {
	//	std::cout << "false\n";
	//}

	// Задача 12: Напишете фунцкия isPrefix(first, second), която проверява дали второто число е префикс на първото(т.е.първото започва на второто)
	//std::cout << "\n--------- Task 12 (isPrefix) ---------\n";
	//std::cout << "Enter two numbers: ";
	//int first12, second12;
	//std::cin >> first12 >> second12;
	//int prefixResult = isPrefix(first12, second12);
	//if (prefixResult == 1) {
	//	std::cout << "true\n";
	//}
	//else {
	//	std::cout << "false\n";
	//}



	// Задача 13: Напишете фунцкия isInfix(first, second), която проверява дали второто число е инфикс на първото(т.е.първото съдържа някъде в себе си второто)
	//std::cout << "\n--------- Task 13 (isInfix) ---------\n";
	//std::cout << "Enter two numbers: ";
	//int first13, second13;
	//std::cin >> first13 >> second13;
	//bool infixResult = isInfix(first13, second13);
	//if (infixResult) {
	//	std::cout << "true\n";
	//}
	//else {
	//	std::cout << "false\n";
	//}


	// Задача 14: Напишете фунцкия cipher(n), която приема цяло число n и чете от конзолата n на брой символа.
	//  - ако символа е буква, сменя case-а му
	//  - ако е цифра, изписва числото, получено от конкатенацията на тази цифра и предишната въведена
	//  - за първата въведена цифра(т.е.когато все още нямаме предишна цифра) може да смятате, че "предишната" е 1
	//  - ако е някой от "специалните" символи @, !, #  - да не изписва нищо.Накрая на функцията да изпише общия брой такива "специални" символи
	//  - за всеки друг символ просто да го изпише обратно на конзолата без промяна
	std::cout << "\n--------- Task 14 (cipher) ---------\n";
	std::cout << "Enter a number for cipher function: ";
	int n;
	std::cin >> n;
	cipher(n);

	return 1;
}


//Task1
char changeCase(char symbol) {
	if (symbol >= 'A' && symbol <= 'Z') {
		return symbol + ' ';
	}
	else if (symbol >= 'a' && symbol <= 'z') {
		return symbol - ' ';
	}
	else {
		return '$';
	}
}


//Task2
char intFromChar(char symbol) {
	if (symbol >= '0' && symbol <= '9') {
		int num = symbol - '0';
		return num;
	}
	else {
		return -1;
	}
}

//char digitToChar(char number) { // променена функция, за да връща char вместо int
	//if (number >= '0' && number <= '9') {
	//    return number;
	//}
	//else {
	//    return '#';
	//}
//}

char digitToChar(int number) {
	if (number >= 0 && number <= 9) {
		return number + '0';
	}
	else {
		return '?';
	}
}

//Task3
long long pow(int n, int k) {
	long long res = 1;
	for (int i = 1; i <= k; i++) {
		res = res * n;
	}
	return res;
}

//Task4
int getRemainder(int a, int b) {
	int remainder = a - (a / b) * b;
	return remainder;
}


//Task5
bool isTriangle(int a, int b, int c) {
	return a > 0 && b > 0 && c > 0 && a + b > c && a + c >= b && b + c >= a;

}

//Task6
int arithmeticProgression(int a, int d, int n) {
	int ntiChlen = a + (n - 1) * d;
	return ntiChlen;
}

double geometricProgression(double a, double q, int n) {
	int qNaNta = 1;
	for (int i = 1; i <= n; i++) {
		qNaNta = qNaNta * q;

	}
	return a * (qNaNta - 1) / (q - 1);

}

//Task7
int reverse(int num) {
	int result = 0;

	while (num != 0) {
		int remainder = num % 10;
		result = result * 10 + remainder;
		num /= 10;
	}
	return result;

}

//Task8
long long concat(int first, int second) {
	int concator = 1;
	int result;
	if (second == 0) {
		concator = 10;//ако е 0 умнож по 10 за да залепи 0
	}
	int temp = second; // промяна: запазваме оригиналната стойност на second в temp, за да можем да я използваме по-късно
	while (temp != 0) {

		concator = concator * 10;
		temp = temp / 10;

	}
	return first * concator + second;
}


//Task9
int countDigits(int num) {
	int digitCounter = 0;
	do {
		num /= 10;
		digitCounter++;
	} while (num != 0);

	return digitCounter;

}

//Task10
long long countPermutations(int n) {
	long long factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial = factorial * i;
	}
	return factorial;
}

// Task10 - връща броя на вариациите на n елемента, k - ти клас - смята се с n!/ (n - k)!
long long countVariations(int n, int k) {
	return countPermutations(n) / countPermutations(n - k);	
}

// Task10 - ф-ята връща броя на комбинациите на n елемента, k - ти клас - смята се с n!/ ((n - k)!*k!)
long long countCombinations(int n, int k) {
	return countPermutations(n) / (countPermutations(n - k) * countPermutations(k));
}

//Task11 : ф-я проверява дали второто число е суфикс на първото(т.е.първото завършва на второто)
int isSuffix(int first, int second) {
	int divisor = 1;
	int suffix = second;

	while (suffix != 0) {
		suffix = suffix / 10;
		divisor = divisor * 10;
	}
	return first % divisor == second; //nqma da vurne nishto ako ne e ravno

}

//Task12
int isPrefix(int first, int second) {
	int divisor = 1;
	int prefix = second;
	do {
		prefix /= 10;
		divisor *= 10;
	} while (prefix != 0);

	while (first >= divisor) {
		first = first / 10;
	}
	return first == second;
}

//Task13
bool isInfix(int first, int second) {
	int divisor = 1;
	int infix = second;
	while (infix != 0) {
		infix /= 10;
		divisor *= 10;
	}
	while (first > 0) {
		if (first % divisor == second) {
			return true;
		}
		first /= 10;
	}
	return false; // промяна: връщаме false извън цикъла, ако не е намерен инфикс 
}

// фунцкия cipher(n) приема цяло число n и чете от конзолата n на брой символа.
// - ако символа е буква, сменя case-а му
// - ако е цифра, изписва числото, получено от конкатенацията на тази цифра и предишната въведена
//    - за първата въведена цифра(т.е.когато все още нямаме предишна цифра) може да смятате, че "предишната" е 1
// - ако е някой от "специалните" символи @, !, #  - да не изписва нищо. Накрая на функцията да изпише общия брой такива "специални" символи
// - за всеки друг символ просто да го изпише обратно на конзолата без промяна
void cipher(int n) {
	int specialCount = 0;
	int prevDigit = 1;

	for (int i = 0; i < n; i++) {
		char ch;
		std::cin >> ch;
		//char ch = _getch();

		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
			std::cout << changeCase(ch);
		}
		else if (ch >= '0' && ch <= '9') {
			int currentDigit = ch - '0';
			std::cout << concat(prevDigit, currentDigit);
			prevDigit = currentDigit;
		}
		else if (ch == '@' || ch == '!' || ch == '#') {
			specialCount++;
		}
		else {
			std::cout << ch;
		}
	}
	std::cout << "\nSpecial characters count: " << specialCount;
}
