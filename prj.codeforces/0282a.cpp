#include<iostream>

int main() {
	int n = 0;
	std::cin >> n;
	std::string s = "";
	int x = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> s;
		if (s[0] == '+' || s[1] == '+') {
			x++;
		}
		else {
			x--;
		}
	}
	std::cout << x;
}