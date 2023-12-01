#include<iostream>

int main() {
	int a = 0, b = 0, c = 0;
	int count = 0;
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b >> c;
		if (a + b + c > 1)
			count += 1;
	}
	std::cout << count;
}