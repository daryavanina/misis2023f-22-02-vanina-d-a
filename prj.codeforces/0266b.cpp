#include<iostream>
int main() {
	int n = 0;
	int t = 0;
	std::cin >> n >> t;
	std::string s = "";
	std::cin >> s;
	for (int j = 0; j < t; j++) {
		for (int i = 0; i < n; i++) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				s[i] = 'G';
				s[i + 1] = 'B';
				i++;
			}
		}
	}
	std::cout << s;
}
