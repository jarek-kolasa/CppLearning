#include <iostream>
#include <limits.h>
#include <iomanip>

using namespace std;

class Strings {
public:
	void stringers() {

		string text = "Hello from Strings";

		string text1 = "Hello ";
		string text2 = "friend";
		string text3 = text1 + text2;

		cout << text << endl;
		cout << text1 << text2 << endl;
		cout << text3 << endl;
	}
};
/* Strings */

class UserInput {
public:
	void user() {

		cout << "enter the text: " << flush;

		string input;
		cin >> input;

		cout << "You entered: " << input << endl;

		cout << "Enter a number: " << flush;
		int value;
		cin >> value;

		cout << "You entered value: " << value << endl;
	}
};

class IntegerTypes {
public:
	void integers() {
		int value = 256256;

		cout << value << endl;

		cout << "Max int value" << INT_MAX << endl;
		cout << "Min int value" << INT_MIN << endl;

		cout << "Max long value" << LONG_MAX << endl;
		cout << "Min long value" << LONG_MIN << endl;

		printf("Max value of long = %ld\n", LONG_MAX);

		long longValue = 256256256;
		cout << longValue << endl;

		cout << "Size of int: " << sizeof(int) << endl;
		cout << "Size of short int: " << sizeof(short int) << endl;
		cout << "Size of long: " << sizeof(long) << endl;

		unsigned int uValue = -2342343;
		cout << uValue << endl;

		signed int sValue = -2342343;
		cout << sValue << endl;

	}
};
/* IntegerTypes */

class FloatingPointTypes {
public:
	void floatingPoints() {
		float fValue = 123.456789;
		cout << "Size of float: " << sizeof(fValue) << endl;
		cout << fixed << fValue << endl;
		cout << setprecision(20) << fixed << fValue << endl;
		cout << setprecision(20) << scientific << fValue << endl;

		double dValue = 123.456789;
		cout << "Size of double: " << sizeof(dValue) << endl;
		cout << setprecision(20) << fixed << dValue << endl;

		long double lValue = 123.45678945678946;
		cout << "Size of long: " << sizeof(lValue) << endl;
		cout << setprecision(20) << fixed << lValue << endl;

	}
};

class CharAndBool {
public:
	void charBool() {
		bool b1Value = false;
		bool b2Value = true;

		cout << b1Value << endl;
		cout << b2Value << endl;

		char c1Value = '7';
		cout << c1Value << endl;

		char c2Value = 55; // ASCII number
		cout << c2Value << endl;

		cout << "Size of char: " << sizeof(char) << endl;

		wchar_t wValue = 'i';
		cout << wValue << endl;
		cout << (char) wValue << endl;
		cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	}
};

class IfStatement {
public:
	void ifStatementexample() {

		string password = "hello";
		string inputPassword;

		cout << "Enter the password: " << flush;
		cin >> inputPassword;

		if (inputPassword == password) {
			cout << "Password accepted" << endl;
		}

		if (inputPassword != password) {
			cout << "Access denied" << endl;
		}

	}
};

class IfElse {
public:
	void ifElseExample() {
		cout << "Menu:" << endl;
		cout << "1.\tCreate" << endl;
		cout << "2.\tRead" << endl;
		cout << "3.\tUpdate" << endl;
		cout << "4.\tDelete" << endl;
		cout << "5.\tQuit program" << endl;

		cout << "Select the menu option > " << flush;
		int selectedOption;
		cin >> selectedOption;

		if (selectedOption == 1) {
			cout << "Object added" << endl;
		} else if (selectedOption == 2) {
			cout << "Object readed" << endl;
		} else if (selectedOption == 3) {
			cout << "Object updated" << endl;
		} else if (selectedOption == 4) {
			cout << "Object deleted" << endl;
		} else if (selectedOption == 5) {
			cout << "Program quitting..." << endl;
		} else {
			cout << "Invalid option" << endl;
		}

	}
};

class ComparingFloats {
public:
	void comparingFloatsExample() {
		float value = 1.1;

		if (value == 1.1) {
			cout << "equals" << endl;
		} else {
			cout << "not equal" << endl;
		}

		cout << setprecision(10) << value << endl;

		if (value < 1.100001) {
			cout << "equals" << endl;
		} else {
			cout << "not equal" << endl;
		}

	}
};

class Conditions {
public:
	void conditionsExample() {

		int value1 = 7;
		int value2 = 4;

		if (value1 >= 5) {
			cout << "Condition no 1: true" << endl;
		} else {
			cout << "Condition no 1: false" << endl;
		}

		if (value1 == 7 && value2 < 3) {
			cout << "Condition no 2: true" << endl;
		} else {
			cout << "Condition no 2: false" << endl;
		}

		if (value1 == 7 || value2 < 3) {
			cout << "Condition no 3: true" << endl;
		} else {
			cout << "Condition no 3: false" << endl;
		}

		if ((value2 != 8 && value1 == 10) || value1 < 10) {
			cout << "Condition no 4: true" << endl;
		} else {
			cout << "Condition no 4: false" << endl;
		}

		bool condition1 = (value2 != 8) && (value1 == 10);
		bool condition2 = value1 < 10;

		cout << condition1 << endl;
		cout << condition2 << endl;

		if (condition1 || condition2) {
			cout << "Condition no 5: true" << endl;
		} else {
			cout << "Condition no 5: false" << endl;
		}

	}
};

class WhileLoops {
public:
	void whileLoopsExample() {

		int i = 0;

		while (i <= 5) {
			cout << "Loop no. " << i + 1 << endl;

			i++;
		}

		cout << "Leaved the loop" << endl;
	}
};

class DoWhileLoops {
public:
	void doWhileLoopExample1() {

		int i = 0;

		do {
			cout << "Loop no. " << i + 1 << endl;
			i++;
		} while (i <= 3);

	}

	void doWhileLoopExample2() {

		int i = 0;

		do {
			cout << "Loop no. " << i + 1 << endl;
			i++;
		} while (false);

	}

	void doWhileLoopExample3() {

		const string password = "hello";

		string input;

		do {
			cout << "Enter the password > " << flush;
			cin >> input;

			if (input != password) {
				cout << "Access denied" << endl;
			}
		} while (input != password);

		cout << "Access granted" << endl;

	}
};

class ForLoop {
public:
	void forLoopWxample() {

		for (int i = 0; i < 10; i++) {
			cout << "It's loop no. " << i + 1 << endl;
		}

	}
};

class BreakContinue {
public:
	void breakExample() {
		for (int i = 0; i < 5; i++) {
			cout << "Loop no." << i + 1 << endl;
			if (i == 2) {
				break;
			}
			cout << "Looping" << endl;
		}
	}

	void continueExample() {
		for (int i = 0; i < 5; i++) {
			cout << "Loop no." << i + 1 << endl;
			if (i == 2) {
				continue;
			}
			cout << "Looping" << endl;
		}
	}

	void breakPassword() {
		const string password = "hello";
		string inputPass;

		do {
			cout << "Enter the password > " << flush;
			cin >> inputPass;

			if (inputPass == password) {
				cout << "Access granted" << endl;
				break;
			} else {
				cout << "Access denied" << endl;
			}

		} while (true);

		cout << "Program quitting..." << endl;

	}
};

class Arrays {
public:
	void arraysExample() {

		cout << endl << "Arrays of integers" << endl;
		cout << "=================" << endl;

		int values[3];

		for (unsigned int i = 0; i < ((sizeof(values)) / (sizeof(*values)));
				i++) {
			values[i] = i;
			cout << values[i] << endl;
		}

		cout << endl << "Arrays of doubles" << endl;
		cout << "=================" << endl;

		double dValues[] = { 4.3, 12.35, 5.33, 14.6 };

		for (unsigned int i = 0; i < ((sizeof(dValues)) / (sizeof(*dValues)));
				i++) {
			cout << "Element at index " << i << " has value: " << dValues[i]
					<< endl;
		}

		cout << endl << "Initializing with strings" << endl;
		cout << "=================" << endl;

		string text[] = { "one", "two", "three" };

		for (unsigned int i = 0; i < ((sizeof(text)) / (sizeof(*text))); i++) {
			cout << "Element at index " << i << " has value: " << text[i]
					<< endl;
		}

	}
};

class MultidimensionalArrays {
public:
	void mutlidimensionalArraysExample() {
		string animals[2][3] = { { "dog", "cat", "fox" }, { "mouse", "squirrel",
				"parrot" } };

		cout << "Size of multidimensional array: " << sizeof(animals) << endl;

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				cout << animals[i][j] << " " << flush;
			}
			cout << endl;
		}
	}

public:
	void mutlidimensionalArraysExample2() {
		int numbers[10][10];

		for (int i = 0; i < 10; i++) {
			numbers[i][0] = i + 1;
			// cout << numbers[i][0] << " " << flush;
		}

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				numbers[i][j] = (numbers[i][0]) * (j + 1);
				cout << numbers[i][j] << " " << flush;
			}
			cout << endl;
		}
	}
};

class SizeofArrays {
public:
	void sizeofArraysExample() {
		int values[] = { 4, 5, 6, 7 };

		cout << "Size of array: " << sizeof(values) << endl;
		cout << "Size of int: " << sizeof(int) << endl;

		for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++) {
			cout << values[i] << " " << flush;
		}
	}
	void sizeof2dArraysExample() {
		string animals[2][3] = { { "dog", "cat", "fox" }, { "mouse", "squirrel",
				"parrot" } };

		cout << "Size of string: " << sizeof(string) << endl;
		cout << "Size of an array row: " << sizeof(animals[0]) << endl;
		cout << "Size of multidimensional array [2][3]: " << sizeof(animals)
				<< endl;

		cout << endl;

		for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]);
				i++) {
			for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string);
					j++) {
				cout << animals[i][j] << " " << flush;
			}
			cout << endl;
		}

	}
};

class SwitchStatement {
public:
	void switchExample() {
		int value = 5;

		const int number = 5; // if I want to get variable in switch statement it has to be const

		switch (value) {
		case 4:
			cout << "Value is 4" << endl;
			break;
		case number:
			cout << "Value is 5" << endl;
			break;
		case 6:
			cout << "Value is 6" << endl;
			break;
		default:
			cout << "Unrecognized value" << endl;
		}
	}

public:
	void menuUsingSwitch() {

		int userChoice;

		do {
			cout << endl << "......Menu......" << endl;
			cout << "1. Create" << endl;
			cout << "2. Read" << endl;
			cout << "3. Update" << endl;
			cout << "4. Delete" << endl;
			cout << "5. Quit" << endl;

			cout << endl << "Choose the option: " << flush;

			cin >> userChoice;

			switch (userChoice) {
			case 1:
				cout << "Object created" << endl;
				break;
			case 2:
				cout << "Object read" << endl;
				break;
			case 3:
				cout << "Object updated" << endl;
				break;
			case 4:
				cout << "Object deleted" << endl;
				break;
			case 5:
				cout << "Bye... " << flush;
				break;
			default:
				cout << "Unrecognized value" << endl;
			}

		} while (userChoice != 5);

		cout << "Quitting..." << endl;
	}
};

class Functions {
	void menu() {
		cout << "......Menu......" << endl;
		cout << "1. Create" << endl;
		cout << "2. Read" << endl;
		cout << "3. Update" << endl;
		cout << "4. Delete" << endl;
		cout << "5. Quit" << endl;
	}

public:
	void processSelection() {
		int userChoice;

		do {
			cout << endl << "Choose the option: " << flush;

			cin >> userChoice;

			switch (userChoice) {
			case 1:
				cout << "Object created" << endl;
				break;
			case 2:
				cout << "Object read" << endl;
				break;
			case 3:
				cout << "Object updated" << endl;
				break;
			case 4:
				cout << "Object deleted" << endl;
				break;
			case 5:
				cout << "Bye... " << flush;
				break;
			default:
				cout << "Unrecognized value" << endl;
			}

		} while (userChoice != 5);
	}

public:
	void menuFunction() {
		menu();
		processSelection();
	}
};

int main() {

	Functions function;
	function.menuFunction();

	return 0;
}
