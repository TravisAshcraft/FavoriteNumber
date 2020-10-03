#include <iostream>


int main() {
	int favoriteNumber;
	

	std::cout << "What is your favorite number?" << std::endl;
	std::cin >> favoriteNumber;

	std::cout << "Wow " << favoriteNumber << " is not my favorite number,"
	" my favorite number is " << favoriteNumber + 3 << std::endl;
	

}