#include<iostream>
int main() {
	int n = 0;
	int h = 0;
	std::cin >> n >> h;
	int ans = 0;
	int val = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> val;
		if (val > h) {
			ans += 2;
		}
		else {
			ans++;
		}
	}
	std::cout << ans;
}
