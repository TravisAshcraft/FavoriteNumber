/***********************
*Author: Travis Ashcraft
*
*Basic Program 
*
************************/

#include <iostream>
using namespace std;

int main() {

	int favoriteNumber;

	cout << "What is your favorite number?" << endl;
	cin >> favoriteNumber;

	cout << "Wow " << favoriteNumber << " is not my favorite number,"
	" my favorite number is " << favoriteNumber + 3 << endl;

	return 0;

}

