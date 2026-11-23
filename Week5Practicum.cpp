#include <iostream>
#include <conio.h>

static char changeCase(char symbol);
static int charToInt(char symbol); 
static char intToChar(int number);
static int concat(int first, int second);
static void cipher(int n);

int main_week5() {
	int key;
	do {


		// Задача 1: Напишете фунцкия changeCase(symbol), която приема символ
		// Ако е главна буква, я смалява и връща. Ако е малка буква, я уголемява и връща. В противен случай върнете произволен символ
		//std::cout << "\n------ TASK 1 (change case of a character) ------\n";
		//char ch1; 
		//std::cin >> ch1;
		//ch1 = changeCase(ch1);
		//std::cout << "Changed case: " << ch1 << "\n";



		// Задача 2: Напишете две фунцкии :
		// първата приема символ - ако е цифра, я връща като int, в противен случай връща - 1
		// втората приема число - ако е цифра, я връща като символ, в противен случай връща произволен символ
		//std::cout << "\n------ TASK 2 (convert between char and int) ------\n";
		//int num;
		//std::cin >> num;
		//char c = intToChar(num);
		//std::cout << "Converted to char: " << c << "\n";
		//char ch2;
		//std::cin >> ch2;
		//int n = charToInt(ch2);
		//std::cout << "Converted to int: " << n << "\n";

		// Задача 8: Напишете фунцкия concat(first, second), която приема две числа и ги конкатенира(залепва второто накрая на първото)

		std::cout << "\n------ TASK 14 (cipher) ------\n";
		//Задача 14: Напишете фунцкия cipher(n), която приема цяло число n и чете от конзолата n на брой символа.
		// - ако символа е буква, сменя case-а му
		// - ако е цифра, изписва числото, получено от конкатенацията на тази цифра и предишната въведена
		//    - за първата въведена цифра(т.е.когато все още нямаме предишна цифра) може да смятате, че "предишната" е 1
		// - ако е някой от "специалните" символи @, !, #  - да не изписва нищо.Накрая на функцията да изпише общия брой такива "специални" символи
		// - за всеки друг символ просто да го изпише обратно на конзолата без промяна
		std::cout << "Enter a number for cipher function: ";
		int count;
		std::cin >> count;
		
		cipher(count);





	std::cout << "\n--------------------\n";
	std::cout << "Press Esc to exit, or any other key to continue: ";
	key = _getch();
	std::cout << "\n";
	} while (key != 27);

	return 0;
}

// фунцкия cipher(n) приема цяло число n и чете от конзолата n на брой символа.
// - ако символа е буква, сменя case-а му
// - ако е цифра, изписва числото, получено от конкатенацията на тази цифра и предишната въведена
//    - за първата въведена цифра(т.е.когато все още нямаме предишна цифра) може да смятате, че "предишната" е 1
// - ако е някой от "специалните" символи @, !, #  - да не изписва нищо.Накрая на функцията да изпише общия брой такива "специални" символи
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


int charToInt(char symbol) {
	if (symbol >= '0' && symbol <= '9') {
		return symbol - '0';
	}
	else {
		return -1;
	}
}

char intToChar(int number) {
	if (number >= 0 && number <= 9) {
		return number + '0';
	}
	else {
		return '?';
	}
}

static char changeCase(char symbol) {
	if (symbol >= 'A' && symbol <= 'Z') {
		return symbol + ('a' - 'A');
	}
	else if (symbol >= 'a' && symbol <= 'z') {
		return symbol - ('a' - 'A');
	}
	else {
		return '?';
	}
}

// фунцкия concat(first, second), която две числа и ги конкатенира(залепва второто накрая на първото)
static int concat(int first, int second) {
	int multiplier = 1;
	int temp = second;

	if (temp == 0) {
		multiplier = 10;
	}
	else {
		while (temp > 0) {
			multiplier *= 10;
			temp /= 10;
		}
	}

	return first * multiplier + second;
}


