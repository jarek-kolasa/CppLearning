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

		if(inputPassword == password){
			cout << "Password accepted" << endl;
		}

		if(inputPassword != password){
					cout << "Access denied" << endl;
				}

	}
};

int main() {

	IfStatement ifs;
	ifs.ifStatementexample();

	return 0;
}

