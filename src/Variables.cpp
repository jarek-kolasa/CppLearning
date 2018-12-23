#include <iostream>

using namespace std;

int main(){

	int numberOfCats = 5;
	int numberOfDogs = 7;
	int numberOfAnimals = numberOfCats + numberOfDogs;


	cout << "Number of Cats: " << numberOfCats << endl;
	cout << "Number of Cats: " << numberOfDogs << endl;
	cout << "Number of Animals: " << numberOfAnimals << endl;

	cout << "One more dog is acquired!" << endl;

	numberOfDogs++;

	cout << "Number of Cats: " << numberOfDogs << endl;



	return 0;
}
