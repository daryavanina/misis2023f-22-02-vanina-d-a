#include<iostream>
int main() {
	int n = 0;
	std::cin >> n;
	int now = 0;
	int ans = 0;
	int a = 0;
	int b = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		now = now - a + b;
		if (now > ans) {
			ans = now;
		}
	}
	std::cout << ans;
}