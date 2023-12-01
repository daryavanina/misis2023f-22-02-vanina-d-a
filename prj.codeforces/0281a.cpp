#include<iostream>
int main() {
	std::string s = "";
	std::cin >> s;
	s[0] = std::toupper(s[0]);
	std::cout << s;
}