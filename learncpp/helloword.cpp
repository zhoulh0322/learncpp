#include <iostream>
#include <ctime>
// #include <ostring>

int get_from_user() {
	int a{ 0 };
	std::cout << "ÇëÊäÈëÊıÖµ\n";
	std::cin >> a;
	return a;
}

int main() {
	std::cout << "Hello, Word!\n";
	int a{ get_from_user() };
	while (a < 10) {
		std::cout << "yes";
	};
	return 0;
}