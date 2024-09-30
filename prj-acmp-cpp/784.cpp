#include <iostream>

int main() {
	long long int n = 0;
	std::cin >> n;

	long long int  first_subspecie = 0;
	long long int  second_subspecie = 0;
	std:: cin >> first_subspecie >> second_subspecie;

	while (first_subspecie != second_subspecie) {
		first_subspecie > second_subspecie ? first_subspecie /= 2 : second_subspecie /= 2;
	}
	std::cout << first_subspecie;

	return 0;
}