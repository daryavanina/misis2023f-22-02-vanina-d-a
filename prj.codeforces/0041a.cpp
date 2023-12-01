#include<iostream>
int main() {
	std::string s = "";
	std::string t = "";
	std::cin >> s >> t;
	int lens = s.size();
	int lent = t.size();
	bool flag = 1;
	if (lens != lent) {
		std::cout << "NO";
	}
	else {
		for (int i = 0; i < lens; i++) {
			if (s[i] != t[lent - i - 1]) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			std::cout << "YES";
		}
		else {
			std::cout << "NO";
		}
	}
}