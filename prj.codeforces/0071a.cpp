#include<iostream>
#include<string>

int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		int n = 0;
		n = s.length();
		if (n > 10) {
			std::cout << s[0] + std::to_string(n - 2) + s[n - 1] << std::endl;
		}
		else {
			std::cout << s << std::endl;
		}
	}
}
