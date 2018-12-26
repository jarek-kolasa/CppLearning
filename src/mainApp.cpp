#include <iostream>

using namespace std;

class Strings{
public: void stringers(){

	string text = "Hello from Strings";

	string text1 = "Hello ";
	string text2 = "friend";
	string text3 = text1 + text2;

	cout << text << endl;
	cout << text1 << text2 << endl;
	cout << text3 << endl;
}
};


int main(){

	cout << "Hello!" << endl;

	Strings s;
	s.stringers();

return 0;
}




